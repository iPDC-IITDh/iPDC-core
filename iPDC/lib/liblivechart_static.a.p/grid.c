/* grid.c generated by valac 0.56.0, the Vala compiler
 * generated from grid.vala, do not modify */

#include "livechart_static.h"
#include <glib.h>
#include <gdk/gdk.h>
#include <float.h>
#include <math.h>
#include <string.h>
#include <cairo-gobject.h>
#include <stdlib.h>
#include <gee.h>
#include <glib-object.h>

enum  {
	LIVE_CHART_GRID_0_PROPERTY,
	LIVE_CHART_GRID_VISIBLE_PROPERTY,
	LIVE_CHART_GRID_MAIN_COLOR_PROPERTY,
	LIVE_CHART_GRID_NUM_PROPERTIES
};
static GParamSpec* live_chart_grid_properties[LIVE_CHART_GRID_NUM_PROPERTIES];
#define _g_date_time_unref0(var) ((var == NULL) ? NULL : (var = (g_date_time_unref (var), NULL)))
#define _g_time_zone_unref0(var) ((var == NULL) ? NULL : (var = (g_time_zone_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _LiveChartGridPrivate {
	gboolean _visible;
	GdkRGBA _main_color;
};

static gint LiveChartGrid_private_offset;
static gpointer live_chart_grid_parent_class = NULL;
static LiveChartDrawableIface * live_chart_grid_live_chart_drawable_parent_iface = NULL;

static void live_chart_grid_real_draw (LiveChartDrawable* base,
                                cairo_t* ctx,
                                LiveChartConfig* config);
static void live_chart_grid_real_get_bounding_box (LiveChartDrawable* base,
                                            LiveChartBoundingBox* result);
static gboolean _gdk_rgba_equal (const GdkRGBA * s1,
                          const GdkRGBA * s2);
static void live_chart_grid_finalize (GObject * obj);
static GType live_chart_grid_get_type_once (void);
static void _vala_live_chart_grid_get_property (GObject * object,
                                         guint property_id,
                                         GValue * value,
                                         GParamSpec * pspec);
static void _vala_live_chart_grid_set_property (GObject * object,
                                         guint property_id,
                                         const GValue * value,
                                         GParamSpec * pspec);

static inline gpointer
live_chart_grid_get_instance_private (LiveChartGrid* self)
{
	return G_STRUCT_MEMBER_P (self, LiveChartGrid_private_offset);
}

static void
live_chart_grid_real_draw (LiveChartDrawable* base,
                           cairo_t* ctx,
                           LiveChartConfig* config)
{
	LiveChartGrid * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
#line 24 "../src/grid.vala"
	self = (LiveChartGrid*) base;
#line 24 "../src/grid.vala"
	g_return_if_fail (ctx != NULL);
#line 24 "../src/grid.vala"
	g_return_if_fail (config != NULL);
#line 25 "../src/grid.vala"
	_tmp0_ = live_chart_drawable_get_visible ((LiveChartDrawable*) self);
#line 25 "../src/grid.vala"
	_tmp1_ = _tmp0_;
#line 25 "../src/grid.vala"
	if (_tmp1_) {
#line 26 "../src/grid.vala"
		live_chart_grid_render_abscissa (self, ctx, config);
#line 27 "../src/grid.vala"
		live_chart_grid_render_ordinate (self, ctx, config);
#line 28 "../src/grid.vala"
		live_chart_grid_render_grid (self, ctx, config);
#line 29 "../src/grid.vala"
		live_chart_grid_update_bounding_box (self, config);
#line 30 "../src/grid.vala"
		live_chart_grid_debug (self, ctx);
#line 90 "grid.c"
	}
}

static void
live_chart_grid_real_get_bounding_box (LiveChartDrawable* base,
                                       LiveChartBoundingBox* result)
{
	LiveChartGrid * self;
	LiveChartBoundingBox _tmp0_;
#line 34 "../src/grid.vala"
	self = (LiveChartGrid*) base;
#line 35 "../src/grid.vala"
	_tmp0_ = self->bounding_box;
#line 35 "../src/grid.vala"
	*result = _tmp0_;
#line 35 "../src/grid.vala"
	return;
#line 108 "grid.c"
}

void
live_chart_grid_restore (LiveChartGrid* self,
                         cairo_t* ctx)
{
	GdkRGBA _tmp0_;
	GdkRGBA _tmp1_;
	GdkRGBA _tmp2_;
	GdkRGBA _tmp3_;
#line 38 "../src/grid.vala"
	g_return_if_fail (self != NULL);
#line 38 "../src/grid.vala"
	g_return_if_fail (ctx != NULL);
#line 39 "../src/grid.vala"
	_tmp0_ = self->priv->_main_color;
#line 39 "../src/grid.vala"
	_tmp1_ = self->priv->_main_color;
#line 39 "../src/grid.vala"
	_tmp2_ = self->priv->_main_color;
#line 39 "../src/grid.vala"
	_tmp3_ = self->priv->_main_color;
#line 39 "../src/grid.vala"
	cairo_set_source_rgba (ctx, _tmp0_.red, _tmp1_.green, _tmp2_.blue, _tmp3_.alpha);
#line 40 "../src/grid.vala"
	cairo_set_line_width (ctx, 0.5);
#line 41 "../src/grid.vala"
	cairo_set_dash (ctx, NULL, (gint) 0, 0.0);
#line 137 "grid.c"
}

