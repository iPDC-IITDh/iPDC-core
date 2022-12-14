/* line.c generated by valac 0.56.0, the Vala compiler
 * generated from line.vala, do not modify */

#include "livechart.h"
#include <cairo-gobject.h>
#include <glib.h>
#include <float.h>
#include <math.h>
#include <string.h>

enum  {
	LIVE_CHART_LINE_0_PROPERTY,
	LIVE_CHART_LINE_NUM_PROPERTIES
};
static GParamSpec* live_chart_line_properties[LIVE_CHART_LINE_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

static gpointer live_chart_line_parent_class = NULL;

static void live_chart_line_real_draw (LiveChartSerieRenderer* base,
                                cairo_t* ctx,
                                LiveChartConfig* config);
static void live_chart_line_update_bounding_box (LiveChartLine* self,
                                          LiveChartPoints* points,
                                          LiveChartConfig* config);
static GType live_chart_line_get_type_once (void);

static gpointer
_g_object_ref0 (gpointer self)
{
#line 8 "../src/line.vala"
	return self ? g_object_ref (self) : NULL;
#line 34 "line.c"
}

LiveChartLine*
live_chart_line_construct (GType object_type,
                           LiveChartValues* values)
{
	LiveChartLine * self = NULL;
	LiveChartValues* _tmp0_;
#line 6 "../src/line.vala"
	g_return_val_if_fail (values != NULL, NULL);
#line 7 "../src/line.vala"
	self = (LiveChartLine*) live_chart_serie_renderer_construct (object_type);
#line 8 "../src/line.vala"
	_tmp0_ = _g_object_ref0 (values);
#line 8 "../src/line.vala"
	_g_object_unref0 (((LiveChartSerieRenderer*) self)->values);
#line 8 "../src/line.vala"
	((LiveChartSerieRenderer*) self)->values = _tmp0_;
#line 6 "../src/line.vala"
	return self;
#line 55 "line.c"
}

LiveChartLine*
live_chart_line_new (LiveChartValues* values)
{
#line 6 "../src/line.vala"
	return live_chart_line_construct (LIVE_CHART_TYPE_LINE, values);
#line 63 "line.c"
}

static void
live_chart_line_real_draw (LiveChartSerieRenderer* base,
                           cairo_t* ctx,
                           LiveChartConfig* config)
{
	LiveChartLine * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
#line 11 "../src/line.vala"
	self = (LiveChartLine*) base;
#line 11 "../src/line.vala"
	g_return_if_fail (ctx != NULL);
#line 11 "../src/line.vala"
	g_return_if_fail (config != NULL);
#line 12 "../src/line.vala"
	_tmp0_ = live_chart_drawable_get_visible ((LiveChartDrawable*) self);
#line 12 "../src/line.vala"
	_tmp1_ = _tmp0_;
#line 12 "../src/line.vala"
	if (_tmp1_) {
#line 86 "line.c"
		LiveChartPoints* points = NULL;
		LiveChartValues* _tmp2_;
		LiveChartPoints* _tmp3_;
		LiveChartPoints* _tmp4_;
		gint _tmp5_;
		gint _tmp6_;
#line 13 "../src/line.vala"
		_tmp2_ = ((LiveChartSerieRenderer*) self)->values;
#line 13 "../src/line.vala"
		_tmp3_ = live_chart_points_create (_tmp2_, config);
#line 13 "../src/line.vala"
		points = _tmp3_;
#line 14 "../src/line.vala"
		_tmp4_ = points;
#line 14 "../src/line.vala"
		_tmp5_ = live_chart_points_get_size (_tmp4_);
#line 14 "../src/line.vala"
		_tmp6_ = _tmp5_;
#line 14 "../src/line.vala"
		if (_tmp6_ > 0) {
#line 107 "line.c"
			LiveChartPoints* _tmp7_;
			LiveChartPoints* _tmp8_;
			LiveChartPoints* _tmp9_;
#line 15 "../src/line.vala"
			_tmp7_ = points;
#line 15 "../src/line.vala"
			_tmp8_ = live_chart_line_draw_line (self, _tmp7_, ctx, config);
#line 15 "../src/line.vala"
			_tmp9_ = _tmp8_;
#line 15 "../src/line.vala"
			_g_object_unref0 (_tmp9_);
#line 16 "../src/line.vala"
			cairo_stroke (ctx);
#line 121 "line.c"
		}
#line 12 "../src/line.vala"
		_g_object_unref0 (points);
#line 125 "line.c"
	}
}

LiveChartPoints*
live_chart_line_draw_line (LiveChartLine* self,
                           LiveChartPoints* points,
                           cairo_t* ctx,
                           LiveChartConfig* config)
{
	LiveChartPath* _tmp0_;
	LiveChartPath* _tmp1_;
	LiveChartPoint first_point = {0};
	LiveChartPoint _tmp2_ = {0};
	LiveChartPath* _tmp3_;
	LiveChartPath* _tmp4_;
	LiveChartPoint _tmp5_;
	LiveChartPoint _tmp6_;
	LiveChartPoints* _tmp18_;
	LiveChartPoints* result;
#line 21 "../src/line.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 21 "../src/line.vala"
	g_return_val_if_fail (points != NULL, NULL);
#line 21 "../src/line.vala"
	g_return_val_if_fail (ctx != NULL, NULL);
#line 21 "../src/line.vala"
	g_return_val_if_fail (config != NULL, NULL);
#line 22 "../src/line.vala"
	_tmp0_ = live_chart_serie_renderer_get_line ((LiveChartSerieRenderer*) self);
#line 22 "../src/line.vala"
	_tmp1_ = _tmp0_;
#line 22 "../src/line.vala"
	live_chart_path_configure (_tmp1_, ctx);
#line 24 "../src/line.vala"
	live_chart_points_first (points, &_tmp2_);
#line 24 "../src/line.vala"
	first_point = _tmp2_;
#line 26 "../src/line.vala"
	live_chart_line_update_bounding_box (self, points, config);
#line 27 "../src/line.vala"
	live_chart_serie_renderer_debug ((LiveChartSerieRenderer*) self, ctx);
#line 29 "../src/line.vala"
	_tmp3_ = live_chart_serie_renderer_get_line ((LiveChartSerieRenderer*) self);
#line 29 "../src/line.vala"
	_tmp4_ = _tmp3_;
#line 29 "../src/line.vala"
	live_chart_path_configure (_tmp4_, ctx);
#line 31 "../src/line.vala"
	_tmp5_ = first_point;
#line 31 "../src/line.vala"
	_tmp6_ = first_point;
#line 31 "../src/line.vala"
	cairo_move_to (ctx, _tmp5_.x, _tmp6_.y);
#line 179 "line.c"
	{
		gint pos = 0;
#line 32 "../src/line.vala"
		pos = 0;
#line 184 "line.c"
		{
			gboolean _tmp7_ = FALSE;
#line 32 "../src/line.vala"
			_tmp7_ = TRUE;
#line 32 "../src/line.vala"
			while (TRUE) {
#line 191 "line.c"
				gint _tmp9_;
				gint _tmp10_;
				LiveChartPoint current_point = {0};
				LiveChartPoint _tmp11_ = {0};
				LiveChartPoint next_point = {0};
				LiveChartPoint _tmp12_ = {0};
				LiveChartPoint _tmp13_;
				LiveChartPoint _tmp16_;
				LiveChartPoint _tmp17_;
#line 32 "../src/line.vala"
				if (!_tmp7_) {
#line 203 "line.c"
					gint _tmp8_;
#line 32 "../src/line.vala"
					_tmp8_ = pos;
#line 32 "../src/line.vala"
					pos = _tmp8_ + 1;
#line 209 "line.c"
				}
#line 32 "../src/line.vala"
				_tmp7_ = FALSE;
#line 32 "../src/line.vala"
				_tmp9_ = live_chart_points_get_size (points);
#line 32 "../src/line.vala"
				_tmp10_ = _tmp9_;
#line 32 "../src/line.vala"
				if (!(pos < (_tmp10_ - 1))) {
#line 32 "../src/line.vala"
					break;
#line 221 "line.c"
				}
#line 33 "../src/line.vala"
				live_chart_points_get (points, pos, &_tmp11_);
#line 33 "../src/line.vala"
				current_point = _tmp11_;
#line 34 "../src/line.vala"
				live_chart_points_after (points, pos, &_tmp12_);
#line 34 "../src/line.vala"
				next_point = _tmp12_;
#line 35 "../src/line.vala"
				_tmp13_ = current_point;
#line 35 "../src/line.vala"
				if (live_chart_serie_renderer_is_out_of_area ((LiveChartSerieRenderer*) self, &_tmp13_)) {
#line 235 "line.c"
					LiveChartPoint _tmp14_;
					LiveChartPoint _tmp15_;
#line 36 "../src/line.vala"
					_tmp14_ = current_point;
#line 36 "../src/line.vala"
					_tmp15_ = current_point;
#line 36 "../src/line.vala"
					cairo_move_to (ctx, _tmp14_.x, _tmp15_.y);
#line 37 "../src/line.vala"
					continue;
#line 246 "line.c"
				}
#line 40 "../src/line.vala"
				_tmp16_ = next_point;
#line 40 "../src/line.vala"
				_tmp17_ = next_point;
#line 40 "../src/line.vala"
				cairo_line_to (ctx, _tmp16_.x, _tmp17_.y);
#line 254 "line.c"
			}
		}
	}
#line 43 "../src/line.vala"
	_tmp18_ = _g_object_ref0 (points);
#line 43 "../src/line.vala"
	result = _tmp18_;
#line 43 "../src/line.vala"
	return result;
#line 264 "line.c"
}

static void
live_chart_line_update_bounding_box (LiveChartLine* self,
                                     LiveChartPoints* points,
                                     LiveChartConfig* config)
{
	LiveChartPoint _tmp0_ = {0};
	LiveChartBounds* _tmp1_;
	LiveChartBounds* _tmp2_;
	gdouble _tmp3_;
	gdouble _tmp4_;
	LiveChartPoint _tmp5_ = {0};
	LiveChartPoint _tmp6_ = {0};
	LiveChartBounds* _tmp7_;
	LiveChartBounds* _tmp8_;
	gdouble _tmp9_;
	gdouble _tmp10_;
	LiveChartBounds* _tmp11_;
	LiveChartBounds* _tmp12_;
	gdouble _tmp13_;
	gdouble _tmp14_;
	LiveChartBoundingBox _tmp15_ = {0};
#line 46 "../src/line.vala"
	g_return_if_fail (self != NULL);
#line 46 "../src/line.vala"
	g_return_if_fail (points != NULL);
#line 46 "../src/line.vala"
	g_return_if_fail (config != NULL);
#line 47 "../src/line.vala"
	live_chart_points_first (points, &_tmp0_);
#line 47 "../src/line.vala"
	_tmp1_ = live_chart_points_get_bounds (points);
#line 47 "../src/line.vala"
	_tmp2_ = _tmp1_;
#line 47 "../src/line.vala"
	_tmp3_ = live_chart_bounds_get_lower (_tmp2_);
#line 47 "../src/line.vala"
	_tmp4_ = _tmp3_;
#line 47 "../src/line.vala"
	live_chart_points_last (points, &_tmp5_);
#line 47 "../src/line.vala"
	live_chart_points_first (points, &_tmp6_);
#line 47 "../src/line.vala"
	_tmp7_ = live_chart_points_get_bounds (points);
#line 47 "../src/line.vala"
	_tmp8_ = _tmp7_;
#line 47 "../src/line.vala"
	_tmp9_ = live_chart_bounds_get_upper (_tmp8_);
#line 47 "../src/line.vala"
	_tmp10_ = _tmp9_;
#line 47 "../src/line.vala"
	_tmp11_ = live_chart_points_get_bounds (points);
#line 47 "../src/line.vala"
	_tmp12_ = _tmp11_;
#line 47 "../src/line.vala"
	_tmp13_ = live_chart_bounds_get_lower (_tmp12_);
#line 47 "../src/line.vala"
	_tmp14_ = _tmp13_;
#line 47 "../src/line.vala"
	memset (&_tmp15_, 0, sizeof (LiveChartBoundingBox));
#line 47 "../src/line.vala"
	_tmp15_.x = _tmp0_.x;
#line 47 "../src/line.vala"
	_tmp15_.y = _tmp4_;
#line 47 "../src/line.vala"
	_tmp15_.width = _tmp5_.x - _tmp6_.x;
#line 47 "../src/line.vala"
	_tmp15_.height = _tmp10_ - _tmp14_;
#line 47 "../src/line.vala"
	((LiveChartSerieRenderer*) self)->bounding_box = _tmp15_;
#line 336 "line.c"
}

static void
live_chart_line_class_init (LiveChartLineClass * klass,
                            gpointer klass_data)
{
#line 4 "../src/line.vala"
	live_chart_line_parent_class = g_type_class_peek_parent (klass);
#line 4 "../src/line.vala"
	((LiveChartSerieRendererClass *) klass)->draw = (void (*) (LiveChartSerieRenderer*, cairo_t*, LiveChartConfig*)) live_chart_line_real_draw;
#line 347 "line.c"
}

static void
live_chart_line_instance_init (LiveChartLine * self,
                               gpointer klass)
{
}

static GType
live_chart_line_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (LiveChartLineClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) live_chart_line_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LiveChartLine), 0, (GInstanceInitFunc) live_chart_line_instance_init, NULL };
	GType live_chart_line_type_id;
	live_chart_line_type_id = g_type_register_static (LIVE_CHART_TYPE_SERIE_RENDERER, "LiveChartLine", &g_define_type_info, 0);
	return live_chart_line_type_id;
}

GType
live_chart_line_get_type (void)
{
	static volatile gsize live_chart_line_type_id__once = 0;
	if (g_once_init_enter (&live_chart_line_type_id__once)) {
		GType live_chart_line_type_id;
		live_chart_line_type_id = live_chart_line_get_type_once ();
		g_once_init_leave (&live_chart_line_type_id__once, live_chart_line_type_id);
	}
	return live_chart_line_type_id__once;
}

