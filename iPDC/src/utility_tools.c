#include <gtk/gtk.h>
#include "align_sort.h"
#include "parser.h"
#include "osm-gps-map.h"
#include "map_vis.h"
#include "utility_tools.h"
#include "livechart.h"
#include "connections.h"

// TODO: change this when in production
#define UI_fILE "./assets/utility_tools.ui"
#define RED_IMAGE "./assets/red.png"
#define GREEN_IMAGE "./assets/green.png"
#define YELLOW_IMAGE "./assets/yellow.png"
#define BLUE_IMAGE "./assets/blue.png"
#define GREY_IMAGE "./assets/grey.png"
#define PINK_IMAGE "./assets/pink.png"

// void change_image(OsmGpsMap *map, float lat, float lon, OsmGpsMapImage *image)
// {
//     if (g_last_image)
//         osm_gps_map_image_remove(map, g_last_image);
//     osm_gps_map_image_add(map, lat, lon, image);
// }

// on closing the window kill the g_timeout_add

GdkRGBA getIndexColor(int index){
    GdkRGBA color;
    // get the color from the index mathematically
    switch(index){
        case 0:
            color.red = 1.0;
            color.green = 0.0;
            color.blue = 0.0;
            color.alpha = 1.0;
            break;
        case 1:
            color.red = 0.0;
            color.green = 1.0;
            color.blue = 0.0;
            color.alpha = 1.0;
            break;
        case 2:
            color.red = 0.0;
            color.green = 0.0;
            color.blue = 1.0;
            color.alpha = 1.0;
            break;
        case 3:
            color.red = 1.0;
            color.green = 1.0;
            color.blue = 0.0;
            color.alpha = 1.0;
            break;
        case 4:
            color.red = 1.0;
            color.green = 0.0;
            color.blue = 1.0;
            color.alpha = 1.0;
            break;
        case 5:
            color.red = 0.0;
            color.green = 1.0;
            color.blue = 1.0;
            color.alpha = 1.0;
            break;
        case 6:
            color.red = 1.0;
            color.green = 0.5;
            color.blue = 0.0;
            color.alpha = 1.0;
            break;
        case 7:
            color.red = 0.0;
            color.green = 0.5;
            color.blue = 1.0;
            color.alpha = 1.0;
            break;
        case 8:
            color.red = 0.5;
            color.green = 1.0;
            color.blue = 0.0;
            color.alpha = 1.0;
            break;
        case 9:
            color.red = 0.5;
            color.green = 0.0;
            color.blue = 1.0;
            color.alpha = 1.0;
            break;
        case 10:
            color.red = 1.0;
            color.green = 0.0;
            color.blue = 0.5;
            color.alpha = 1.0;
            break;
        case 11:
            color.red = 0.0;
            color.green = 1.0;
            color.blue = 0.5;
            color.alpha = 1.0;
            break;
        case 12:
            color.red = 0.5;
            color.green = 0.0;
            color.blue = 1.0;
            color.alpha = 1.0;
            break;
        case 13:
            color.red = 1.0;
            color.green = 0.5;
            color.blue = 0.0;
            color.alpha = 1.0;
            break;
        default:
            color.red = 0.0+0.1*index;
            color.green = 0.0+0.9*index;
            color.blue = 0.0+0.5*index;
            color.alpha = 1.0;
            break;
    }
    return color;
}


void on_window_destroy(GtkWidget *widget, gpointer data)
{
    g_source_remove(GPOINTER_TO_UINT(data));
    gtk_main_quit();
}

// on clicking the button voltage
void on_voltage_clicked(GtkButton *but, gpointer udata)
{
    curr_measurement = 0;

    gtk_widget_show(utdata->ml_vol);
    gtk_widget_show(utdata->graph_layoutvol);
    gtk_widget_show(utdata->swvol);
    gtk_widget_show(utdata->graphlabel);

    gtk_label_set_label(utdata->maplabel, "Voltage Magnitude");
    gtk_label_set_label(utdata->graphlabel, "Voltage Magnitude");

    gtk_widget_hide(utdata->ml_freq);
    gtk_widget_hide(utdata->ml_dfreq);
    gtk_widget_hide(utdata->ml_ad);
    gtk_widget_hide(utdata->graph_layoutfreq);
    gtk_widget_hide(utdata->graph_layoutdfreq);
    gtk_widget_hide(utdata->swfreq);
    gtk_widget_hide(utdata->swdfreq);

    gtk_widget_hide(utdata->algorithm);
    gtk_widget_hide(utdata->dimmension);
    gtk_widget_hide(utdata->algo_label);
    gtk_widget_hide(utdata->dimm_label);
    gtk_widget_set_sensitive(utdata->voltage, FALSE);
    gtk_widget_set_sensitive(utdata->frequency, TRUE);
    gtk_widget_set_sensitive(utdata->dfreq, TRUE);
    gtk_widget_set_sensitive(utdata->attack_detection, TRUE);
    printf("Voltage\n");
}