void
live_chart_grid_render_abscissa (LiveChartGrid* self,
                                 cairo_t* ctx,
                                 LiveChartConfig* config)
{
	gboolean _tmp0_ = FALSE;
	LiveChartXAxis* _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_;
#line 44 "../src/grid.vala"
	g_return_if_fail (self != NULL);
#line 44 "../src/grid.vala"
	g_return_if_fail (ctx != NULL);
#line 44 "../src/grid.vala"
	g_return_if_fail (config != NULL);
#line 45 "../src/grid.vala"
	_tmp1_ = config->x_axis;
#line 45 "../src/grid.vala"
	_tmp2_ = live_chart_xaxis_get_visible (_tmp1_);
#line 45 "../src/grid.vala"
	_tmp3_ = _tmp2_;
#line 45 "../src/grid.vala"
	if (_tmp3_) {
#line 163 "grid.c"
		LiveChartXAxis* _tmp4_;
		LiveChartPath* _tmp5_;
		gboolean _tmp6_;
		gboolean _tmp7_;
#line 45 "../src/grid.vala"
		_tmp4_ = config->x_axis;
#line 45 "../src/grid.vala"
		_tmp5_ = _tmp4_->axis;
#line 45 "../src/grid.vala"
		_tmp6_ = live_chart_path_get_visible (_tmp5_);
#line 45 "../src/grid.vala"
		_tmp7_ = _tmp6_;
#line 45 "../src/grid.vala"
		_tmp0_ = _tmp7_;
#line 178 "grid.c"
	} else {
#line 45 "../src/grid.vala"
		_tmp0_ = FALSE;
#line 182 "grid.c"
	}
#line 45 "../src/grid.vala"
	if (_tmp0_) {
#line 186 "grid.c"
		LiveChartXAxis* _tmp8_;
		LiveChartPath* _tmp9_;
		LiveChartPadding _tmp10_;
		gint _tmp11_;
		gint _tmp12_;
		LiveChartPadding _tmp13_;
		gint _tmp14_;
		gint _tmp15_;
		LiveChartPadding _tmp16_;
		gint _tmp17_;
		gint _tmp18_;
		LiveChartPadding _tmp19_;
#line 46 "../src/grid.vala"
		_tmp8_ = config->x_axis;
#line 46 "../src/grid.vala"
		_tmp9_ = _tmp8_->axis;
#line 46 "../src/grid.vala"
		live_chart_path_configure (_tmp9_, ctx);
#line 47 "../src/grid.vala"
		_tmp10_ = config->padding;
#line 47 "../src/grid.vala"
		_tmp11_ = live_chart_config_get_height (config);
#line 47 "../src/grid.vala"
		_tmp12_ = _tmp11_;
#line 47 "../src/grid.vala"
		_tmp13_ = config->padding;
#line 47 "../src/grid.vala"
		cairo_move_to (ctx, _tmp10_.left + 0.5, (_tmp12_ - _tmp13_.bottom) + 0.5);
#line 48 "../src/grid.vala"
		_tmp14_ = live_chart_config_get_width (config);
#line 48 "../src/grid.vala"
		_tmp15_ = _tmp14_;
#line 48 "../src/grid.vala"
		_tmp16_ = config->padding;
#line 48 "../src/grid.vala"
		_tmp17_ = live_chart_config_get_height (config);
#line 48 "../src/grid.vala"
		_tmp18_ = _tmp17_;
#line 48 "../src/grid.vala"
		_tmp19_ = config->padding;
#line 48 "../src/grid.vala"
		cairo_line_to (ctx, (_tmp15_ - _tmp16_.right) + 0.5, (_tmp18_ - _tmp19_.bottom) + 0.5);
#line 49 "../src/grid.vala"
		cairo_stroke (ctx);
#line 50 "../src/grid.vala"
		live_chart_grid_restore (self, ctx);
#line 233 "grid.c"
	}
}

void
live_chart_grid_render_ordinate (LiveChartGrid* self,
                                 cairo_t* ctx,
                                 LiveChartConfig* config)
{
	gboolean _tmp0_ = FALSE;
	LiveChartYAxis* _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_;
#line 54 "../src/grid.vala"
	g_return_if_fail (self != NULL);
#line 54 "../src/grid.vala"
	g_return_if_fail (ctx != NULL);
#line 54 "../src/grid.vala"
	g_return_if_fail (config != NULL);
#line 55 "../src/grid.vala"
	_tmp1_ = config->y_axis;
#line 55 "../src/grid.vala"
	_tmp2_ = live_chart_yaxis_get_visible (_tmp1_);
#line 55 "../src/grid.vala"
	_tmp3_ = _tmp2_;
#line 55 "../src/grid.vala"
	if (_tmp3_) {
#line 260 "grid.c"
		LiveChartYAxis* _tmp4_;
		LiveChartPath* _tmp5_;
		gboolean _tmp6_;
		gboolean _tmp7_;
#line 55 "../src/grid.vala"
		_tmp4_ = config->y_axis;
#line 55 "../src/grid.vala"
		_tmp5_ = _tmp4_->axis;
#line 55 "../src/grid.vala"
		_tmp6_ = live_chart_path_get_visible (_tmp5_);
#line 55 "../src/grid.vala"
		_tmp7_ = _tmp6_;
#line 55 "../src/grid.vala"
		_tmp0_ = _tmp7_;
#line 275 "grid.c"
	} else {
#line 55 "../src/grid.vala"
		_tmp0_ = FALSE;
#line 279 "grid.c"
	}
#line 55 "../src/grid.vala"
	if (_tmp0_) {
#line 283 "grid.c"
		LiveChartYAxis* _tmp8_;
		LiveChartPath* _tmp9_;
		LiveChartPadding _tmp10_;
		gint _tmp11_;
		gint _tmp12_;
		LiveChartPadding _tmp13_;
		LiveChartPadding _tmp14_;
		LiveChartPadding _tmp15_;
#line 56 "../src/grid.vala"
		_tmp8_ = config->y_axis;
#line 56 "../src/grid.vala"
		_tmp9_ = _tmp8_->axis;
#line 56 "../src/grid.vala"
		live_chart_path_configure (_tmp9_, ctx);
#line 57 "../src/grid.vala"
		_tmp10_ = config->padding;
#line 57 "../src/grid.vala"
		_tmp11_ = live_chart_config_get_height (config);
#line 57 "../src/grid.vala"
		_tmp12_ = _tmp11_;
#line 57 "../src/grid.vala"
		_tmp13_ = config->padding;
#line 57 "../src/grid.vala"
		cairo_move_to (ctx, _tmp10_.left + 0.5, (_tmp12_ - _tmp13_.bottom) + 0.5);
#line 58 "../src/grid.vala"
		_tmp14_ = config->padding;
#line 58 "../src/grid.vala"
		_tmp15_ = config->padding;
#line 58 "../src/grid.vala"
		cairo_line_to (ctx, _tmp14_.left + 0.5, _tmp15_.top + 0.5);
#line 59 "../src/grid.vala"
		cairo_stroke (ctx);
#line 60 "../src/grid.vala"
		live_chart_grid_restore (self, ctx);
#line 318 "grid.c"
	}
}

