/* -----------------------------------------------------------------------------
 * Kmeans.c
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

#include "parser.h"
#include <stdlib.h>
#include <stdio.h>
#include <gtk/gtk.h>
#include <math.h>

// FILE *fp;

struct kmeans1
{
    int idcode;
    unsigned long long int count_A;
    unsigned long long int count_B;
    unsigned long long int count_C;
    long double A;
    long double B;
    long double C;
    struct kmeans1 *next;
};

struct kmeans1 *headk = NULL;

/**
 * @brief It is used to check event detection using Kmeans clustering using frequency
 *        called in data_vis.c
 *
 * @param df data frame
 * @return gboolean
 */
gboolean kmeans(struct data_frame *df)
{
    if (headk == NULL)
    {
        headk = (struct kmeans1 *)malloc(sizeof(struct kmeans1));
        headk->A = 50;
        headk->B = 49;
        headk->C = 51;
        headk->count_A = 1000;
        headk->count_B = 1000;
        headk->count_C = 1000;
        headk->next = NULL;
        headk->idcode = to_intconvertor(df->idcode);
        return TRUE;
    }
    else
    {
        struct kmeans1 *temp = headk;
        struct kmeans1 *previous = NULL;
        while (temp != NULL)
        {
            if (temp->idcode == to_intconvertor(df->idcode))
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

                long double diff_A = fabs(temp->A - CURR_FREQ);
                long double diff_B = fabs(temp->B - CURR_FREQ);
                long double diff_C = fabs(temp->C - CURR_FREQ);
                // fp = fopen("points.csv","a");
                // printf("A: %Lf, B: %Lf, C: %Lf\n",A,B,C);
                // fprintf(fp,"%Lf, %Lf, %Lf\n",A,B,C);
                // fclose(fp);

                if (diff_A <= diff_B && diff_A <= diff_C)
                {
                    temp->A = ((temp->count_A * (temp->A)) + CURR_FREQ) / (++temp->count_A);
                    return TRUE;
                }
                else if (diff_B < diff_C)
                {
                    temp->B = ((temp->count_B * (temp->B)) + CURR_FREQ) / (++temp->count_B);
                    return FALSE;
                }
                else
                {
                    temp->C = ((temp->count_C * (temp->C)) + CURR_FREQ) / (++temp->count_C);
                    return FALSE;
                }
                break;
            }
            previous = temp;
            temp = temp->next;
        }
        if (temp == NULL)
        {
            struct kmeans1 *bring = (struct kmeans1 *)malloc(sizeof(struct kmeans1));
            bring->A = 50;
            bring->B = 49;
            bring->C = 51;
            bring->count_A = 1000;
            bring->count_B = 1000;
            bring->count_C = 1000;
            bring->next = NULL;
            bring->idcode = to_intconvertor(df->idcode);
            previous->next = bring;
            return TRUE;
        }
    }
}