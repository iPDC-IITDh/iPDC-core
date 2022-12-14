/* static_chart.c generated by valac 0.56.0, the Vala compiler
 * generated from static_chart.vala, do not modify */

#include "livechart.h"
#include <gee.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <gtk/gtk.h>
#include <cairo-gobject.h>
#include <float.h>
#include <math.h>

enum  {
	LIVE_CHART_STATIC_STATIC_CHART_0_PROPERTY,
	LIVE_CHART_STATIC_STATIC_CHART_GRID_PROPERTY,
	LIVE_CHART_STATIC_STATIC_CHART_BACKGROUND_PROPERTY,
	LIVE_CHART_STATIC_STATIC_CHART_LEGEND_PROPERTY,
	LIVE_CHART_STATIC_STATIC_CHART_NUM_PROPERTIES
};
static GParamSpec* live_chart_static_static_chart_properties[LIVE_CHART_STATIC_STATIC_CHART_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _live_chart_config_unref0(var) ((var == NULL) ? NULL : (var = (live_chart_config_unref (var), NULL)))

struct _LiveChartStaticStaticChartPrivate {
	LiveChartStaticStaticGrid* _grid;
	LiveChartBackground* _background;
	LiveChartLegend* _legend;
	GeeArrayList* categories;
};

static gint LiveChartStaticStaticChart_private_offset;
static gpointer live_chart_static_static_chart_parent_class = NULL;

static void __lambda16_ (LiveChartStaticStaticChart* self,
                  GtkAllocation* allocation);
static void ___lambda16__gtk_widget_size_allocate (GtkWidget* _sender,
                                            GtkAllocation* allocation,
                                            gpointer self);
static gboolean live_chart_static_static_chart_render (LiveChartStaticStaticChart* self,
                                                GtkWidget* _,
                                                cairo_t* ctx);
static gboolean _live_chart_static_static_chart_render_gtk_widget_draw (GtkWidget* _sender,
                                                                 cairo_t* cr,
                                                                 gpointer self);
static void live_chart_static_static_chart_finalize (GObject * obj);
static GType live_chart_static_static_chart_get_type_once (void);
static void _vala_live_chart_static_static_chart_get_property (GObject * object,
                                                        guint property_id,
                                                        GValue * value,
                                                        GParamSpec * pspec);
static void _vala_live_chart_static_static_chart_set_property (GObject * object,
                                                        guint property_id,
                                                        const GValue * value,
                                                        GParamSpec * pspec);
static inline gpointer _vala_memdup2 (gconstpointer mem,
                        gsize byte_size);

static inline gpointer
live_chart_static_static_chart_get_instance_private (LiveChartStaticStaticChart* self)
{
	return G_STRUCT_MEMBER_P (self, LiveChartStaticStaticChart_private_offset);
}

static gpointer
_live_chart_config_ref0 (gpointer self)
{
#line 17 "../src/static/static_chart.vala"
	return self ? live_chart_config_ref (self) : NULL;
#line 72 "static_chart.c"
}

static void
__lambda16_ (LiveChartStaticStaticChart* self,
             GtkAllocation* allocation)
{
	LiveChartConfig* _tmp0_;
	GtkAllocation _tmp1_;
	LiveChartConfig* _tmp2_;
	GtkAllocation _tmp3_;
#line 18 "../src/static/static_chart.vala"
	g_return_if_fail (allocation != NULL);
#line 19 "../src/static/static_chart.vala"
	_tmp0_ = self->config;
#line 19 "../src/static/static_chart.vala"
	_tmp1_ = *allocation;
#line 19 "../src/static/static_chart.vala"
	live_chart_config_set_height (_tmp0_, _tmp1_.height);
#line 20 "../src/static/static_chart.vala"
	_tmp2_ = self->config;
#line 20 "../src/static/static_chart.vala"
	_tmp3_ = *allocation;
#line 20 "../src/static/static_chart.vala"
	live_chart_config_set_width (_tmp2_, _tmp3_.width);
#line 97 "static_chart.c"
}

static void
___lambda16__gtk_widget_size_allocate (GtkWidget* _sender,
                                       GtkAllocation* allocation,
                                       gpointer self)
{
#line 18 "../src/static/static_chart.vala"
	__lambda16_ ((LiveChartStaticStaticChart*) self, allocation);
#line 107 "static_chart.c"
}

static gboolean
_live_chart_static_static_chart_render_gtk_widget_draw (GtkWidget* _sender,
                                                        cairo_t* cr,
                                                        gpointer self)
{
	gboolean result;
	result = live_chart_static_static_chart_render ((LiveChartStaticStaticChart*) self, _sender, cr);
#line 23 "../src/static/static_chart.vala"
	return result;
#line 119 "static_chart.c"
}

LiveChartStaticStaticChart*
live_chart_static_static_chart_construct (GType object_type,
                                          LiveChartConfig* config)
{
	LiveChartStaticStaticChart * self = NULL;
	LiveChartConfig* _tmp0_;
	LiveChartStaticStaticSeries* _tmp1_;
#line 16 "../src/static/static_chart.vala"
	g_return_val_if_fail (config != NULL, NULL);
#line 16 "../src/static/static_chart.vala"
	self = (LiveChartStaticStaticChart*) g_object_new (object_type, NULL);
#line 17 "../src/static/static_chart.vala"
	_tmp0_ = _live_chart_config_ref0 (config);
#line 17 "../src/static/static_chart.vala"
	_live_chart_config_unref0 (self->config);
#line 17 "../src/static/static_chart.vala"
	self->config = _tmp0_;
#line 18 "../src/static/static_chart.vala"
	g_signal_connect_object ((GtkWidget*) self, "size-allocate", (GCallback) ___lambda16__gtk_widget_size_allocate, self, 0);
#line 23 "../src/static/static_chart.vala"
	g_signal_connect_object ((GtkWidget*) self, "draw", (GCallback) _live_chart_static_static_chart_render_gtk_widget_draw, self, 0);
#line 25 "../src/static/static_chart.vala"
	_tmp1_ = live_chart_static_static_series_new (self);
#line 25 "../src/static/static_chart.vala"
	_g_object_unref0 (self->series);
#line 25 "../src/static/static_chart.vala"
	self->series = _tmp1_;
#line 16 "../src/static/static_chart.vala"
	return self;
#line 151 "static_chart.c"
}

LiveChartStaticStaticChart*
live_chart_static_static_chart_new (LiveChartConfig* config)
{
#line 16 "../src/static/static_chart.vala"
	return live_chart_static_static_chart_construct (LIVE_CHART_STATIC_TYPE_STATIC_CHART, config);
#line 159 "static_chart.c"
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 29 "../src/static/static_chart.vala"
	return self ? g_object_ref (self) : NULL;
#line 167 "static_chart.c"
}

void
live_chart_static_static_chart_set_categories (LiveChartStaticStaticChart* self,
                                               GeeArrayList* categories)
{
	GeeArrayList* _tmp0_;
	LiveChartConfig* _tmp1_;
	GeeArrayList* _tmp2_;
#line 28 "../src/static/static_chart.vala"
	g_return_if_fail (self != NULL);
#line 28 "../src/static/static_chart.vala"
	g_return_if_fail (categories != NULL);
#line 29 "../src/static/static_chart.vala"
	_tmp0_ = _g_object_ref0 (categories);
#line 29 "../src/static/static_chart.vala"
	_g_object_unref0 (self->priv->categories);
#line 29 "../src/static/static_chart.vala"
	self->priv->categories = _tmp0_;
#line 30 "../src/static/static_chart.vala"
	_tmp1_ = self->config;
#line 30 "../src/static/static_chart.vala"
	_tmp2_ = _g_object_ref0 (categories);
#line 30 "../src/static/static_chart.vala"
	_g_object_unref0 (_tmp1_->categories);
#line 30 "../src/static/static_chart.vala"
	_tmp1_->categories = _tmp2_;
#line 195 "static_chart.c"
}

void
live_chart_static_static_chart_add_serie (LiveChartStaticStaticChart* self,
                                          LiveChartStaticStaticSerie* serie)
{
	LiveChartStaticStaticSeries* _tmp0_;
	LiveChartStaticStaticSerie* _tmp1_;
	LiveChartStaticStaticSerie* _tmp2_;
#line 33 "../src/static/static_chart.vala"
	g_return_if_fail (self != NULL);
#line 33 "../src/static/static_chart.vala"
	g_return_if_fail (serie != NULL);
#line 34 "../src/static/static_chart.vala"
	_tmp0_ = self->series;
#line 34 "../src/static/static_chart.vala"
	_tmp1_ = live_chart_static_static_series_register (_tmp0_, serie);
#line 34 "../src/static/static_chart.vala"
	_tmp2_ = _tmp1_;
#line 34 "../src/static/static_chart.vala"
	_g_object_unref0 (_tmp2_);
#line 217 "static_chart.c"
}

static gboolean
live_chart_static_static_chart_render (LiveChartStaticStaticChart* self,
                                       GtkWidget* _,
                                       cairo_t* ctx)
{
	LiveChartConfig* _tmp0_;
	LiveChartLegend* _tmp1_;
	LiveChartBackground* _tmp2_;
	LiveChartConfig* _tmp3_;
	LiveChartStaticStaticGrid* _tmp4_;
	LiveChartConfig* _tmp5_;
	LiveChartLegend* _tmp6_;
	LiveChartBoundaries boundaries = {0};
	LiveChartConfig* _tmp9_;
	LiveChartBoundaries _tmp10_ = {0};
	gboolean result;
#line 38 "../src/static/static_chart.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 38 "../src/static/static_chart.vala"
	g_return_val_if_fail (_ != NULL, FALSE);
#line 38 "../src/static/static_chart.vala"
	g_return_val_if_fail (ctx != NULL, FALSE);
#line 40 "../src/static/static_chart.vala"
	_tmp0_ = self->config;
#line 40 "../src/static/static_chart.vala"
	_tmp1_ = self->priv->_legend;
#line 40 "../src/static/static_chart.vala"
	live_chart_config_configure (_tmp0_, ctx, _tmp1_);
#line 42 "../src/static/static_chart.vala"
	_tmp2_ = self->priv->_background;
#line 42 "../src/static/static_chart.vala"
	_tmp3_ = self->config;
#line 42 "../src/static/static_chart.vala"
	live_chart_drawable_draw ((LiveChartDrawable*) _tmp2_, ctx, _tmp3_);
#line 43 "../src/static/static_chart.vala"
	_tmp4_ = self->priv->_grid;
#line 43 "../src/static/static_chart.vala"
	_tmp5_ = self->config;
#line 43 "../src/static/static_chart.vala"
	live_chart_drawable_draw ((LiveChartDrawable*) _tmp4_, ctx, _tmp5_);
#line 44 "../src/static/static_chart.vala"
	_tmp6_ = self->priv->_legend;
#line 44 "../src/static/static_chart.vala"
	if (_tmp6_ != NULL) {
#line 264 "static_chart.c"
		LiveChartLegend* _tmp7_;
		LiveChartConfig* _tmp8_;
#line 44 "../src/static/static_chart.vala"
		_tmp7_ = self->priv->_legend;
#line 44 "../src/static/static_chart.vala"
		_tmp8_ = self->config;
#line 44 "../src/static/static_chart.vala"
		live_chart_legend_draw (_tmp7_, ctx, _tmp8_);
#line 273 "static_chart.c"
	}
#line 46 "../src/static/static_chart.vala"
	_tmp9_ = self->config;
#line 46 "../src/static/static_chart.vala"
	live_chart_config_boundaries (_tmp9_, &_tmp10_);
#line 46 "../src/static/static_chart.vala"
	boundaries = _tmp10_;
#line 281 "static_chart.c"
	{
		GeeIterator* _serie_it = NULL;
		LiveChartStaticStaticSeries* _tmp11_;
		GeeIterator* _tmp12_;
#line 47 "../src/static/static_chart.vala"
		_tmp11_ = self->series;
#line 47 "../src/static/static_chart.vala"
		_tmp12_ = live_chart_static_static_series_iterator (_tmp11_);
#line 47 "../src/static/static_chart.vala"
		_serie_it = _tmp12_;
#line 47 "../src/static/static_chart.vala"
		while (TRUE) {
#line 294 "static_chart.c"
			GeeIterator* _tmp13_;
			LiveChartDrawable* serie = NULL;
			GeeIterator* _tmp14_;
			gpointer _tmp15_;
			LiveChartBoundaries _tmp16_;
			LiveChartBoundary _tmp17_;
			LiveChartBoundaries _tmp18_;
			LiveChartBoundary _tmp19_;
			LiveChartBoundaries _tmp20_;
			LiveChartBoundary _tmp21_;
			LiveChartBoundaries _tmp22_;
			LiveChartBoundary _tmp23_;
			LiveChartDrawable* _tmp24_;
			LiveChartConfig* _tmp25_;
#line 47 "../src/static/static_chart.vala"
			_tmp13_ = _serie_it;
#line 47 "../src/static/static_chart.vala"
			if (!gee_iterator_next (_tmp13_)) {
#line 47 "../src/static/static_chart.vala"
				break;
#line 315 "static_chart.c"
			}
#line 47 "../src/static/static_chart.vala"
			_tmp14_ = _serie_it;
#line 47 "../src/static/static_chart.vala"
			_tmp15_ = gee_iterator_get (_tmp14_);
#line 47 "../src/static/static_chart.vala"
			serie = (LiveChartDrawable*) ((LiveChartStaticStaticSerie*) _tmp15_);
#line 48 "../src/static/static_chart.vala"
			_tmp16_ = boundaries;
#line 48 "../src/static/static_chart.vala"
			_tmp17_ = _tmp16_.x;
#line 48 "../src/static/static_chart.vala"
			_tmp18_ = boundaries;
#line 48 "../src/static/static_chart.vala"
			_tmp19_ = _tmp18_.y;
#line 48 "../src/static/static_chart.vala"
			_tmp20_ = boundaries;
#line 48 "../src/static/static_chart.vala"
			_tmp21_ = _tmp20_.x;
#line 48 "../src/static/static_chart.vala"
			_tmp22_ = boundaries;
#line 48 "../src/static/static_chart.vala"
			_tmp23_ = _tmp22_.y;
#line 48 "../src/static/static_chart.vala"
			cairo_rectangle (ctx, (gdouble) _tmp17_.min, (gdouble) _tmp19_.min, (gdouble) _tmp21_.max, (gdouble) _tmp23_.max);
#line 49 "../src/static/static_chart.vala"
			cairo_clip (ctx);
#line 50 "../src/static/static_chart.vala"
			_tmp24_ = serie;
#line 50 "../src/static/static_chart.vala"
			_tmp25_ = self->config;
#line 50 "../src/static/static_chart.vala"
			live_chart_drawable_draw (_tmp24_, ctx, _tmp25_);
#line 47 "../src/static/static_chart.vala"
			_g_object_unref0 (serie);
#line 351 "static_chart.c"
		}
#line 47 "../src/static/static_chart.vala"
		_g_object_unref0 (_serie_it);
#line 355 "static_chart.c"
	}
#line 53 "../src/static/static_chart.vala"
	result = TRUE;
#line 53 "../src/static/static_chart.vala"
	return result;
#line 361 "static_chart.c"
}

LiveChartStaticStaticGrid*
live_chart_static_static_chart_get_grid (LiveChartStaticStaticChart* self)
{
	LiveChartStaticStaticGrid* result;
	LiveChartStaticStaticGrid* _tmp0_;
#line 8 "../src/static/static_chart.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 8 "../src/static/static_chart.vala"
	_tmp0_ = self->priv->_grid;
#line 8 "../src/static/static_chart.vala"
	result = _tmp0_;
#line 8 "../src/static/static_chart.vala"
	return result;
#line 377 "static_chart.c"
}

void
live_chart_static_static_chart_set_grid (LiveChartStaticStaticChart* self,
                                         LiveChartStaticStaticGrid* value)
{
	LiveChartStaticStaticGrid* old_value;
#line 8 "../src/static/static_chart.vala"
	g_return_if_fail (self != NULL);
#line 8 "../src/static/static_chart.vala"
	old_value = live_chart_static_static_chart_get_grid (self);
#line 8 "../src/static/static_chart.vala"
	if (old_value != value) {
#line 391 "static_chart.c"
		LiveChartStaticStaticGrid* _tmp0_;
#line 8 "../src/static/static_chart.vala"
		_tmp0_ = _g_object_ref0 (value);
#line 8 "../src/static/static_chart.vala"
		_g_object_unref0 (self->priv->_grid);
#line 8 "../src/static/static_chart.vala"
		self->priv->_grid = _tmp0_;
#line 8 "../src/static/static_chart.vala"
		g_object_notify_by_pspec ((GObject *) self, live_chart_static_static_chart_properties[LIVE_CHART_STATIC_STATIC_CHART_GRID_PROPERTY]);
#line 401 "static_chart.c"
	}
}

LiveChartBackground*
live_chart_static_static_chart_get_background (LiveChartStaticStaticChart* self)
{
	LiveChartBackground* result;
	LiveChartBackground* _tmp0_;
#line 9 "../src/static/static_chart.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 9 "../src/static/static_chart.vala"
	_tmp0_ = self->priv->_background;
#line 9 "../src/static/static_chart.vala"
	result = _tmp0_;
#line 9 "../src/static/static_chart.vala"
	return result;
#line 418 "static_chart.c"
}

void
live_chart_static_static_chart_set_background (LiveChartStaticStaticChart* self,
                                               LiveChartBackground* value)
{
	LiveChartBackground* old_value;
#line 9 "../src/static/static_chart.vala"
	g_return_if_fail (self != NULL);
#line 9 "../src/static/static_chart.vala"
	old_value = live_chart_static_static_chart_get_background (self);
#line 9 "../src/static/static_chart.vala"
	if (old_value != value) {
#line 432 "static_chart.c"
		LiveChartBackground* _tmp0_;
#line 9 "../src/static/static_chart.vala"
		_tmp0_ = _g_object_ref0 (value);
#line 9 "../src/static/static_chart.vala"
		_g_object_unref0 (self->priv->_background);
#line 9 "../src/static/static_chart.vala"
		self->priv->_background = _tmp0_;
#line 9 "../src/static/static_chart.vala"
		g_object_notify_by_pspec ((GObject *) self, live_chart_static_static_chart_properties[LIVE_CHART_STATIC_STATIC_CHART_BACKGROUND_PROPERTY]);
#line 442 "static_chart.c"
	}
}

LiveChartLegend*
live_chart_static_static_chart_get_legend (LiveChartStaticStaticChart* self)
{
	LiveChartLegend* result;
	LiveChartLegend* _tmp0_;
#line 10 "../src/static/static_chart.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 10 "../src/static/static_chart.vala"
	_tmp0_ = self->priv->_legend;
#line 10 "../src/static/static_chart.vala"
	result = _tmp0_;
#line 10 "../src/static/static_chart.vala"
	return result;
#line 459 "static_chart.c"
}

void
live_chart_static_static_chart_set_legend (LiveChartStaticStaticChart* self,
                                           LiveChartLegend* value)
{
	LiveChartLegend* old_value;
#line 10 "../src/static/static_chart.vala"
	g_return_if_fail (self != NULL);
#line 10 "../src/static/static_chart.vala"
	old_value = live_chart_static_static_chart_get_legend (self);
#line 10 "../src/static/static_chart.vala"
	if (old_value != value) {
#line 473 "static_chart.c"
		LiveChartLegend* _tmp0_;
#line 10 "../src/static/static_chart.vala"
		_tmp0_ = _g_object_ref0 (value);
#line 10 "../src/static/static_chart.vala"
		_g_object_unref0 (self->priv->_legend);
#line 10 "../src/static/static_chart.vala"
		self->priv->_legend = _tmp0_;
#line 10 "../src/static/static_chart.vala"
		g_object_notify_by_pspec ((GObject *) self, live_chart_static_static_chart_properties[LIVE_CHART_STATIC_STATIC_CHART_LEGEND_PROPERTY]);
#line 483 "static_chart.c"
	}
}

static void
live_chart_static_static_chart_class_init (LiveChartStaticStaticChartClass * klass,
                                           gpointer klass_data)
{
#line 6 "../src/static/static_chart.vala"
	live_chart_static_static_chart_parent_class = g_type_class_peek_parent (klass);
#line 6 "../src/static/static_chart.vala"
	g_type_class_adjust_private_offset (klass, &LiveChartStaticStaticChart_private_offset);
#line 6 "../src/static/static_chart.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_live_chart_static_static_chart_get_property;
#line 6 "../src/static/static_chart.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_live_chart_static_static_chart_set_property;
#line 6 "../src/static/static_chart.vala"
	G_OBJECT_CLASS (klass)->finalize = live_chart_static_static_chart_finalize;
#line 6 "../src/static/static_chart.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), LIVE_CHART_STATIC_STATIC_CHART_GRID_PROPERTY, live_chart_static_static_chart_properties[LIVE_CHART_STATIC_STATIC_CHART_GRID_PROPERTY] = g_param_spec_object ("grid", "grid", "grid", LIVE_CHART_STATIC_TYPE_STATIC_GRID, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 6 "../src/static/static_chart.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), LIVE_CHART_STATIC_STATIC_CHART_BACKGROUND_PROPERTY, live_chart_static_static_chart_properties[LIVE_CHART_STATIC_STATIC_CHART_BACKGROUND_PROPERTY] = g_param_spec_object ("background", "background", "background", LIVE_CHART_TYPE_BACKGROUND, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 6 "../src/static/static_chart.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), LIVE_CHART_STATIC_STATIC_CHART_LEGEND_PROPERTY, live_chart_static_static_chart_properties[LIVE_CHART_STATIC_STATIC_CHART_LEGEND_PROPERTY] = g_param_spec_object ("legend", "legend", "legend", LIVE_CHART_TYPE_LEGEND, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 507 "static_chart.c"
}

static void
live_chart_static_static_chart_instance_init (LiveChartStaticStaticChart * self,
                                              gpointer klass)
{
	LiveChartStaticStaticGrid* _tmp0_;
	LiveChartBackground* _tmp1_;
	LiveChartHorizontalLegend* _tmp2_;
	GeeArrayList* _tmp3_;
#line 6 "../src/static/static_chart.vala"
	self->priv = live_chart_static_static_chart_get_instance_private (self);
#line 8 "../src/static/static_chart.vala"
	_tmp0_ = live_chart_static_static_grid_new ();
#line 8 "../src/static/static_chart.vala"
	self->priv->_grid = _tmp0_;
#line 9 "../src/static/static_chart.vala"
	_tmp1_ = live_chart_background_new ();
#line 9 "../src/static/static_chart.vala"
	self->priv->_background = _tmp1_;
#line 10 "../src/static/static_chart.vala"
	_tmp2_ = live_chart_horizontal_legend_new ();
#line 10 "../src/static/static_chart.vala"
	self->priv->_legend = (LiveChartLegend*) _tmp2_;
#line 14 "../src/static/static_chart.vala"
	_tmp3_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, NULL, NULL, NULL);
#line 14 "../src/static/static_chart.vala"
	self->priv->categories = _tmp3_;
#line 536 "static_chart.c"
}