void
live_chart_grid_render_grid (LiveChartGrid* self,
                             cairo_t* ctx,
                             LiveChartConfig* config)
{
#line 64 "../src/grid.vala"
	g_return_if_fail (self != NULL);
#line 64 "../src/grid.vala"
	g_return_if_fail (ctx != NULL);
#line 64 "../src/grid.vala"
	g_return_if_fail (config != NULL);
#line 65 "../src/grid.vala"
	live_chart_grid_render_hgrid (self, ctx, config);
#line 66 "../src/grid.vala"
	live_chart_grid_render_vgrid (self, ctx, config);
#line 337 "grid.c"
}

void
live_chart_grid_render_vgrid (LiveChartGrid* self,
                              cairo_t* ctx,
                              LiveChartConfig* config)
{
	gint64 time = 0LL;
	GTimeZone* _tmp0_;
	GTimeZone* _tmp1_;
	GDateTime* _tmp2_;
	GDateTime* _tmp3_;
	gint64 _tmp4_;
#line 69 "../src/grid.vala"
	g_return_if_fail (self != NULL);
#line 69 "../src/grid.vala"
	g_return_if_fail (ctx != NULL);
#line 69 "../src/grid.vala"
	g_return_if_fail (config != NULL);
#line 70 "../src/grid.vala"
	_tmp0_ = g_time_zone_new_local ();
#line 70 "../src/grid.vala"
	_tmp1_ = _tmp0_;
#line 70 "../src/grid.vala"
	_tmp2_ = g_date_time_new_now (_tmp1_);
#line 70 "../src/grid.vala"
	_tmp3_ = _tmp2_;
#line 70 "../src/grid.vala"
	_tmp4_ = g_date_time_to_unix (_tmp3_);
#line 70 "../src/grid.vala"
	_g_date_time_unref0 (_tmp3_);
#line 70 "../src/grid.vala"
	_g_time_zone_unref0 (_tmp1_);
#line 70 "../src/grid.vala"
	time = _tmp4_;
#line 373 "grid.c"
	{
		gdouble i = 0.0;
		gint _tmp5_;
		gint _tmp6_;
		LiveChartPadding _tmp7_;
#line 71 "../src/grid.vala"
		_tmp5_ = live_chart_config_get_width (config);
#line 71 "../src/grid.vala"
		_tmp6_ = _tmp5_;
#line 71 "../src/grid.vala"
		_tmp7_ = config->padding;
#line 71 "../src/grid.vala"
		i = (gdouble) (_tmp6_ - _tmp7_.right);
#line 387 "grid.c"
		{
			gboolean _tmp8_ = FALSE;
#line 71 "../src/grid.vala"
			_tmp8_ = TRUE;
#line 71 "../src/grid.vala"
			while (TRUE) {
#line 394 "grid.c"
				LiveChartPadding _tmp12_;
				LiveChartXAxis* _tmp13_;
				LiveChartPath* _tmp14_;
				gboolean _tmp15_;
				gboolean _tmp16_;
				gboolean _tmp23_ = FALSE;
				LiveChartXAxis* _tmp24_;
				gboolean _tmp25_;
				gboolean _tmp26_;
				LiveChartXAxis* _tmp50_;
				gfloat _tmp51_;
				gfloat _tmp52_;
#line 71 "../src/grid.vala"
				if (!_tmp8_) {
#line 409 "grid.c"
					LiveChartXAxis* _tmp9_;
					gfloat _tmp10_;
					gfloat _tmp11_;
#line 71 "../src/grid.vala"
					_tmp9_ = config->x_axis;
#line 71 "../src/grid.vala"
					_tmp10_ = live_chart_xaxis_get_tick_length (_tmp9_);
#line 71 "../src/grid.vala"
					_tmp11_ = _tmp10_;
#line 71 "../src/grid.vala"
					i -= (gdouble) _tmp11_;
#line 421 "grid.c"
				}
#line 71 "../src/grid.vala"
				_tmp8_ = FALSE;
#line 71 "../src/grid.vala"
				_tmp12_ = config->padding;
#line 71 "../src/grid.vala"
				if (!(i > ((gdouble) _tmp12_.left))) {
#line 71 "../src/grid.vala"
					break;
#line 431 "grid.c"
				}
#line 72 "../src/grid.vala"
				_tmp13_ = config->x_axis;
#line 72 "../src/grid.vala"
				_tmp14_ = _tmp13_->lines;
#line 72 "../src/grid.vala"
				_tmp15_ = live_chart_path_get_visible (_tmp14_);
#line 72 "../src/grid.vala"
				_tmp16_ = _tmp15_;
#line 72 "../src/grid.vala"
				if (_tmp16_) {
#line 443 "grid.c"
					LiveChartXAxis* _tmp17_;
					LiveChartPath* _tmp18_;
					gint _tmp19_;
					gint _tmp20_;
					LiveChartPadding _tmp21_;
					LiveChartPadding _tmp22_;
#line 73 "../src/grid.vala"
					_tmp17_ = config->x_axis;
#line 73 "../src/grid.vala"
					_tmp18_ = _tmp17_->lines;
#line 73 "../src/grid.vala"
					live_chart_path_configure (_tmp18_, ctx);
#line 74 "../src/grid.vala"
					_tmp19_ = live_chart_config_get_height (config);
#line 74 "../src/grid.vala"
					_tmp20_ = _tmp19_;
#line 74 "../src/grid.vala"
					_tmp21_ = config->padding;
#line 74 "../src/grid.vala"
					cairo_move_to (ctx, ((gint) i) + 0.5, (0.5 + _tmp20_) - _tmp21_.bottom);
#line 75 "../src/grid.vala"
					_tmp22_ = config->padding;
#line 75 "../src/grid.vala"
					cairo_line_to (ctx, ((gint) i) + 0.5, 0.5 + _tmp22_.top);
#line 76 "../src/grid.vala"
					cairo_stroke (ctx);
#line 77 "../src/grid.vala"
					live_chart_grid_restore (self, ctx);
#line 472 "grid.c"
				}
#line 81 "../src/grid.vala"
				_tmp24_ = config->x_axis;
#line 81 "../src/grid.vala"
				_tmp25_ = live_chart_xaxis_get_visible (_tmp24_);
#line 81 "../src/grid.vala"
				_tmp26_ = _tmp25_;
#line 81 "../src/grid.vala"
				if (_tmp26_) {
#line 482 "grid.c"
					LiveChartXAxis* _tmp27_;
					LiveChartLabels* _tmp28_;
					gboolean _tmp29_;
					gboolean _tmp30_;
#line 81 "../src/grid.vala"
					_tmp27_ = config->x_axis;
#line 81 "../src/grid.vala"
					_tmp28_ = _tmp27_->labels;
#line 81 "../src/grid.vala"
					_tmp29_ = live_chart_labels_get_visible (_tmp28_);
#line 81 "../src/grid.vala"
					_tmp30_ = _tmp29_;
#line 81 "../src/grid.vala"
					_tmp23_ = _tmp30_;
#line 497 "grid.c"
				} else {
#line 81 "../src/grid.vala"
					_tmp23_ = FALSE;
#line 501 "grid.c"
				}
#line 81 "../src/grid.vala"
				if (_tmp23_) {
#line 505 "grid.c"
					LiveChartXAxis* _tmp31_;
					LiveChartLabels* _tmp32_;
					LiveChartFont* _tmp33_;
					LiveChartFont* _tmp34_;
					gchar* text = NULL;
					GDateTime* _tmp35_;
					GDateTime* _tmp36_;
					gchar* _tmp37_;
					gchar* _tmp38_;
					cairo_text_extents_t extents = {0};
					const gchar* _tmp39_;
					cairo_text_extents_t _tmp40_ = {0};
					cairo_text_extents_t _tmp41_;
					gint _tmp42_;
					gint _tmp43_;
					LiveChartPadding _tmp44_;
					LiveChartXAxis* _tmp45_;
					LiveChartLabels* _tmp46_;
					cairo_text_extents_t _tmp47_ = {0};
					cairo_text_extents_t _tmp48_;
					const gchar* _tmp49_;
#line 82 "../src/grid.vala"
					_tmp31_ = config->x_axis;
#line 82 "../src/grid.vala"
					_tmp32_ = _tmp31_->labels;
#line 82 "../src/grid.vala"
					_tmp33_ = live_chart_labels_get_font (_tmp32_);
#line 82 "../src/grid.vala"
					_tmp34_ = _tmp33_;
#line 82 "../src/grid.vala"
					live_chart_font_configure (_tmp34_, ctx);
#line 83 "../src/grid.vala"
					_tmp35_ = g_date_time_new_from_unix_local (time);
#line 83 "../src/grid.vala"
					_tmp36_ = _tmp35_;
#line 83 "../src/grid.vala"
					_tmp37_ = g_date_time_format (_tmp36_, "%H:%M:%S");
#line 83 "../src/grid.vala"
					_tmp38_ = _tmp37_;
#line 83 "../src/grid.vala"
					_g_date_time_unref0 (_tmp36_);
#line 83 "../src/grid.vala"
					text = _tmp38_;
#line 85 "../src/grid.vala"
					_tmp39_ = text;
#line 85 "../src/grid.vala"
					cairo_text_extents (ctx, _tmp39_, &_tmp40_);
#line 85 "../src/grid.vala"
					extents = _tmp40_;
#line 87 "../src/grid.vala"
					_tmp41_ = extents;
#line 87 "../src/grid.vala"
					_tmp42_ = live_chart_config_get_height (config);
#line 87 "../src/grid.vala"
					_tmp43_ = _tmp42_;
#line 87 "../src/grid.vala"
					_tmp44_ = config->padding;
#line 87 "../src/grid.vala"
					_tmp45_ = config->x_axis;
#line 87 "../src/grid.vala"
					_tmp46_ = _tmp45_->labels;
#line 87 "../src/grid.vala"
					live_chart_labels_get_extents (_tmp46_, &_tmp47_);
#line 87 "../src/grid.vala"
					_tmp48_ = _tmp47_;
#line 87 "../src/grid.vala"
					cairo_move_to (ctx, (i + 0.5) - (_tmp41_.width / 2), (((0.5 + _tmp43_) - _tmp44_.bottom) + _tmp48_.height) + LIVE_CHART_GRID_ABSCISSA_TIME_PADDING);
#line 88 "../src/grid.vala"
					_tmp49_ = text;
#line 88 "../src/grid.vala"
					cairo_show_text (ctx, _tmp49_);
#line 89 "../src/grid.vala"
					cairo_stroke (ctx);
#line 81 "../src/grid.vala"
					_g_free0 (text);
#line 581 "grid.c"
				}
#line 91 "../src/grid.vala"
				_tmp50_ = config->x_axis;
#line 91 "../src/grid.vala"
				_tmp51_ = live_chart_xaxis_get_tick_interval (_tmp50_);
#line 91 "../src/grid.vala"
				_tmp52_ = _tmp51_;
#line 91 "../src/grid.vala"
				time -= (gint64) ((gint) _tmp52_);
#line 591 "grid.c"
			}
		}
	}
}