// on clicking the button frequency
void on_frequency_clicked(GtkButton *but, gpointer udata)
{
    curr_measurement = 1;

    gtk_widget_show(utdata->ml_freq);
    gtk_widget_show(utdata->graph_layoutfreq);
    gtk_widget_show(utdata->swfreq);
    gtk_widget_show(utdata->graphlabel);

    gtk_label_set_label(utdata->maplabel, "Frequency");
    gtk_label_set_label(utdata->graphlabel, "Frequency");

    gtk_widget_hide(utdata->ml_vol);
    gtk_widget_hide(utdata->ml_dfreq);
    gtk_widget_hide(utdata->ml_ad);
    gtk_widget_hide(utdata->swdfreq);
    gtk_widget_hide(utdata->swvol);
    gtk_widget_hide(utdata->graph_layoutdfreq);
    gtk_widget_hide(utdata->graph_layoutvol);


    gtk_widget_hide(utdata->algorithm);
    gtk_widget_hide(utdata->dimmension);
    gtk_widget_hide(utdata->algo_label);
    gtk_widget_hide(utdata->dimm_label);
    gtk_widget_set_sensitive(utdata->voltage, TRUE);
    gtk_widget_set_sensitive(utdata->frequency, FALSE);
    gtk_widget_set_sensitive(utdata->dfreq, TRUE);
    gtk_widget_set_sensitive(utdata->attack_detection, TRUE);

    printf("Frequency\n");
}

// on clicking the button dfreq
void on_dfreq_clicked(GtkButton *but, gpointer udata)
{
    curr_measurement = 2;

    gtk_widget_show(utdata->ml_dfreq);
    gtk_widget_show(utdata->graph_layoutdfreq);
    gtk_widget_show(utdata->swdfreq);
    gtk_widget_show(utdata->graphlabel);

    gtk_label_set_label(utdata->maplabel, "Frequency Rate");
    gtk_label_set_label(utdata->graphlabel, "Frequency Rate");

    gtk_widget_hide(utdata->ml_vol);
    gtk_widget_hide(utdata->ml_freq);
    gtk_widget_hide(utdata->ml_ad);
    gtk_widget_hide(utdata->graph_layoutfreq);
    gtk_widget_hide(utdata->graph_layoutvol);
    gtk_widget_hide(utdata->swvol);
    gtk_widget_hide(utdata->swfreq);


    gtk_widget_hide(utdata->algorithm);
    gtk_widget_hide(utdata->dimmension);
    gtk_widget_hide(utdata->algo_label);
    gtk_widget_hide(utdata->dimm_label);
    gtk_widget_set_sensitive(utdata->voltage, TRUE);
    gtk_widget_set_sensitive(utdata->frequency, TRUE);
    gtk_widget_set_sensitive(utdata->dfreq, FALSE);
    gtk_widget_set_sensitive(utdata->attack_detection, TRUE);

    printf("dfreq\n");
}

// on clicking the button attack_detection
void on_attack_detection_clicked(GtkButton *but, gpointer udata)
{
    curr_measurement = 3;
    gtk_widget_set_sensitive(utdata->voltage, TRUE);
    gtk_widget_set_sensitive(utdata->frequency, TRUE);
    gtk_widget_set_sensitive(utdata->dfreq, TRUE);
    gtk_widget_set_sensitive(utdata->attack_detection, FALSE);

    gtk_widget_show(utdata->algorithm);
    gtk_widget_show(utdata->dimmension);
    gtk_widget_show(utdata->algo_label);
    gtk_widget_show(utdata->dimm_label);
    gtk_widget_show(utdata->ml_ad);

    gtk_label_set_label(utdata->maplabel, "Attack Detection");

    gtk_widget_hide(utdata->ml_vol);
    gtk_widget_hide(utdata->ml_freq);
    gtk_widget_hide(utdata->ml_dfreq);
    gtk_widget_hide(utdata->swvol);
    gtk_widget_hide(utdata->swfreq);
    gtk_widget_hide(utdata->swdfreq);
    gtk_widget_hide(utdata->graph_layoutdfreq);
    gtk_widget_hide(utdata->graph_layoutfreq);
    gtk_widget_hide(utdata->graph_layoutvol);
    gtk_widget_hide(utdata->graphlabel);

    printf("Attack Detection\n");
}