static void
live_chart_static_static_chart_finalize (GObject * obj)
{
	LiveChartStaticStaticChart * self;
#line 6 "../src/static/static_chart.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, LIVE_CHART_STATIC_TYPE_STATIC_CHART, LiveChartStaticStaticChart);
#line 8 "../src/static/static_chart.vala"
	_g_object_unref0 (self->priv->_grid);
#line 9 "../src/static/static_chart.vala"
	_g_object_unref0 (self->priv->_background);
#line 10 "../src/static/static_chart.vala"
	_g_object_unref0 (self->priv->_legend);
#line 11 "../src/static/static_chart.vala"
	_live_chart_config_unref0 (self->config);
#line 12 "../src/static/static_chart.vala"
	_g_object_unref0 (self->series);
#line 14 "../src/static/static_chart.vala"
	_g_object_unref0 (self->priv->categories);
#line 6 "../src/static/static_chart.vala"
	G_OBJECT_CLASS (live_chart_static_static_chart_parent_class)->finalize (obj);
#line 559 "static_chart.c"
}

static GType
live_chart_static_static_chart_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (LiveChartStaticStaticChartClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) live_chart_static_static_chart_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LiveChartStaticStaticChart), 0, (GInstanceInitFunc) live_chart_static_static_chart_instance_init, NULL };
	GType live_chart_static_static_chart_type_id;
	live_chart_static_static_chart_type_id = g_type_register_static (gtk_drawing_area_get_type (), "LiveChartStaticStaticChart", &g_define_type_info, 0);
	LiveChartStaticStaticChart_private_offset = g_type_add_instance_private (live_chart_static_static_chart_type_id, sizeof (LiveChartStaticStaticChartPrivate));
	return live_chart_static_static_chart_type_id;
}