void
live_chart_grid_render_hgrid (LiveChartGrid* self,
                              cairo_t* ctx,
                              LiveChartConfig* config)
{
	LiveChartBoundaries boundaries = {0};
	LiveChartBoundaries _tmp0_ = {0};
#line 95 "../src/grid.vala"
	g_return_if_fail (self != NULL);
#line 95 "../src/grid.vala"
	g_return_if_fail (ctx != NULL);
#line 95 "../src/grid.vala"
	g_return_if_fail (config != NULL);
#line 97 "../src/grid.vala"
	live_chart_config_boundaries (config, &_tmp0_);
#line 97 "../src/grid.vala"
	boundaries = _tmp0_;
#line 614 "grid.c"
	{
		GeeList* _position_list = NULL;
		LiveChartYAxis* _tmp1_;
		LiveChartTicks _tmp2_;
		GeeList* _tmp3_;
		gint _position_size = 0;
		GeeList* _tmp4_;
		gint _tmp5_;
		gint _tmp6_;
		gint _position_index = 0;
#line 98 "../src/grid.vala"
		_tmp1_ = config->y_axis;
#line 98 "../src/grid.vala"
		_tmp2_ = _tmp1_->ticks;
#line 98 "../src/grid.vala"
		_tmp3_ = _tmp2_.values;
#line 98 "../src/grid.vala"
		_position_list = _tmp3_;
#line 98 "../src/grid.vala"
		_tmp4_ = _position_list;
#line 98 "../src/grid.vala"
		_tmp5_ = gee_collection_get_size ((GeeCollection*) _tmp4_);
#line 98 "../src/grid.vala"
		_tmp6_ = _tmp5_;
#line 98 "../src/grid.vala"
		_position_size = _tmp6_;
#line 98 "../src/grid.vala"
		_position_index = -1;
#line 98 "../src/grid.vala"
		while (TRUE) {
#line 645 "grid.c"
			gint _tmp7_;
			gint _tmp8_;
			gfloat position = 0.0F;
			GeeList* _tmp9_;
			gpointer _tmp10_;
			gfloat* _tmp11_;
			gfloat _tmp12_;
			gdouble y = 0.0;
			LiveChartBoundaries _tmp13_;
			LiveChartBoundaries _tmp14_;
			LiveChartBoundary _tmp15_;
			LiveChartYAxis* _tmp16_;
			LiveChartBoundaries _tmp17_;
			LiveChartBoundary _tmp18_;
			LiveChartYAxis* _tmp19_;
			LiveChartPath* _tmp20_;
			gboolean _tmp21_;
			gboolean _tmp22_;
			gboolean _tmp29_ = FALSE;
			LiveChartYAxis* _tmp30_;
			gboolean _tmp31_;
			gboolean _tmp32_;
#line 98 "../src/grid.vala"
			_position_index = _position_index + 1;
#line 98 "../src/grid.vala"
			_tmp7_ = _position_index;
#line 98 "../src/grid.vala"
			_tmp8_ = _position_size;
#line 98 "../src/grid.vala"
			if (!(_tmp7_ < _tmp8_)) {
#line 98 "../src/grid.vala"
				break;
#line 678 "grid.c"
			}
#line 98 "../src/grid.vala"
			_tmp9_ = _position_list;
#line 98 "../src/grid.vala"
			_tmp10_ = gee_list_get (_tmp9_, _position_index);
#line 98 "../src/grid.vala"
			_tmp11_ = (gfloat*) _tmp10_;
#line 98 "../src/grid.vala"
			_tmp12_ = *_tmp11_;
#line 98 "../src/grid.vala"
			_g_free0 (_tmp11_);
#line 98 "../src/grid.vala"
			position = _tmp12_;
#line 100 "../src/grid.vala"
			_tmp13_ = boundaries;
#line 100 "../src/grid.vala"
			_tmp14_ = boundaries;
#line 100 "../src/grid.vala"
			_tmp15_ = _tmp14_.y;
#line 100 "../src/grid.vala"
			_tmp16_ = config->y_axis;
#line 100 "../src/grid.vala"
			y = (_tmp13_.height + _tmp15_.min) - (position * live_chart_yaxis_get_ratio (_tmp16_));
#line 101 "../src/grid.vala"
			_tmp17_ = boundaries;
#line 101 "../src/grid.vala"
			_tmp18_ = _tmp17_.y;
#line 101 "../src/grid.vala"
			if (y < ((gdouble) _tmp18_.min)) {
#line 102 "../src/grid.vala"
				break;
#line 710 "grid.c"
			}
#line 104 "../src/grid.vala"
			_tmp19_ = config->y_axis;
#line 104 "../src/grid.vala"
			_tmp20_ = _tmp19_->lines;
#line 104 "../src/grid.vala"
			_tmp21_ = live_chart_path_get_visible (_tmp20_);
#line 104 "../src/grid.vala"
			_tmp22_ = _tmp21_;
#line 104 "../src/grid.vala"
			if (_tmp22_) {
#line 722 "grid.c"
				LiveChartYAxis* _tmp23_;
				LiveChartPath* _tmp24_;
				LiveChartBoundaries _tmp25_;
				LiveChartBoundary _tmp26_;
				LiveChartBoundaries _tmp27_;
				LiveChartBoundary _tmp28_;
#line 105 "../src/grid.vala"
				_tmp23_ = config->y_axis;
#line 105 "../src/grid.vala"
				_tmp24_ = _tmp23_->lines;
#line 105 "../src/grid.vala"
				live_chart_path_configure (_tmp24_, ctx);
#line 106 "../src/grid.vala"
				_tmp25_ = boundaries;
#line 106 "../src/grid.vala"
				_tmp26_ = _tmp25_.x;
#line 106 "../src/grid.vala"
				cairo_move_to (ctx, 0.5 + _tmp26_.max, ((gint) y) + 0.5);
#line 107 "../src/grid.vala"
				_tmp27_ = boundaries;
#line 107 "../src/grid.vala"
				_tmp28_ = _tmp27_.x;
#line 107 "../src/grid.vala"
				cairo_line_to (ctx, _tmp28_.min + 0.5, ((gint) y) + 0.5);
#line 108 "../src/grid.vala"
				cairo_stroke (ctx);
#line 109 "../src/grid.vala"
				live_chart_grid_restore (self, ctx);
#line 751 "grid.c"
			}
#line 113 "../src/grid.vala"
			_tmp30_ = config->y_axis;
#line 113 "../src/grid.vala"
			_tmp31_ = live_chart_yaxis_get_visible (_tmp30_);
#line 113 "../src/grid.vala"
			_tmp32_ = _tmp31_;
#line 113 "../src/grid.vala"
			if (_tmp32_) {
#line 761 "grid.c"
				LiveChartYAxis* _tmp33_;
				LiveChartLabels* _tmp34_;
				gboolean _tmp35_;
				gboolean _tmp36_;
#line 113 "../src/grid.vala"
				_tmp33_ = config->y_axis;
#line 113 "../src/grid.vala"
				_tmp34_ = _tmp33_->labels;
#line 113 "../src/grid.vala"
				_tmp35_ = live_chart_labels_get_visible (_tmp34_);
#line 113 "../src/grid.vala"
				_tmp36_ = _tmp35_;
#line 113 "../src/grid.vala"
				_tmp29_ = _tmp36_;
#line 776 "grid.c"
			} else {
#line 113 "../src/grid.vala"
				_tmp29_ = FALSE;
#line 780 "grid.c"
			}
#line 113 "../src/grid.vala"
			if (_tmp29_) {
#line 784 "grid.c"
				LiveChartYAxis* _tmp37_;
				LiveChartLabels* _tmp38_;
				LiveChartFont* _tmp39_;
				LiveChartFont* _tmp40_;
				gchar* value = NULL;
				LiveChartYAxis* _tmp41_;
				const gchar* _tmp42_;
				const gchar* _tmp43_;
				gchar* _tmp44_;
				cairo_text_extents_t extents = {0};
				const gchar* _tmp45_;
				cairo_text_extents_t _tmp46_ = {0};
				LiveChartBoundaries _tmp47_;
				LiveChartBoundary _tmp48_;
				cairo_text_extents_t _tmp49_;
				cairo_text_extents_t _tmp50_;
				const gchar* _tmp51_;
#line 114 "../src/grid.vala"
				_tmp37_ = config->y_axis;
#line 114 "../src/grid.vala"
				_tmp38_ = _tmp37_->labels;
#line 114 "../src/grid.vala"
				_tmp39_ = live_chart_labels_get_font (_tmp38_);
#line 114 "../src/grid.vala"
				_tmp40_ = _tmp39_;
#line 114 "../src/grid.vala"
				live_chart_font_configure (_tmp40_, ctx);
#line 115 "../src/grid.vala"
				_tmp41_ = config->y_axis;
#line 115 "../src/grid.vala"
				_tmp42_ = live_chart_yaxis_get_unit (_tmp41_);
#line 115 "../src/grid.vala"
				_tmp43_ = _tmp42_;
#line 115 "../src/grid.vala"
				_tmp44_ = live_chart_format_for_y_axis (_tmp43_, position);
#line 115 "../src/grid.vala"
				value = _tmp44_;
#line 118 "../src/grid.vala"
				_tmp45_ = value;
#line 118 "../src/grid.vala"
				cairo_text_extents (ctx, _tmp45_, &_tmp46_);
#line 118 "../src/grid.vala"
				extents = _tmp46_;
#line 119 "../src/grid.vala"
				_tmp47_ = boundaries;
#line 119 "../src/grid.vala"
				_tmp48_ = _tmp47_.x;
#line 119 "../src/grid.vala"
				_tmp49_ = extents;
#line 119 "../src/grid.vala"
				_tmp50_ = extents;
#line 119 "../src/grid.vala"
				cairo_move_to (ctx, (_tmp48_.min - _tmp49_.width) - 5, (y + (_tmp50_.height / 2)) + 0.5);
#line 120 "../src/grid.vala"
				_tmp51_ = value;
#line 120 "../src/grid.vala"
				cairo_show_text (ctx, _tmp51_);
#line 121 "../src/grid.vala"
				cairo_stroke (ctx);
#line 113 "../src/grid.vala"
				_g_free0 (value);
#line 846 "grid.c"
			}
		}
	}
}