void set_algo(GtkComboBox *combo, gpointer udata)
{
    algorithm = gtk_combo_box_get_active(combo);
    printf("Algorithm: %d\n", algorithm);
}

void set_dimm(GtkComboBox *combo, gpointer udata)
{
    dimmension = gtk_combo_box_get_active(combo);

    printf("dimmension = %d\n", dimmension);
}




void utility_tools(GtkButton *but, gpointer udata)
{
    GdkPixbuf *g_red_image;
    GdkPixbuf *g_green_image;
    GdkPixbuf *g_yellow_image;
    GdkPixbuf *g_blue_image;
    GdkPixbuf *g_pink_image;
    GdkPixbuf *g_grey_image;

    OsmGpsMapImage *g_last_image;
    // -------------------
    GtkBuilder *builder;
    GError *error = NULL;
    builder = gtk_builder_new();

    if (!gtk_builder_add_from_file(builder, UI_fILE, &error))
    {
        g_warning("%s", error->message);
        g_free(error);
    }

    utdata = g_slice_new(UtData);
    utdata->util_window = GTK_WIDGET(gtk_builder_get_object(builder, "util_window"));
    utdata->voltage = GTK_WIDGET(gtk_builder_get_object(builder, "voltage"));
    utdata->frequency = GTK_WIDGET(gtk_builder_get_object(builder, "freq"));
    utdata->dfreq = GTK_WIDGET(gtk_builder_get_object(builder, "dfreq"));
    utdata->attack_detection = GTK_WIDGET(gtk_builder_get_object(builder, "attack_detection"));
    utdata->algorithm = GTK_WIDGET(gtk_builder_get_object(builder, "algorithm"));
    utdata->dimmension = GTK_WIDGET(gtk_builder_get_object(builder, "dimmension"));
    // utdata->util_map = GTK_WIDGET(gtk_builder_get_object(builder, "util_map"));
    utdata->map_layout = GTK_CONTAINER(gtk_builder_get_object(builder, "map_layout"));
    utdata->graph_layoutvol = GTK_CONTAINER(gtk_builder_get_object(builder, "graph_layoutvol"));
    utdata->graph_layoutfreq = GTK_CONTAINER(gtk_builder_get_object(builder, "graph_layoutfreq"));
    utdata->graph_layoutdfreq = GTK_CONTAINER(gtk_builder_get_object(builder, "graph_layoutdfreq"));
    utdata->algo_label = GTK_WIDGET(gtk_builder_get_object(builder, "algo_label"));
    utdata->dimm_label = GTK_WIDGET(gtk_builder_get_object(builder, "dimm_label"));
    utdata->ml_vol = GTK_WIDGET(gtk_builder_get_object(builder, "mlvol"));
    utdata->ml_freq = GTK_WIDGET(gtk_builder_get_object(builder, "mlfreq"));
    utdata->ml_dfreq = GTK_WIDGET(gtk_builder_get_object(builder, "mldfreq"));
    utdata->ml_ad = GTK_WIDGET(gtk_builder_get_object(builder, "mlad"));
    utdata->swvol = GTK_WIDGET(gtk_builder_get_object(builder, "swvol"));
    utdata->swfreq = GTK_WIDGET(gtk_builder_get_object(builder, "swfreq"));
    utdata->swdfreq = GTK_WIDGET(gtk_builder_get_object(builder, "swdfreq"));
    utdata->maplabel = GTK_WIDGET(gtk_builder_get_object(builder, "maplabel"));
    utdata->graphlabel = GTK_WIDGET(gtk_builder_get_object(builder, "graphlabel"));

    gtk_widget_set_sensitive(utdata->voltage, FALSE);
    gtk_widget_set_visible(utdata->algorithm, FALSE);
    gtk_widget_set_visible(utdata->dimmension, FALSE);

    gtk_widget_set_visible(utdata->graph_layoutfreq, FALSE);
    gtk_widget_set_visible(utdata->graph_layoutdfreq, FALSE);


    g_signal_connect(utdata->voltage, "clicked", G_CALLBACK(on_voltage_clicked), NULL);
    g_signal_connect(utdata->frequency, "clicked", G_CALLBACK(on_frequency_clicked), NULL);
    g_signal_connect(utdata->dfreq, "clicked", G_CALLBACK(on_dfreq_clicked), NULL);
    g_signal_connect(utdata->attack_detection, "clicked", G_CALLBACK(on_attack_detection_clicked), NULL);
    g_signal_connect(utdata->algorithm, "changed", G_CALLBACK(set_algo), NULL);
    g_signal_connect(utdata->dimmension, "changed", G_CALLBACK(set_dimm), NULL);

    g_red_image = gdk_pixbuf_new_from_file_at_size(RED_IMAGE, 24, 24, NULL);
    g_green_image = gdk_pixbuf_new_from_file_at_size(GREEN_IMAGE, 24, 24, NULL);
    g_grey_image = gdk_pixbuf_new_from_file_at_size(GREY_IMAGE, 24, 24, NULL);

    utdata->util_map = g_object_new(OSM_TYPE_GPS_MAP,
                                    "map-source", OSM_GPS_MAP_SOURCE_OSMC_TRAILS,
                                    "tile-cache", "/tmp/",
                                    NULL);

    // TODO: centering the map
    osm_gps_map_set_center_and_zoom(utdata->util_map, 15.4589, 75.0078, 10);

    // TODO: add the points to window.
    // g_last_image = osm_gps_map_image_add(utdata->util_map, 15.4589, 75.0078, g_red_image);
    // g_last_image = osm_gps_map_image_add(utdata->util_map, 15.518597, 74.925584, g_green_image);

    
    curr_measurement = 0;
    algorithm = 0;
    dimmension = 0;
    myParameters parameters = {utdata->util_map, g_red_image, g_green_image, g_grey_image, g_last_image};
    gpointer data = (gpointer)&parameters;

    gtk_widget_set_size_request(GTK_WIDGET(utdata->util_map), 600, 500);

    gtk_container_add(utdata->map_layout, GTK_WIDGET(utdata->util_map));

    // add live chart
    // serie = live_chart_serie_new("IIT", (LiveChartSerieRenderer*)live_chart_line_new(live_chart_values_new(10000)));
    // // live_chart set color to the serie
    // GdkRGBA color = getIndexColor(0);
    // live_chart_path_set_color(live_chart_serie_get_line(serie), &color);

    // iterate over llptr and load the map_vis_head structure

    // vis_data_head = (struct map_vis_head *)malloc(sizeof(struct vis_data));
    
    LiveChartConfig *config_vol = live_chart_config_new();
    live_chart_yaxis_set_unit(config_vol->y_axis, "V");
    live_chart_xaxis_set_tick_interval(config_vol->x_axis, 20);
    live_chart_xaxis_set_tick_length(config_vol->x_axis, 100);
    live_chart_yaxis_update_bounds(config_vol->y_axis, 1);
    live_chart_path_set_visible(config_vol->x_axis->lines, FALSE);

    LiveChartChart *chart_vol = live_chart_chart_new(config_vol);
    
    LiveChartConfig *config_freq = live_chart_config_new();
    live_chart_yaxis_set_unit(config_freq->y_axis, "mHz");
    live_chart_xaxis_set_tick_interval(config_freq->x_axis, 20);
    live_chart_xaxis_set_tick_length(config_freq->x_axis, 100);
    live_chart_yaxis_update_bounds(config_freq->y_axis, 1);
    live_chart_path_set_visible(config_freq->x_axis->lines, FALSE);

    LiveChartChart *chart_freq = live_chart_chart_new(config_freq);


    LiveChartConfig *config_dfreq = live_chart_config_new();
    live_chart_yaxis_set_unit(config_dfreq->y_axis, "mHz");
    live_chart_xaxis_set_tick_interval(config_dfreq->x_axis, 20);
    live_chart_xaxis_set_tick_length(config_dfreq->x_axis, 100);
    live_chart_yaxis_update_bounds(config_dfreq->y_axis, 1);
    live_chart_path_set_visible(config_dfreq->x_axis->lines, FALSE);

    LiveChartChart *chart_dfreq = live_chart_chart_new(config_dfreq);




    // live_chart_chart_add_serie(chart, serie);

    struct Lower_Layer_Details *llptr = LLfirst;
    vis_data_head = (struct vis_data *)malloc(sizeof(struct vis_data));
    struct vis_data * temp_visptr = vis_data_head;
    int index = 0;
    while (llptr != NULL)
    {
        printf("\ncat\n");
        temp_visptr->id = llptr->pmuid;
        temp_visptr->lat = llptr->latitude;
        temp_visptr->lon = llptr->longitude;
        temp_visptr->last_image = osm_gps_map_image_add(utdata->util_map, llptr->latitude, llptr->longitude, g_grey_image); // TODO: change the image

        temp_visptr->serie_freq = live_chart_serie_new(llptr->ip, (LiveChartSerieRenderer*)live_chart_line_new(live_chart_values_new(10000)));
        GdkRGBA color = getIndexColor(index);
        live_chart_path_set_color(live_chart_serie_get_line(temp_visptr->serie_freq), &color);
        live_chart_chart_add_serie(chart_freq, temp_visptr->serie_freq);

        temp_visptr->serie_vol = live_chart_serie_new(llptr->ip, (LiveChartSerieRenderer*)live_chart_line_new(live_chart_values_new(10000)));
        live_chart_path_set_color(live_chart_serie_get_line(temp_visptr->serie_vol), &color);
        live_chart_chart_add_serie(chart_vol, temp_visptr->serie_vol);

        temp_visptr->serie_dfreq = live_chart_serie_new(llptr->ip, (LiveChartSerieRenderer*)live_chart_line_new(live_chart_values_new(10000)));
        live_chart_path_set_color(live_chart_serie_get_line(temp_visptr->serie_dfreq), &color);
        live_chart_chart_add_serie(chart_dfreq, temp_visptr->serie_dfreq);

        temp_visptr->next = (struct vis_data *)malloc(sizeof(struct vis_data));
        temp_visptr = temp_visptr->next;
        index++;
        llptr = llptr->next;
    }
    temp_visptr->next = NULL;

    guint pid = g_timeout_add(20, (GSourceFunc)update_images, data);


    // gtk_widget_set_hexpand(GTK_WIDGET(chart), TRUE);
    // gtk_widget_set_vexpand(GTK_WIDGET(chart), TRUE);
    gtk_widget_set_size_request(GTK_WIDGET(chart_freq), 600, 150);
    gtk_widget_set_size_request(GTK_WIDGET(chart_vol), 600, 150);
    gtk_widget_set_size_request(GTK_WIDGET(chart_dfreq), 600, 150);

    gtk_container_add(utdata->graph_layoutvol, GTK_WIDGET(chart_vol));
    gtk_container_add(utdata->graph_layoutfreq, GTK_WIDGET(chart_freq));
    gtk_container_add(utdata->graph_layoutdfreq, GTK_WIDGET(chart_dfreq));

    


    

    g_signal_connect(utdata->util_window, "destroy", G_CALLBACK(on_window_destroy), GUINT_TO_POINTER(pid));

    // //g_last_image =  osm_gps_map_image_add(util_map,15.4589, 75.0078, g_red_image);
    // g_last_image =  osm_gps_map_image_add(utdata->util_map,15.518597, 74.925584, g_green_image);
    // myParameters parameters = {utdata->util_map, g_red_image, g_green_image, g_last_image};
    // gpointer data = (gpointer) &parameters;
    // guint pid = g_timeout_add(20, (GSourceFunc) update_images, data);
    // gtk_widget_set_vexpand(GTK_WIDGET(utdata->util_map), TRUE);
    // gtk_widget_set_hexpand(GTK_WIDGET(utdata->util_map), TRUE);
    gtk_widget_show_all(utdata->util_window);

    gtk_widget_hide(utdata->algorithm);
    gtk_widget_hide(utdata->dimmension);
    gtk_widget_hide(utdata->algo_label);
    gtk_widget_hide(utdata->dimm_label);
    gtk_widget_hide(utdata->ml_freq);
    gtk_widget_hide(utdata->ml_dfreq);
    gtk_widget_hide(utdata->ml_ad);
    gtk_widget_hide(utdata->swfreq);
    gtk_widget_hide(utdata->swdfreq);
    gtk_widget_hide(utdata->graph_layoutdfreq);
    gtk_widget_hide(utdata->graph_layoutfreq);

    gtk_main();
}