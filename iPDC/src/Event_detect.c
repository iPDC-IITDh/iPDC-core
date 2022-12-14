/* -----------------------------------------------------------------------------
 * Event_detect.c
 *
 * iPDC - Phasor Data Concentrator
 *
 * Copyright (C) 2022-2023 Nitesh Pandit
 * Copyright (C) 2022-2023 Kedar V. Khandeparkar
 * Copyright (C) 2022-2023 Pavan Kumar V Patil
 * Copyright (C) 2022-2023 Karthik Murakonda
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 * Authors:
 *		M V Karthik <karthik.murakonda14@gmail.com>
 *		Pavan Kumar V Patil <pavanvpatil01@gmail.com>
 *
 * ----------------------------------------------------------------------------- */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include <math.h>
#include "parser.h"
#include "Event_detect.h"

/*Used in maintaining Nodes for all PMUS*/
struct freqlist
{
    int idcode;
    long double AVERAGE_OF_FREQUENCY;
    unsigned long long int COUNT;
    struct freqlist *next;
};

/*Used in maintaining Nodes for all PMUS*/
struct vollist
{
    int idcode;
    long double AVERAGE_OF_VOLTAGE;
    unsigned long long int COUNT;
    struct vollist *next;
};

struct freqlist *head = NULL;
struct vollist *headvol = NULL;

/**
 * @brief It is used to check event detection using Basic appraoch using freq
 *        called in data_vis.c
 *
 * @param df data frame
 * @return gboolean
 */
gboolean attack_detect_freq(struct data_frame *df)
{
    if (head == NULL)
    {
        head = (struct freqlist *)malloc(sizeof(struct freqlist));
        head->AVERAGE_OF_FREQUENCY = 50;
        head->COUNT = 500;
        head->idcode = to_intconvertor(df->idcode);
        head->next = NULL;
        return TRUE;
    }
    else
    {
        struct freqlist *temp = head;
        struct freqlist *previous = NULL;
        while (temp != NULL)
        {
            if (to_intconvertor(df->idcode) == temp->idcode)
            {
                float CURR_FREQ;
                if (df->dpmu[0]->fmt->freq == '0')
                {
                    CURR_FREQ = 50 + to_intconvertor(df->dpmu[0]->freq) * 1e-3;
                }
                else
                {
                    CURR_FREQ = decode_ieee_single(df->dpmu[0]->freq);
                }
                printf("Current freq: %f\n", CURR_FREQ);
                float DETECT_PERCENT = (fabs(temp->AVERAGE_OF_FREQUENCY - CURR_FREQ) / (temp->AVERAGE_OF_FREQUENCY * 1.0f)) * 100;

                /* detecting based on thershold frequency can vary only around 0.2 hz*/
                if (DETECT_PERCENT > 0.9)
                {
                    printf("\033[0;31m");
                    printf("ATTACK DETECTED!");
                    printf("\033[0m");
                    return FALSE;
                }
                else
                {
                    printf("\033[0;32m");
                    printf("NO PROBLEM :)\n");
                    printf("\033[0m");

                    /* updating mean of frequency */
                    temp->AVERAGE_OF_FREQUENCY = ((temp->AVERAGE_OF_FREQUENCY * temp->COUNT) + CURR_FREQ) / ++temp->COUNT;
                    printf("avg freq: %Lf\n", temp->AVERAGE_OF_FREQUENCY);
                    return TRUE;
                }
                break;
            }
            previous = temp;
            temp = temp->next;
        }
        if (temp == NULL)
        {
            struct freqlist *bring = (struct freqlist *)malloc(sizeof(struct freqlist));
            bring = (struct freqlist *)malloc(sizeof(struct freqlist));
            bring->AVERAGE_OF_FREQUENCY = 50;
            bring->COUNT = 500;
            bring->idcode = to_intconvertor(df->idcode);
            bring->next = NULL;
            previous->next = bring;
            return TRUE;
        }
    }
}