void
live_chart_grid_update_bounding_box (LiveChartGrid* self,
                                     LiveChartConfig* config)
{
	LiveChartBoundaries boundaries = {0};
	LiveChartBoundaries _tmp0_ = {0};
	LiveChartBoundaries _tmp1_;
	LiveChartBoundary _tmp2_;
	LiveChartBoundaries _tmp3_;
	LiveChartBoundary _tmp4_;
	LiveChartBoundaries _tmp5_;
	LiveChartBoundary _tmp6_;
	LiveChartBoundaries _tmp7_;
	LiveChartBoundary _tmp8_;
	LiveChartBoundaries _tmp9_;
	LiveChartBoundary _tmp10_;
	LiveChartBoundaries _tmp11_;
	LiveChartBoundary _tmp12_;
	LiveChartBoundingBox _tmp13_ = {0};
#line 126 "../src/grid.vala"
	g_return_if_fail (self != NULL);
#line 126 "../src/grid.vala"
	g_return_if_fail (config != NULL);
#line 127 "../src/grid.vala"
	live_chart_config_boundaries (config, &_tmp0_);
#line 127 "../src/grid.vala"
	boundaries = _tmp0_;
#line 128 "../src/grid.vala"
	_tmp1_ = boundaries;
#line 128 "../src/grid.vala"
	_tmp2_ = _tmp1_.x;
#line 128 "../src/grid.vala"
	_tmp3_ = boundaries;
#line 128 "../src/grid.vala"
	_tmp4_ = _tmp3_.y;
#line 128 "../src/grid.vala"
	_tmp5_ = boundaries;
#line 128 "../src/grid.vala"
	_tmp6_ = _tmp5_.x;
#line 128 "../src/grid.vala"
	_tmp7_ = boundaries;
#line 128 "../src/grid.vala"
	_tmp8_ = _tmp7_.x;
#line 128 "../src/grid.vala"
	_tmp9_ = boundaries;
#line 128 "../src/grid.vala"
	_tmp10_ = _tmp9_.y;
#line 128 "../src/grid.vala"
	_tmp11_ = boundaries;
#line 128 "../src/grid.vala"
	_tmp12_ = _tmp11_.y;
#line 128 "../src/grid.vala"
	memset (&_tmp13_, 0, sizeof (LiveChartBoundingBox));
#line 128 "../src/grid.vala"
	_tmp13_.x = (gdouble) _tmp2_.min;
#line 128 "../src/grid.vala"
	_tmp13_.y = (gdouble) _tmp4_.min;
#line 128 "../src/grid.vala"
	_tmp13_.width = (gdouble) (_tmp6_.max - _tmp8_.min);
#line 128 "../src/grid.vala"
	_tmp13_.height = (gdouble) ((_tmp10_.max - _tmp12_.min) + LIVE_CHART_GRID_ABSCISSA_TIME_PADDING);
#line 128 "../src/grid.vala"
	self->bounding_box = _tmp13_;
#line 915 "grid.c"
}