GType
live_chart_static_static_chart_get_type (void)
{
	static volatile gsize live_chart_static_static_chart_type_id__once = 0;
	if (g_once_init_enter (&live_chart_static_static_chart_type_id__once)) {
		GType live_chart_static_static_chart_type_id;
		live_chart_static_static_chart_type_id = live_chart_static_static_chart_get_type_once ();
		g_once_init_leave (&live_chart_static_static_chart_type_id__once, live_chart_static_static_chart_type_id);
	}
	return live_chart_static_static_chart_type_id__once;
}

static void
_vala_live_chart_static_static_chart_get_property (GObject * object,
                                                   guint property_id,
                                                   GValue * value,
                                                   GParamSpec * pspec)
{
	LiveChartStaticStaticChart * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, LIVE_CHART_STATIC_TYPE_STATIC_CHART, LiveChartStaticStaticChart);
#line 6 "../src/static/static_chart.vala"
	switch (property_id) {
#line 6 "../src/static/static_chart.vala"
		case LIVE_CHART_STATIC_STATIC_CHART_GRID_PROPERTY:
#line 6 "../src/static/static_chart.vala"
		g_value_set_object (value, live_chart_static_static_chart_get_grid (self));
#line 6 "../src/static/static_chart.vala"
		break;
#line 6 "../src/static/static_chart.vala"
		case LIVE_CHART_STATIC_STATIC_CHART_BACKGROUND_PROPERTY:
#line 6 "../src/static/static_chart.vala"
		g_value_set_object (value, live_chart_static_static_chart_get_background (self));
#line 6 "../src/static/static_chart.vala"
		break;
#line 6 "../src/static/static_chart.vala"
		case LIVE_CHART_STATIC_STATIC_CHART_LEGEND_PROPERTY:
#line 6 "../src/static/static_chart.vala"
		g_value_set_object (value, live_chart_static_static_chart_get_legend (self));
#line 6 "../src/static/static_chart.vala"
		break;
#line 612 "static_chart.c"
		default:
#line 6 "../src/static/static_chart.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 6 "../src/static/static_chart.vala"
		break;
#line 618 "static_chart.c"
	}
}

