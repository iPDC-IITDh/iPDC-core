/* min_bound_line.c generated by valac 0.56.0, the Vala compiler
 * generated from min_bound_line.vala, do not modify */

#include "livechart_static.h"
#include <cairo-gobject.h>
#include <glib.h>
#include <float.h>
#include <math.h>
#include <gee.h>
#include <glib-object.h>

enum  {
	LIVE_CHART_MIN_BOUND_LINE_0_PROPERTY,
	LIVE_CHART_MIN_BOUND_LINE_NUM_PROPERTIES
};
static GParamSpec* live_chart_min_bound_line_properties[LIVE_CHART_MIN_BOUND_LINE_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

static gpointer live_chart_min_bound_line_parent_class = NULL;

static void live_chart_min_bound_line_real_draw (LiveChartSerieRenderer* base,
                                          cairo_t* ctx,
                                          LiveChartConfig* config);
static GType live_chart_min_bound_line_get_type_once (void);

static gpointer
_g_object_ref0 (gpointer self)
{
#line 9 "../src/min_bound_line.vala"
	return self ? g_object_ref (self) : NULL;
#line 32 "min_bound_line.c"
}

LiveChartMinBoundLine*
live_chart_min_bound_line_construct (GType object_type,
                                     LiveChartValues* values)
{
	LiveChartMinBoundLine * self = NULL;
	LiveChartValues* _tmp0_;
#line 7 "../src/min_bound_line.vala"
	g_return_val_if_fail (values != NULL, NULL);
#line 8 "../src/min_bound_line.vala"
	self = (LiveChartMinBoundLine*) live_chart_serie_renderer_construct (object_type);
#line 9 "../src/min_bound_line.vala"
	_tmp0_ = _g_object_ref0 (values);
#line 9 "../src/min_bound_line.vala"
	_g_object_unref0 (((LiveChartSerieRenderer*) self)->values);
#line 9 "../src/min_bound_line.vala"
	((LiveChartSerieRenderer*) self)->values = _tmp0_;
#line 7 "../src/min_bound_line.vala"
	return self;
#line 53 "min_bound_line.c"
}

LiveChartMinBoundLine*
live_chart_min_bound_line_new (LiveChartValues* values)
{
#line 7 "../src/min_bound_line.vala"
	return live_chart_min_bound_line_construct (LIVE_CHART_TYPE_MIN_BOUND_LINE, values);
#line 61 "min_bound_line.c"
}

LiveChartMinBoundLine*
live_chart_min_bound_line_construct_from_serie (GType object_type,
                                                LiveChartSerie* serie)
{
	LiveChartMinBoundLine * self = NULL;
	LiveChartValues* _tmp0_;
#line 12 "../src/min_bound_line.vala"
	g_return_val_if_fail (serie != NULL, NULL);
#line 12 "../src/min_bound_line.vala"
	self = (LiveChartMinBoundLine*) live_chart_serie_renderer_construct (object_type);
#line 13 "../src/min_bound_line.vala"
	_tmp0_ = live_chart_serie_get_values (serie);
#line 13 "../src/min_bound_line.vala"
	_g_object_unref0 (((LiveChartSerieRenderer*) self)->values);
#line 13 "../src/min_bound_line.vala"
	((LiveChartSerieRenderer*) self)->values = _tmp0_;
#line 12 "../src/min_bound_line.vala"
	return self;
#line 82 "min_bound_line.c"
}

LiveChartMinBoundLine*
live_chart_min_bound_line_new_from_serie (LiveChartSerie* serie)
{
#line 12 "../src/min_bound_line.vala"
	return live_chart_min_bound_line_construct_from_serie (LIVE_CHART_TYPE_MIN_BOUND_LINE, serie);
#line 90 "min_bound_line.c"
}

static void
live_chart_min_bound_line_real_draw (LiveChartSerieRenderer* base,
                                     cairo_t* ctx,
                                     LiveChartConfig* config)
{
	LiveChartMinBoundLine * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
#line 16 "../src/min_bound_line.vala"
	self = (LiveChartMinBoundLine*) base;
#line 16 "../src/min_bound_line.vala"
	g_return_if_fail (ctx != NULL);
#line 16 "../src/min_bound_line.vala"
	g_return_if_fail (config != NULL);
#line 17 "../src/min_bound_line.vala"
	_tmp0_ = live_chart_drawable_get_visible ((LiveChartDrawable*) self);
#line 17 "../src/min_bound_line.vala"
	_tmp1_ = _tmp0_;
#line 17 "../src/min_bound_line.vala"
	if (_tmp1_) {
#line 113 "min_bound_line.c"
		LiveChartBoundaries boundaries = {0};
		LiveChartBoundaries _tmp2_ = {0};
		gdouble _tmp3_ = 0.0;
		LiveChartValues* _tmp4_;
		gint _tmp5_;
		gint _tmp6_;
		gdouble y = 0.0;
		LiveChartPath* _tmp19_;
		LiveChartPath* _tmp20_;
		LiveChartBoundaries _tmp21_;
		LiveChartBoundary _tmp22_;
		LiveChartBoundaries _tmp23_;
		LiveChartBoundary _tmp24_;
		LiveChartBoundaries _tmp25_;
		LiveChartBoundary _tmp26_;
		LiveChartBoundaries _tmp27_;
		LiveChartBoundary _tmp28_;
#line 18 "../src/min_bound_line.vala"
		live_chart_config_boundaries (config, &_tmp2_);
#line 18 "../src/min_bound_line.vala"
		boundaries = _tmp2_;
#line 19 "../src/min_bound_line.vala"
		_tmp4_ = ((LiveChartSerieRenderer*) self)->values;
#line 19 "../src/min_bound_line.vala"
		_tmp5_ = gee_abstract_collection_get_size ((GeeAbstractCollection*) _tmp4_);
#line 19 "../src/min_bound_line.vala"
		_tmp6_ = _tmp5_;
#line 19 "../src/min_bound_line.vala"
		if (_tmp6_ == 0) {
#line 143 "min_bound_line.c"
			LiveChartYAxis* _tmp7_;
			LiveChartBounds* _tmp8_;
			LiveChartBounds* _tmp9_;
			gdouble _tmp10_;
			gdouble _tmp11_;
			LiveChartYAxis* _tmp12_;
#line 19 "../src/min_bound_line.vala"
			_tmp7_ = config->y_axis;
#line 19 "../src/min_bound_line.vala"
			_tmp8_ = live_chart_yaxis_get_bounds (_tmp7_);
#line 19 "../src/min_bound_line.vala"
			_tmp9_ = _tmp8_;
#line 19 "../src/min_bound_line.vala"
			_tmp10_ = live_chart_bounds_get_lower (_tmp9_);
#line 19 "../src/min_bound_line.vala"
			_tmp11_ = _tmp10_;
#line 19 "../src/min_bound_line.vala"
			_tmp12_ = config->y_axis;
#line 19 "../src/min_bound_line.vala"
			_tmp3_ = _tmp11_ * live_chart_yaxis_get_ratio (_tmp12_);
#line 19 "../src/min_bound_line.vala"
			_g_object_unref0 (_tmp9_);
#line 166 "min_bound_line.c"
		} else {
			LiveChartValues* _tmp13_;
			LiveChartBounds* _tmp14_;
			LiveChartBounds* _tmp15_;
			gdouble _tmp16_;
			gdouble _tmp17_;
			LiveChartYAxis* _tmp18_;
#line 19 "../src/min_bound_line.vala"
			_tmp13_ = ((LiveChartSerieRenderer*) self)->values;
#line 19 "../src/min_bound_line.vala"
			_tmp14_ = live_chart_values_get_bounds (_tmp13_);
#line 19 "../src/min_bound_line.vala"
			_tmp15_ = _tmp14_;
#line 19 "../src/min_bound_line.vala"
			_tmp16_ = live_chart_bounds_get_lower (_tmp15_);
#line 19 "../src/min_bound_line.vala"
			_tmp17_ = _tmp16_;
#line 19 "../src/min_bound_line.vala"
			_tmp18_ = config->y_axis;
#line 19 "../src/min_bound_line.vala"
			_tmp3_ = _tmp17_ * live_chart_yaxis_get_ratio (_tmp18_);
#line 188 "min_bound_line.c"
		}
#line 19 "../src/min_bound_line.vala"
		y = _tmp3_;
#line 20 "../src/min_bound_line.vala"
		_tmp19_ = live_chart_serie_renderer_get_line ((LiveChartSerieRenderer*) self);
#line 20 "../src/min_bound_line.vala"
		_tmp20_ = _tmp19_;
#line 20 "../src/min_bound_line.vala"
		live_chart_path_configure (_tmp20_, ctx);
#line 21 "../src/min_bound_line.vala"
		_tmp21_ = boundaries;
#line 21 "../src/min_bound_line.vala"
		_tmp22_ = _tmp21_.x;
#line 21 "../src/min_bound_line.vala"
		_tmp23_ = boundaries;
#line 21 "../src/min_bound_line.vala"
		_tmp24_ = _tmp23_.y;
#line 21 "../src/min_bound_line.vala"
		cairo_move_to (ctx, (gdouble) _tmp22_.min, _tmp24_.max - y);
#line 22 "../src/min_bound_line.vala"
		_tmp25_ = boundaries;
#line 22 "../src/min_bound_line.vala"
		_tmp26_ = _tmp25_.x;
#line 22 "../src/min_bound_line.vala"
		_tmp27_ = boundaries;
#line 22 "../src/min_bound_line.vala"
		_tmp28_ = _tmp27_.y;
#line 22 "../src/min_bound_line.vala"
		cairo_line_to (ctx, (gdouble) _tmp26_.max, _tmp28_.max - y);
#line 23 "../src/min_bound_line.vala"
		cairo_stroke (ctx);
#line 220 "min_bound_line.c"
	}
}

static void
live_chart_min_bound_line_class_init (LiveChartMinBoundLineClass * klass,
                                      gpointer klass_data)
{
#line 5 "../src/min_bound_line.vala"
	live_chart_min_bound_line_parent_class = g_type_class_peek_parent (klass);
#line 5 "../src/min_bound_line.vala"
	((LiveChartSerieRendererClass *) klass)->draw = (void (*) (LiveChartSerieRenderer*, cairo_t*, LiveChartConfig*)) live_chart_min_bound_line_real_draw;
#line 232 "min_bound_line.c"
}

static void
live_chart_min_bound_line_instance_init (LiveChartMinBoundLine * self,
                                         gpointer klass)
{
}

static GType
live_chart_min_bound_line_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (LiveChartMinBoundLineClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) live_chart_min_bound_line_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LiveChartMinBoundLine), 0, (GInstanceInitFunc) live_chart_min_bound_line_instance_init, NULL };
	GType live_chart_min_bound_line_type_id;
	live_chart_min_bound_line_type_id = g_type_register_static (LIVE_CHART_TYPE_SERIE_RENDERER, "LiveChartMinBoundLine", &g_define_type_info, 0);
	return live_chart_min_bound_line_type_id;
}

GType
live_chart_min_bound_line_get_type (void)
{
	static volatile gsize live_chart_min_bound_line_type_id__once = 0;
	if (g_once_init_enter (&live_chart_min_bound_line_type_id__once)) {
		GType live_chart_min_bound_line_type_id;
		live_chart_min_bound_line_type_id = live_chart_min_bound_line_get_type_once ();
		g_once_init_leave (&live_chart_min_bound_line_type_id__once, live_chart_min_bound_line_type_id);
	}
	return live_chart_min_bound_line_type_id__once;
}