void
live_chart_grid_debug (LiveChartGrid* self,
                       cairo_t* ctx)
{
	gchar* debug = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	const gchar* _tmp2_;
#line 136 "../src/grid.vala"
	g_return_if_fail (self != NULL);
#line 136 "../src/grid.vala"
	g_return_if_fail (ctx != NULL);
#line 137 "../src/grid.vala"
	_tmp0_ = g_getenv ("LIVE_CHART_DEBUG");
#line 137 "../src/grid.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 137 "../src/grid.vala"
	debug = _tmp1_;
#line 138 "../src/grid.vala"
	_tmp2_ = debug;
#line 138 "../src/grid.vala"
	if (_tmp2_ != NULL) {
#line 940 "grid.c"
		LiveChartBoundingBox _tmp3_;
		LiveChartBoundingBox _tmp4_;
		LiveChartBoundingBox _tmp5_;
		LiveChartBoundingBox _tmp6_;
#line 139 "../src/grid.vala"
		_tmp3_ = self->bounding_box;
#line 139 "../src/grid.vala"
		_tmp4_ = self->bounding_box;
#line 139 "../src/grid.vala"
		_tmp5_ = self->bounding_box;
#line 139 "../src/grid.vala"
		_tmp6_ = self->bounding_box;
#line 139 "../src/grid.vala"
		cairo_rectangle (ctx, _tmp3_.x, _tmp4_.y, _tmp5_.width, _tmp6_.height);
#line 140 "../src/grid.vala"
		cairo_stroke (ctx);
#line 957 "grid.c"
	}
#line 136 "../src/grid.vala"
	_g_free0 (debug);
#line 961 "grid.c"
}