static void
_vala_live_chart_static_static_chart_set_property (GObject * object,
                                                   guint property_id,
                                                   const GValue * value,
                                                   GParamSpec * pspec)
{
	LiveChartStaticStaticChart * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, LIVE_CHART_STATIC_TYPE_STATIC_CHART, LiveChartStaticStaticChart);
#line 6 "../src/static/static_chart.vala"
	switch (property_id) {
#line 6 "../src/static/static_chart.vala"
		case LIVE_CHART_STATIC_STATIC_CHART_GRID_PROPERTY:
#line 6 "../src/static/static_chart.vala"
		live_chart_static_static_chart_set_grid (self, g_value_get_object (value));
#line 6 "../src/static/static_chart.vala"
		break;
#line 6 "../src/static/static_chart.vala"
		case LIVE_CHART_STATIC_STATIC_CHART_BACKGROUND_PROPERTY:
#line 6 "../src/static/static_chart.vala"
		live_chart_static_static_chart_set_background (self, g_value_get_object (value));
#line 6 "../src/static/static_chart.vala"
		break;
#line 6 "../src/static/static_chart.vala"
		case LIVE_CHART_STATIC_STATIC_CHART_LEGEND_PROPERTY:
#line 6 "../src/static/static_chart.vala"
		live_chart_static_static_chart_set_legend (self, g_value_get_object (value));
#line 6 "../src/static/static_chart.vala"
		break;
#line 650 "static_chart.c"
		default:
#line 6 "../src/static/static_chart.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 6 "../src/static/static_chart.vala"
		break;
#line 656 "static_chart.c"
	}
}

static inline gpointer
_vala_memdup2 (gconstpointer mem,
               gsize byte_size)
{
	gpointer new_mem;
	if (mem && byte_size != 0) {
		new_mem = g_malloc (byte_size);
		memcpy (new_mem, mem, byte_size);
	} else {
		new_mem = NULL;
	}
	return new_mem;
}