/**
 * @brief It is used to check event detection using Basic appraoch using voltage
 *        called in data_vis.c
 *
 * @param df data frame
 * @return gboolean
 */
gboolean attack_detect_vol(struct data_frame *df)
{
    float CURR_vol;
    if (df->dpmu[0]->fmt->phasor == '0')
    {
        if (df->dpmu[0]->fmt->polar == '0')
        {
            unsigned char s1[2];
            unsigned char s2[2];
            strncpy(s1, df->dpmu[0]->phasors[0], 2);
            strncpy(s2, df->dpmu[0]->phasors[0] + 2, 2);
            long double v1 = to_intconvertor(s1);
            long double v2 = to_intconvertor(s2);
            CURR_vol = sqrt((v1 * v1) + (v2 * v2));
        }
        else
        {
            unsigned char s1[2];
            strncpy(s1, df->dpmu[0]->phasors[0], 2);
            CURR_vol = to_intconvertor(s1);
        }
    }
    else
    {
        if (df->dpmu[0]->fmt->polar == '0')
        {
            unsigned char s1[4];
            unsigned char s2[4];
            strncpy(s1, df->dpmu[0]->phasors[0], 4);
            strncpy(s2, df->dpmu[0]->phasors[0] + 2, 4);
            long double v1 = decode_ieee_single(s1);
            long double v2 = decode_ieee_single(s2);
            CURR_vol = sqrt((v1 * v1) + (v2 * v2));
        }
        else
        {
            unsigned char s1[4];
            strncpy(s1, df->dpmu[0]->phasors[0], 4);
            CURR_vol = decode_ieee_single(s1);
        }
    }
    if (headvol == NULL)
    {
        headvol = (struct vollist *)malloc(sizeof(struct vollist));
        headvol->AVERAGE_OF_VOLTAGE = CURR_vol;
        headvol->COUNT = 500;
        headvol->idcode = to_intconvertor(df->idcode);
        headvol->next = NULL;
        return TRUE;
    }
    else
    {
        struct vollist *temp = headvol;
        struct vollist *previous = NULL;
        while (temp != NULL)
        {
            if (to_intconvertor(df->idcode) == temp->idcode)
            {
                printf("Current vol: %f\n", CURR_vol);
                float DETECT_PERCENT = (fabs(temp->AVERAGE_OF_VOLTAGE - CURR_vol) / (temp->AVERAGE_OF_VOLTAGE * 1.0f)) * 100;

                /* detecting based on thershold VOLTAGE can vary only around 0.2 hz*/
                if (DETECT_PERCENT > 5)
                {
                    printf("\033[0;31m");
                    printf("ATTACK DETECTED!");
                    printf("\033[0m");
                    return FALSE;
                }
                else
                {
                    printf("\033[0;32m");
                    printf("NO PROBLEM :)\n");
                    printf("\033[0m");

                    /* updating mean of VOLTAGE */
                    temp->AVERAGE_OF_VOLTAGE = ((temp->AVERAGE_OF_VOLTAGE * temp->COUNT) + CURR_vol) / ++temp->COUNT;
                    printf("avg vol: %Lf\n", temp->AVERAGE_OF_VOLTAGE);
                    return TRUE;
                }
                break;
            }
            previous = temp;
            temp = temp->next;
        }
        if (temp == NULL)
        {
            struct vollist *bring = (struct vollist *)malloc(sizeof(struct vollist));
            bring = (struct vollist *)malloc(sizeof(struct vollist));
            bring->AVERAGE_OF_VOLTAGE = CURR_vol;
            bring->COUNT = 500;
            previous->next = bring;
            bring->idcode = to_intconvertor(df->idcode);
            bring->next = NULL;
            return TRUE;
        }
    }
}

/**
 * @brief It is used to check event detection using Basic appraoch using voltage and frequency
 *        called in data_vis.c
 *
 * @param df data frame
 * @return gboolean
 */
gboolean attack_detect_freq_vol(struct data_frame *df)
{
    return attack_detect_freq(df) && attack_detect_vol(df);
}