LiveChartGrid*
live_chart_grid_construct (GType object_type)
{
	LiveChartGrid * self = NULL;
#line 5 "../src/grid.vala"
	self = (LiveChartGrid*) g_object_new (object_type, NULL);
#line 5 "../src/grid.vala"
	return self;
#line 972 "grid.c"
}

LiveChartGrid*
live_chart_grid_new (void)
{
#line 5 "../src/grid.vala"
	return live_chart_grid_construct (LIVE_CHART_TYPE_GRID);
#line 980 "grid.c"
}

static gboolean
live_chart_grid_real_get_visible (LiveChartDrawable* base)
{
	gboolean result;
	LiveChartGrid* self;
#line 14 "../src/grid.vala"
	self = (LiveChartGrid*) base;
#line 14 "../src/grid.vala"
	result = self->priv->_visible;
#line 14 "../src/grid.vala"
	return result;
#line 994 "grid.c"
}

static void
live_chart_grid_real_set_visible (LiveChartDrawable* base,
                                  gboolean value)
{
	LiveChartGrid* self;
	gboolean old_value;
#line 14 "../src/grid.vala"
	self = (LiveChartGrid*) base;
#line 14 "../src/grid.vala"
	old_value = live_chart_grid_real_get_visible (base);
#line 14 "../src/grid.vala"
	if (old_value != value) {
#line 14 "../src/grid.vala"
		self->priv->_visible = value;
#line 14 "../src/grid.vala"
		g_object_notify_by_pspec ((GObject *) self, live_chart_grid_properties[LIVE_CHART_GRID_VISIBLE_PROPERTY]);
#line 1013 "grid.c"
	}
}

void
live_chart_grid_get_main_color (LiveChartGrid* self,
                                GdkRGBA * result)
{
	GdkRGBA _tmp0_;
#line 16 "../src/grid.vala"
	g_return_if_fail (self != NULL);
#line 16 "../src/grid.vala"
	_tmp0_ = self->priv->_main_color;
#line 16 "../src/grid.vala"
	*result = _tmp0_;
#line 16 "../src/grid.vala"
	return;
#line 1030 "grid.c"
}

static gboolean
_gdk_rgba_equal (const GdkRGBA * s1,
                 const GdkRGBA * s2)
{
#line 16 "../src/grid.vala"
	if (s1 == s2) {
#line 16 "../src/grid.vala"
		return TRUE;
#line 1041 "grid.c"
	}
#line 16 "../src/grid.vala"
	if (s1 == NULL) {
#line 16 "../src/grid.vala"
		return FALSE;
#line 1047 "grid.c"
	}
#line 16 "../src/grid.vala"
	if (s2 == NULL) {
#line 16 "../src/grid.vala"
		return FALSE;
#line 1053 "grid.c"
	}
#line 16 "../src/grid.vala"
	if (s1->red != s2->red) {
#line 16 "../src/grid.vala"
		return FALSE;
#line 1059 "grid.c"
	}
#line 16 "../src/grid.vala"
	if (s1->green != s2->green) {
#line 16 "../src/grid.vala"
		return FALSE;
#line 1065 "grid.c"
	}
#line 16 "../src/grid.vala"
	if (s1->blue != s2->blue) {
#line 16 "../src/grid.vala"
		return FALSE;
#line 1071 "grid.c"
	}
#line 16 "../src/grid.vala"
	if (s1->alpha != s2->alpha) {
#line 16 "../src/grid.vala"
		return FALSE;
#line 1077 "grid.c"
	}
#line 16 "../src/grid.vala"
	return TRUE;
#line 1081 "grid.c"
}

void
live_chart_grid_set_main_color (LiveChartGrid* self,
                                GdkRGBA * value)
{
	GdkRGBA old_value;
#line 16 "../src/grid.vala"
	g_return_if_fail (self != NULL);
#line 16 "../src/grid.vala"
	live_chart_grid_get_main_color (self, &old_value);
#line 16 "../src/grid.vala"
	if (_gdk_rgba_equal (value, &old_value) != TRUE) {
#line 1095 "grid.c"
		GdkRGBA _tmp0_;
#line 16 "../src/grid.vala"
		_tmp0_ = *value;
#line 16 "../src/grid.vala"
		self->priv->_main_color = _tmp0_;
#line 16 "../src/grid.vala"
		g_object_notify_by_pspec ((GObject *) self, live_chart_grid_properties[LIVE_CHART_GRID_MAIN_COLOR_PROPERTY]);
#line 1103 "grid.c"
	}
}

static void
live_chart_grid_class_init (LiveChartGridClass * klass,
                            gpointer klass_data)
{
#line 5 "../src/grid.vala"
	live_chart_grid_parent_class = g_type_class_peek_parent (klass);
#line 5 "../src/grid.vala"
	g_type_class_adjust_private_offset (klass, &LiveChartGrid_private_offset);
#line 5 "../src/grid.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_live_chart_grid_get_property;
#line 5 "../src/grid.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_live_chart_grid_set_property;
#line 5 "../src/grid.vala"
	G_OBJECT_CLASS (klass)->finalize = live_chart_grid_finalize;
#line 5 "../src/grid.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), LIVE_CHART_GRID_VISIBLE_PROPERTY, live_chart_grid_properties[LIVE_CHART_GRID_VISIBLE_PROPERTY] = g_param_spec_boolean ("visible", "visible", "visible", TRUE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 5 "../src/grid.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), LIVE_CHART_GRID_MAIN_COLOR_PROPERTY, live_chart_grid_properties[LIVE_CHART_GRID_MAIN_COLOR_PROPERTY] = g_param_spec_boxed ("main-color", "main-color", "main-color", gdk_rgba_get_type (), G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 1125 "grid.c"
}

static void
live_chart_grid_live_chart_drawable_interface_init (LiveChartDrawableIface * iface,
                                                    gpointer iface_data)
{
#line 5 "../src/grid.vala"
	live_chart_grid_live_chart_drawable_parent_iface = g_type_interface_peek_parent (iface);
#line 5 "../src/grid.vala"
	iface->draw = (void (*) (LiveChartDrawable*, cairo_t*, LiveChartConfig*)) live_chart_grid_real_draw;
#line 5 "../src/grid.vala"
	iface->get_bounding_box = (void (*) (LiveChartDrawable*, LiveChartBoundingBox*)) live_chart_grid_real_get_bounding_box;
#line 5 "../src/grid.vala"
	iface->get_visible = live_chart_grid_real_get_visible;
#line 5 "../src/grid.vala"
	iface->set_visible = live_chart_grid_real_set_visible;
#line 1142 "grid.c"
}

static void
live_chart_grid_instance_init (LiveChartGrid * self,
                               gpointer klass)
{
	LiveChartBoundingBox _tmp0_ = {0};
	GdkRGBA _tmp1_ = {0};
#line 5 "../src/grid.vala"
	self->priv = live_chart_grid_get_instance_private (self);
#line 7 "../src/grid.vala"
	memset (&_tmp0_, 0, sizeof (LiveChartBoundingBox));
#line 7 "../src/grid.vala"
	_tmp0_.x = (gdouble) 0;
#line 7 "../src/grid.vala"
	_tmp0_.y = (gdouble) 0;
#line 7 "../src/grid.vala"
	_tmp0_.width = (gdouble) 0;
#line 7 "../src/grid.vala"
	_tmp0_.height = (gdouble) 0;
#line 7 "../src/grid.vala"
	self->bounding_box = _tmp0_;
#line 14 "../src/grid.vala"
	self->priv->_visible = TRUE;
#line 15 "../src/grid.vala"
	memset (&_tmp1_, 0, sizeof (GdkRGBA));
#line 15 "../src/grid.vala"
	_tmp1_.red = 0.4;
#line 15 "../src/grid.vala"
	_tmp1_.green = 0.4;
#line 15 "../src/grid.vala"
	_tmp1_.blue = 0.4;
#line 15 "../src/grid.vala"
	_tmp1_.alpha = 1.0;
#line 15 "../src/grid.vala"
	self->priv->_main_color = _tmp1_;
#line 1179 "grid.c"
}

static void
live_chart_grid_finalize (GObject * obj)
{
	LiveChartGrid * self;
#line 5 "../src/grid.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, LIVE_CHART_TYPE_GRID, LiveChartGrid);
#line 5 "../src/grid.vala"
	G_OBJECT_CLASS (live_chart_grid_parent_class)->finalize (obj);
#line 1190 "grid.c"
}

static GType
live_chart_grid_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (LiveChartGridClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) live_chart_grid_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LiveChartGrid), 0, (GInstanceInitFunc) live_chart_grid_instance_init, NULL };
	static const GInterfaceInfo live_chart_drawable_info = { (GInterfaceInitFunc) live_chart_grid_live_chart_drawable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType live_chart_grid_type_id;
	live_chart_grid_type_id = g_type_register_static (G_TYPE_OBJECT, "LiveChartGrid", &g_define_type_info, 0);
	g_type_add_interface_static (live_chart_grid_type_id, LIVE_CHART_TYPE_DRAWABLE, &live_chart_drawable_info);
	LiveChartGrid_private_offset = g_type_add_instance_private (live_chart_grid_type_id, sizeof (LiveChartGridPrivate));
	return live_chart_grid_type_id;
}

GType
live_chart_grid_get_type (void)
{
	static volatile gsize live_chart_grid_type_id__once = 0;
	if (g_once_init_enter (&live_chart_grid_type_id__once)) {
		GType live_chart_grid_type_id;
		live_chart_grid_type_id = live_chart_grid_get_type_once ();
		g_once_init_leave (&live_chart_grid_type_id__once, live_chart_grid_type_id);
	}
	return live_chart_grid_type_id__once;
}

static void
_vala_live_chart_grid_get_property (GObject * object,
                                    guint property_id,
                                    GValue * value,
                                    GParamSpec * pspec)
{
	LiveChartGrid * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, LIVE_CHART_TYPE_GRID, LiveChartGrid);
#line 5 "../src/grid.vala"
	switch (property_id) {
#line 5 "../src/grid.vala"
		case LIVE_CHART_GRID_VISIBLE_PROPERTY:
#line 5 "../src/grid.vala"
		g_value_set_boolean (value, live_chart_drawable_get_visible ((LiveChartDrawable*) self));
#line 5 "../src/grid.vala"
		break;
#line 5 "../src/grid.vala"
		case LIVE_CHART_GRID_MAIN_COLOR_PROPERTY:
#line 1235 "grid.c"
		{
			GdkRGBA boxed;
#line 5 "../src/grid.vala"
			live_chart_grid_get_main_color (self, &boxed);
#line 5 "../src/grid.vala"
			g_value_set_boxed (value, &boxed);
#line 1242 "grid.c"
		}
#line 5 "../src/grid.vala"
		break;
#line 1246 "grid.c"
		default:
#line 5 "../src/grid.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 5 "../src/grid.vala"
		break;
#line 1252 "grid.c"
	}
}

static void
_vala_live_chart_grid_set_property (GObject * object,
                                    guint property_id,
                                    const GValue * value,
                                    GParamSpec * pspec)
{
	LiveChartGrid * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, LIVE_CHART_TYPE_GRID, LiveChartGrid);
#line 5 "../src/grid.vala"
	switch (property_id) {
#line 5 "../src/grid.vala"
		case LIVE_CHART_GRID_VISIBLE_PROPERTY:
#line 5 "../src/grid.vala"
		live_chart_drawable_set_visible ((LiveChartDrawable*) self, g_value_get_boolean (value));
#line 5 "../src/grid.vala"
		break;
#line 5 "../src/grid.vala"
		case LIVE_CHART_GRID_MAIN_COLOR_PROPERTY:
#line 5 "../src/grid.vala"
		live_chart_grid_set_main_color (self, g_value_get_boxed (value));
#line 5 "../src/grid.vala"
		break;
#line 1278 "grid.c"
		default:
#line 5 "../src/grid.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 5 "../src/grid.vala"
		break;
#line 1284 "grid.c"
	}
}

