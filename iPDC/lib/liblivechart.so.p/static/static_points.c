/* static_points.c generated by valac 0.56.0, the Vala compiler
 * generated from static_points.vala, do not modify */

#include "livechart.h"
#include <gee.h>
#include <glib-object.h>
#include <glib.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

enum  {
	LIVE_CHART_STATIC_STATIC_POINTS_0_PROPERTY,
	LIVE_CHART_STATIC_STATIC_POINTS_BOUNDS_PROPERTY,
	LIVE_CHART_STATIC_STATIC_POINTS_SIZE_PROPERTY,
	LIVE_CHART_STATIC_STATIC_POINTS_REALTIME_DELTA_PROPERTY,
	LIVE_CHART_STATIC_STATIC_POINTS_NUM_PROPERTIES
};
static GParamSpec* live_chart_static_static_points_properties[LIVE_CHART_STATIC_STATIC_POINTS_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _live_chart_point_free0(var) ((var == NULL) ? NULL : (var = (live_chart_point_free (var), NULL)))
#define _live_chart_static_named_value_free0(var) ((var == NULL) ? NULL : (var = (live_chart_static_named_value_free (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _LiveChartStaticStaticPointsPrivate {
	GeeArrayList* points;
	LiveChartBounds* _bounds;
	gdouble _realtime_delta;
};

static gint LiveChartStaticStaticPoints_private_offset;
static gpointer live_chart_static_static_points_parent_class = NULL;

static void live_chart_static_static_points_value_to_point (LiveChartStaticNamedValue* current_value,
                                                     LiveChartConfig* config,
                                                     LiveChartBoundaries* boundaries,
                                                     LiveChartPoint* result);
static void live_chart_static_static_points_finalize (GObject * obj);
static GType live_chart_static_static_points_get_type_once (void);
static void _vala_live_chart_static_static_points_get_property (GObject * object,
                                                         guint property_id,
                                                         GValue * value,
                                                         GParamSpec * pspec);
static void _vala_live_chart_static_static_points_set_property (GObject * object,
                                                         guint property_id,
                                                         const GValue * value,
                                                         GParamSpec * pspec);
static inline gpointer _vala_memdup2 (gconstpointer mem,
                        gsize byte_size);

static inline gpointer
live_chart_static_static_points_get_instance_private (LiveChartStaticStaticPoints* self)
{
	return G_STRUCT_MEMBER_P (self, LiveChartStaticStaticPoints_private_offset);
}

LiveChartStaticStaticPoints*
live_chart_static_static_points_construct (GType object_type)
{
	LiveChartStaticStaticPoints * self = NULL;
	LiveChartBounds* _tmp0_;
	LiveChartBounds* _tmp1_;
#line 13 "../src/static/static_points.vala"
	self = (LiveChartStaticStaticPoints*) g_object_new (object_type, NULL);
#line 14 "../src/static/static_points.vala"
	_tmp0_ = live_chart_bounds_new (((double) NAN), ((double) NAN));
#line 14 "../src/static/static_points.vala"
	_tmp1_ = _tmp0_;
#line 14 "../src/static/static_points.vala"
	live_chart_static_static_points_set_bounds (self, _tmp1_);
#line 14 "../src/static/static_points.vala"
	_g_object_unref0 (_tmp1_);
#line 13 "../src/static/static_points.vala"
	return self;
#line 77 "static_points.c"
}

LiveChartStaticStaticPoints*
live_chart_static_static_points_new (void)
{
#line 13 "../src/static/static_points.vala"
	return live_chart_static_static_points_construct (LIVE_CHART_STATIC_TYPE_STATIC_POINTS);
#line 85 "static_points.c"
}

void
live_chart_static_static_points_add (LiveChartStaticStaticPoints* self,
                                     LiveChartPoint* point)
{
	LiveChartBounds* _tmp0_;
	LiveChartPoint _tmp1_;
	GeeArrayList* _tmp2_;
	LiveChartPoint _tmp3_;
#line 17 "../src/static/static_points.vala"
	g_return_if_fail (self != NULL);
#line 17 "../src/static/static_points.vala"
	g_return_if_fail (point != NULL);
#line 18 "../src/static/static_points.vala"
	_tmp0_ = self->priv->_bounds;
#line 18 "../src/static/static_points.vala"
	_tmp1_ = *point;
#line 18 "../src/static/static_points.vala"
	live_chart_bounds_update (_tmp0_, _tmp1_.y);
#line 19 "../src/static/static_points.vala"
	_tmp2_ = self->priv->points;
#line 19 "../src/static/static_points.vala"
	_tmp3_ = *point;
#line 19 "../src/static/static_points.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp2_, &_tmp3_);
#line 112 "static_points.c"
}

void
live_chart_static_static_points_get (LiveChartStaticStaticPoints* self,
                                     gint at,
                                     LiveChartPoint* result)
{
	GeeArrayList* _tmp0_;
	gpointer _tmp1_;
	LiveChartPoint* _tmp2_;
	LiveChartPoint _tmp3_;
#line 32 "../src/static/static_points.vala"
	g_return_if_fail (self != NULL);
#line 33 "../src/static/static_points.vala"
	_tmp0_ = self->priv->points;
#line 33 "../src/static/static_points.vala"
	_tmp1_ = gee_abstract_list_get ((GeeAbstractList*) _tmp0_, at);
#line 33 "../src/static/static_points.vala"
	_tmp2_ = (LiveChartPoint*) _tmp1_;
#line 33 "../src/static/static_points.vala"
	_tmp3_ = *_tmp2_;
#line 33 "../src/static/static_points.vala"
	_live_chart_point_free0 (_tmp2_);
#line 33 "../src/static/static_points.vala"
	*result = _tmp3_;
#line 33 "../src/static/static_points.vala"
	return;
#line 140 "static_points.c"
}

void
live_chart_static_static_points_after (LiveChartStaticStaticPoints* self,
                                       gint at,
                                       LiveChartPoint* result)
{
	gint _tmp0_;
	gint _tmp1_;
	LiveChartPoint _tmp5_ = {0};
#line 36 "../src/static/static_points.vala"
	g_return_if_fail (self != NULL);
#line 37 "../src/static/static_points.vala"
	_tmp0_ = live_chart_static_static_points_get_size (self);
#line 37 "../src/static/static_points.vala"
	_tmp1_ = _tmp0_;
#line 37 "../src/static/static_points.vala"
	if ((at + 1) >= _tmp1_) {
#line 159 "static_points.c"
		gint _tmp2_;
		gint _tmp3_;
		LiveChartPoint _tmp4_ = {0};
#line 37 "../src/static/static_points.vala"
		_tmp2_ = live_chart_static_static_points_get_size (self);
#line 37 "../src/static/static_points.vala"
		_tmp3_ = _tmp2_;
#line 37 "../src/static/static_points.vala"
		live_chart_static_static_points_get (self, _tmp3_ - 1, &_tmp4_);
#line 37 "../src/static/static_points.vala"
		*result = _tmp4_;
#line 37 "../src/static/static_points.vala"
		return;
#line 173 "static_points.c"
	}
#line 38 "../src/static/static_points.vala"
	live_chart_static_static_points_get (self, at + 1, &_tmp5_);
#line 38 "../src/static/static_points.vala"
	*result = _tmp5_;
#line 38 "../src/static/static_points.vala"
	return;
#line 181 "static_points.c"
}

void
live_chart_static_static_points_first (LiveChartStaticStaticPoints* self,
                                       LiveChartPoint* result)
{
	LiveChartPoint _tmp0_ = {0};
#line 41 "../src/static/static_points.vala"
	g_return_if_fail (self != NULL);
#line 42 "../src/static/static_points.vala"
	live_chart_static_static_points_get (self, 0, &_tmp0_);
#line 42 "../src/static/static_points.vala"
	*result = _tmp0_;
#line 42 "../src/static/static_points.vala"
	return;
#line 197 "static_points.c"
}

void
live_chart_static_static_points_last (LiveChartStaticStaticPoints* self,
                                      LiveChartPoint* result)
{
	gint _tmp0_;
	gint _tmp1_;
	LiveChartPoint _tmp2_ = {0};
#line 45 "../src/static/static_points.vala"
	g_return_if_fail (self != NULL);
#line 46 "../src/static/static_points.vala"
	_tmp0_ = live_chart_static_static_points_get_size (self);
#line 46 "../src/static/static_points.vala"
	_tmp1_ = _tmp0_;
#line 46 "../src/static/static_points.vala"
	live_chart_static_static_points_get (self, _tmp1_ - 1, &_tmp2_);
#line 46 "../src/static/static_points.vala"
	*result = _tmp2_;
#line 46 "../src/static/static_points.vala"
	return;
#line 219 "static_points.c"
}

LiveChartStaticStaticPoints*
live_chart_static_static_points_create (LiveChartStaticStaticValues* values,
                                        LiveChartConfig* config)
{
	LiveChartBoundaries boundaries = {0};
	LiveChartBoundaries _tmp0_ = {0};
	LiveChartStaticStaticPoints* points = NULL;
	LiveChartStaticStaticPoints* _tmp1_;
	gint _tmp2_;
	gint _tmp3_;
	LiveChartStaticStaticPoints* result;
#line 49 "../src/static/static_points.vala"
	g_return_val_if_fail (values != NULL, NULL);
#line 49 "../src/static/static_points.vala"
	g_return_val_if_fail (config != NULL, NULL);
#line 50 "../src/static/static_points.vala"
	live_chart_config_boundaries (config, &_tmp0_);
#line 50 "../src/static/static_points.vala"
	boundaries = _tmp0_;
#line 52 "../src/static/static_points.vala"
	_tmp1_ = live_chart_static_static_points_new ();
#line 52 "../src/static/static_points.vala"
	points = _tmp1_;
#line 53 "../src/static/static_points.vala"
	_tmp2_ = gee_abstract_collection_get_size ((GeeAbstractCollection*) values);
#line 53 "../src/static/static_points.vala"
	_tmp3_ = _tmp2_;
#line 53 "../src/static/static_points.vala"
	if (_tmp3_ > 0) {
#line 251 "static_points.c"
		{
			LiveChartStaticStaticValues* _value_list = NULL;
			gint _value_size = 0;
			LiveChartStaticStaticValues* _tmp4_;
			gint _tmp5_;
			gint _tmp6_;
			gint _value_index = 0;
#line 54 "../src/static/static_points.vala"
			_value_list = values;
#line 54 "../src/static/static_points.vala"
			_tmp4_ = _value_list;
#line 54 "../src/static/static_points.vala"
			_tmp5_ = gee_abstract_collection_get_size ((GeeAbstractCollection*) _tmp4_);
#line 54 "../src/static/static_points.vala"
			_tmp6_ = _tmp5_;
#line 54 "../src/static/static_points.vala"
			_value_size = _tmp6_;
#line 54 "../src/static/static_points.vala"
			_value_index = -1;
#line 54 "../src/static/static_points.vala"
			while (TRUE) {
#line 273 "static_points.c"
				gint _tmp7_;
				gint _tmp8_;
				LiveChartStaticNamedValue value = {0};
				LiveChartStaticStaticValues* _tmp9_;
				gpointer _tmp10_;
				LiveChartStaticNamedValue* _tmp11_;
				LiveChartStaticNamedValue _tmp12_;
				LiveChartStaticNamedValue _tmp13_ = {0};
				LiveChartStaticNamedValue _tmp14_;
				LiveChartPoint point = {0};
				LiveChartStaticNamedValue _tmp15_;
				LiveChartBoundaries _tmp16_;
				LiveChartPoint _tmp17_ = {0};
				LiveChartStaticStaticPoints* _tmp18_;
				LiveChartPoint _tmp19_;
#line 54 "../src/static/static_points.vala"
				_value_index = _value_index + 1;
#line 54 "../src/static/static_points.vala"
				_tmp7_ = _value_index;
#line 54 "../src/static/static_points.vala"
				_tmp8_ = _value_size;
#line 54 "../src/static/static_points.vala"
				if (!(_tmp7_ < _tmp8_)) {
#line 54 "../src/static/static_points.vala"
					break;
#line 299 "static_points.c"
				}
#line 54 "../src/static/static_points.vala"
				_tmp9_ = _value_list;
#line 54 "../src/static/static_points.vala"
				_tmp10_ = gee_abstract_list_get ((GeeAbstractList*) _tmp9_, _value_index);
#line 54 "../src/static/static_points.vala"
				_tmp11_ = (LiveChartStaticNamedValue*) _tmp10_;
#line 54 "../src/static/static_points.vala"
				_tmp12_ = *_tmp11_;
#line 54 "../src/static/static_points.vala"
				live_chart_static_named_value_copy (&_tmp12_, &_tmp13_);
#line 54 "../src/static/static_points.vala"
				_tmp14_ = _tmp13_;
#line 54 "../src/static/static_points.vala"
				_live_chart_static_named_value_free0 (_tmp11_);
#line 54 "../src/static/static_points.vala"
				value = _tmp14_;
#line 55 "../src/static/static_points.vala"
				_tmp15_ = value;
#line 55 "../src/static/static_points.vala"
				_tmp16_ = boundaries;
#line 55 "../src/static/static_points.vala"
				live_chart_static_static_points_value_to_point (&_tmp15_, config, &_tmp16_, &_tmp17_);
#line 55 "../src/static/static_points.vala"
				point = _tmp17_;
#line 56 "../src/static/static_points.vala"
				_tmp18_ = points;
#line 56 "../src/static/static_points.vala"
				_tmp19_ = point;
#line 56 "../src/static/static_points.vala"
				live_chart_static_static_points_add (_tmp18_, &_tmp19_);
#line 54 "../src/static/static_points.vala"
				live_chart_static_named_value_destroy (&value);
#line 333 "static_points.c"
			}
		}
	}
#line 60 "../src/static/static_points.vala"
	result = points;
#line 60 "../src/static/static_points.vala"
	return result;
#line 341 "static_points.c"
}

static void
live_chart_static_static_points_value_to_point (LiveChartStaticNamedValue* current_value,
                                                LiveChartConfig* config,
                                                LiveChartBoundaries* boundaries,
                                                LiveChartPoint* result)
{
	gint category_length = 0;
	GeeArrayList* _tmp0_;
	gint _tmp1_;
	gint _tmp2_;
	guint8 category_pos = 0U;
	gint width_between_each_points = 0;
	LiveChartBoundaries _tmp15_;
	LiveChartBoundary _tmp16_;
	LiveChartBoundaries _tmp17_;
	LiveChartBoundary _tmp18_;
	gint _tmp19_;
	gint _tmp20_;
	gchar* _tmp21_;
	gchar* _tmp22_;
	gint x = 0;
	LiveChartBoundaries _tmp23_;
	LiveChartBoundary _tmp24_;
	gdouble y = 0.0;
	LiveChartBoundaries _tmp25_;
	LiveChartBoundary _tmp26_;
	LiveChartStaticNamedValue _tmp27_;
	LiveChartYAxis* _tmp28_;
	LiveChartStaticNamedValue _tmp29_;
	const gchar* _tmp30_;
	LiveChartXAxis* _tmp31_;
	gchar* _tmp32_;
	gchar* _tmp33_;
	LiveChartStaticNamedValue _tmp34_;
	LiveChartYAxis* _tmp35_;
	LiveChartPoint _tmp36_ = {0};
#line 63 "../src/static/static_points.vala"
	g_return_if_fail (current_value != NULL);
#line 63 "../src/static/static_points.vala"
	g_return_if_fail (config != NULL);
#line 63 "../src/static/static_points.vala"
	g_return_if_fail (boundaries != NULL);
#line 64 "../src/static/static_points.vala"
	_tmp0_ = config->categories;
#line 64 "../src/static/static_points.vala"
	_tmp1_ = gee_abstract_collection_get_size ((GeeAbstractCollection*) _tmp0_);
#line 64 "../src/static/static_points.vala"
	_tmp2_ = _tmp1_;
#line 64 "../src/static/static_points.vala"
	category_length = _tmp2_;
#line 65 "../src/static/static_points.vala"
	category_pos = (guint8) 0;
#line 396 "static_points.c"
	{
		guint8 i = 0U;
#line 66 "../src/static/static_points.vala"
		i = (guint8) 0;
#line 401 "static_points.c"
		{
			gboolean _tmp3_ = FALSE;
#line 66 "../src/static/static_points.vala"
			_tmp3_ = TRUE;
#line 66 "../src/static/static_points.vala"
			while (TRUE) {
#line 408 "static_points.c"
				gchar* category = NULL;
				GeeArrayList* _tmp5_;
				gpointer _tmp6_;
				gboolean _tmp7_ = FALSE;
				const gchar* _tmp8_;
#line 66 "../src/static/static_points.vala"
				if (!_tmp3_) {
#line 416 "static_points.c"
					guint8 _tmp4_;
#line 66 "../src/static/static_points.vala"
					_tmp4_ = i;
#line 66 "../src/static/static_points.vala"
					i = _tmp4_ + 1;
#line 422 "static_points.c"
				}
#line 66 "../src/static/static_points.vala"
				_tmp3_ = FALSE;
#line 66 "../src/static/static_points.vala"
				if (!(((gint) i) < category_length)) {
#line 66 "../src/static/static_points.vala"
					break;
#line 430 "static_points.c"
				}
#line 67 "../src/static/static_points.vala"
				_tmp5_ = config->categories;
#line 67 "../src/static/static_points.vala"
				_tmp6_ = gee_abstract_list_get ((GeeAbstractList*) _tmp5_, (gint) i);
#line 67 "../src/static/static_points.vala"
				category = (gchar*) _tmp6_;
#line 68 "../src/static/static_points.vala"
				_tmp8_ = category;
#line 68 "../src/static/static_points.vala"
				if (_tmp8_ != NULL) {
#line 442 "static_points.c"
					const gchar* _tmp9_;
					LiveChartStaticNamedValue _tmp10_;
					const gchar* _tmp11_;
#line 68 "../src/static/static_points.vala"
					_tmp9_ = category;
#line 68 "../src/static/static_points.vala"
					_tmp10_ = *current_value;
#line 68 "../src/static/static_points.vala"
					_tmp11_ = _tmp10_.name;
#line 68 "../src/static/static_points.vala"
					_tmp7_ = g_strcmp0 (_tmp9_, _tmp11_) == 0;
#line 454 "static_points.c"
				} else {
#line 68 "../src/static/static_points.vala"
					_tmp7_ = FALSE;
#line 458 "static_points.c"
				}
#line 68 "../src/static/static_points.vala"
				if (_tmp7_) {
#line 462 "static_points.c"
					const gchar* _tmp12_;
					gchar* _tmp13_;
					gchar* _tmp14_;
#line 69 "../src/static/static_points.vala"
					category_pos = i;
#line 70 "../src/static/static_points.vala"
					_tmp12_ = category;
#line 70 "../src/static/static_points.vala"
					_tmp13_ = g_strdup_printf ("Found category %s at pos %d", _tmp12_, (gint) i);
#line 70 "../src/static/static_points.vala"
					_tmp14_ = _tmp13_;
#line 70 "../src/static/static_points.vala"
					g_message ("static_points.vala:70: %s", _tmp14_);
#line 70 "../src/static/static_points.vala"
					_g_free0 (_tmp14_);
#line 71 "../src/static/static_points.vala"
					_g_free0 (category);
#line 71 "../src/static/static_points.vala"
					break;
#line 482 "static_points.c"
				}
#line 66 "../src/static/static_points.vala"
				_g_free0 (category);
#line 486 "static_points.c"
			}
		}
	}
#line 74 "../src/static/static_points.vala"
	_tmp15_ = *boundaries;
#line 74 "../src/static/static_points.vala"
	_tmp16_ = _tmp15_.x;
#line 74 "../src/static/static_points.vala"
	_tmp17_ = *boundaries;
#line 74 "../src/static/static_points.vala"
	_tmp18_ = _tmp17_.x;
#line 74 "../src/static/static_points.vala"
	width_between_each_points = (_tmp16_.max - _tmp18_.min) / (category_length - 1);
#line 75 "../src/static/static_points.vala"
	_tmp19_ = live_chart_config_get_width (config);
#line 75 "../src/static/static_points.vala"
	_tmp20_ = _tmp19_;
#line 75 "../src/static/static_points.vala"
	_tmp21_ = g_strdup_printf ("WIDTH %d", _tmp20_);
#line 75 "../src/static/static_points.vala"
	_tmp22_ = _tmp21_;
#line 75 "../src/static/static_points.vala"
	g_message ("static_points.vala:75: %s", _tmp22_);
#line 75 "../src/static/static_points.vala"
	_g_free0 (_tmp22_);
#line 76 "../src/static/static_points.vala"
	_tmp23_ = *boundaries;
#line 76 "../src/static/static_points.vala"
	_tmp24_ = _tmp23_.x;
#line 76 "../src/static/static_points.vala"
	x = _tmp24_.min + (category_pos * width_between_each_points);
#line 77 "../src/static/static_points.vala"
	_tmp25_ = *boundaries;
#line 77 "../src/static/static_points.vala"
	_tmp26_ = _tmp25_.y;
#line 77 "../src/static/static_points.vala"
	_tmp27_ = *current_value;
#line 77 "../src/static/static_points.vala"
	_tmp28_ = config->y_axis;
#line 77 "../src/static/static_points.vala"
	y = _tmp26_.max - (_tmp27_.value * live_chart_yaxis_get_ratio (_tmp28_));
#line 78 "../src/static/static_points.vala"
	_tmp29_ = *current_value;
#line 78 "../src/static/static_points.vala"
	_tmp30_ = _tmp29_.name;
#line 78 "../src/static/static_points.vala"
	_tmp31_ = config->x_axis;
#line 78 "../src/static/static_points.vala"
	_tmp32_ = g_strdup_printf ("category %s at pos %d (%f,%f) (width_between_each_points = %d) ratio: " \
"%f", _tmp30_, (gint) category_pos, (gdouble) x, y, width_between_each_points, live_chart_xaxis_get_ratio (_tmp31_));
#line 78 "../src/static/static_points.vala"
	_tmp33_ = _tmp32_;
#line 78 "../src/static/static_points.vala"
	g_message ("static_points.vala:78: %s", _tmp33_);
#line 78 "../src/static/static_points.vala"
	_g_free0 (_tmp33_);
#line 79 "../src/static/static_points.vala"
	_tmp34_ = *current_value;
#line 79 "../src/static/static_points.vala"
	_tmp35_ = config->y_axis;
#line 79 "../src/static/static_points.vala"
	memset (&_tmp36_, 0, sizeof (LiveChartPoint));
#line 79 "../src/static/static_points.vala"
	_tmp36_.x = (gdouble) x;
#line 79 "../src/static/static_points.vala"
	_tmp36_.y = y;
#line 79 "../src/static/static_points.vala"
	_tmp36_.height = _tmp34_.value * live_chart_yaxis_get_ratio (_tmp35_);
#line 79 "../src/static/static_points.vala"
	*result = _tmp36_;
#line 79 "../src/static/static_points.vala"
	return;
#line 558 "static_points.c"
}

LiveChartBounds*
live_chart_static_static_points_get_bounds (LiveChartStaticStaticPoints* self)
{
	LiveChartBounds* result;
	LiveChartBounds* _tmp0_;
#line 10 "../src/static/static_points.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 10 "../src/static/static_points.vala"
	_tmp0_ = self->priv->_bounds;
#line 10 "../src/static/static_points.vala"
	result = _tmp0_;
#line 10 "../src/static/static_points.vala"
	return result;
#line 574 "static_points.c"
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 10 "../src/static/static_points.vala"
	return self ? g_object_ref (self) : NULL;
#line 582 "static_points.c"
}

void
live_chart_static_static_points_set_bounds (LiveChartStaticStaticPoints* self,
                                            LiveChartBounds* value)
{
	LiveChartBounds* old_value;
#line 10 "../src/static/static_points.vala"
	g_return_if_fail (self != NULL);
#line 10 "../src/static/static_points.vala"
	old_value = live_chart_static_static_points_get_bounds (self);
#line 10 "../src/static/static_points.vala"
	if (old_value != value) {
#line 596 "static_points.c"
		LiveChartBounds* _tmp0_;
#line 10 "../src/static/static_points.vala"
		_tmp0_ = _g_object_ref0 (value);
#line 10 "../src/static/static_points.vala"
		_g_object_unref0 (self->priv->_bounds);
#line 10 "../src/static/static_points.vala"
		self->priv->_bounds = _tmp0_;
#line 10 "../src/static/static_points.vala"
		g_object_notify_by_pspec ((GObject *) self, live_chart_static_static_points_properties[LIVE_CHART_STATIC_STATIC_POINTS_BOUNDS_PROPERTY]);
#line 606 "static_points.c"
	}
}

gint
live_chart_static_static_points_get_size (LiveChartStaticStaticPoints* self)
{
	gint result;
	GeeArrayList* _tmp0_;
	gint _tmp1_;
	gint _tmp2_;
#line 23 "../src/static/static_points.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 24 "../src/static/static_points.vala"
	_tmp0_ = self->priv->points;
#line 24 "../src/static/static_points.vala"
	_tmp1_ = gee_abstract_collection_get_size ((GeeAbstractCollection*) _tmp0_);
#line 24 "../src/static/static_points.vala"
	_tmp2_ = _tmp1_;
#line 24 "../src/static/static_points.vala"
	result = _tmp2_;
#line 24 "../src/static/static_points.vala"
	return result;
#line 629 "static_points.c"
}

gdouble
live_chart_static_static_points_get_realtime_delta (LiveChartStaticStaticPoints* self)
{
	gdouble result;
#line 29 "../src/static/static_points.vala"
	g_return_val_if_fail (self != NULL, 0.0);
#line 29 "../src/static/static_points.vala"
	result = self->priv->_realtime_delta;
#line 29 "../src/static/static_points.vala"
	return result;
#line 642 "static_points.c"
}

void
live_chart_static_static_points_set_realtime_delta (LiveChartStaticStaticPoints* self,
                                                    gdouble value)
{
	gdouble old_value;
#line 29 "../src/static/static_points.vala"
	g_return_if_fail (self != NULL);
#line 29 "../src/static/static_points.vala"
	old_value = live_chart_static_static_points_get_realtime_delta (self);
#line 29 "../src/static/static_points.vala"
	if (old_value != value) {
#line 29 "../src/static/static_points.vala"
		self->priv->_realtime_delta = value;
#line 29 "../src/static/static_points.vala"
		g_object_notify_by_pspec ((GObject *) self, live_chart_static_static_points_properties[LIVE_CHART_STATIC_STATIC_POINTS_REALTIME_DELTA_PROPERTY]);
#line 660 "static_points.c"
	}
}

static void
live_chart_static_static_points_class_init (LiveChartStaticStaticPointsClass * klass,
                                            gpointer klass_data)
{
#line 6 "../src/static/static_points.vala"
	live_chart_static_static_points_parent_class = g_type_class_peek_parent (klass);
#line 6 "../src/static/static_points.vala"
	g_type_class_adjust_private_offset (klass, &LiveChartStaticStaticPoints_private_offset);
#line 6 "../src/static/static_points.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_live_chart_static_static_points_get_property;
#line 6 "../src/static/static_points.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_live_chart_static_static_points_set_property;
#line 6 "../src/static/static_points.vala"
	G_OBJECT_CLASS (klass)->finalize = live_chart_static_static_points_finalize;
#line 6 "../src/static/static_points.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), LIVE_CHART_STATIC_STATIC_POINTS_BOUNDS_PROPERTY, live_chart_static_static_points_properties[LIVE_CHART_STATIC_STATIC_POINTS_BOUNDS_PROPERTY] = g_param_spec_object ("bounds", "bounds", "bounds", LIVE_CHART_TYPE_BOUNDS, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
#line 6 "../src/static/static_points.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), LIVE_CHART_STATIC_STATIC_POINTS_SIZE_PROPERTY, live_chart_static_static_points_properties[LIVE_CHART_STATIC_STATIC_POINTS_SIZE_PROPERTY] = g_param_spec_int ("size", "size", "size", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
#line 6 "../src/static/static_points.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), LIVE_CHART_STATIC_STATIC_POINTS_REALTIME_DELTA_PROPERTY, live_chart_static_static_points_properties[LIVE_CHART_STATIC_STATIC_POINTS_REALTIME_DELTA_PROPERTY] = g_param_spec_double ("realtime-delta", "realtime-delta", "realtime-delta", -G_MAXDOUBLE, G_MAXDOUBLE, 0.0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 684 "static_points.c"
}

static void
live_chart_static_static_points_instance_init (LiveChartStaticStaticPoints * self,
                                               gpointer klass)
{
	GeeArrayList* _tmp0_;
#line 6 "../src/static/static_points.vala"
	self->priv = live_chart_static_static_points_get_instance_private (self);
#line 8 "../src/static/static_points.vala"
	_tmp0_ = gee_array_list_new (LIVE_CHART_TYPE_POINT, (GBoxedCopyFunc) live_chart_point_dup, (GDestroyNotify) live_chart_point_free, NULL, NULL, NULL);
#line 8 "../src/static/static_points.vala"
	self->priv->points = _tmp0_;
#line 698 "static_points.c"
}

static void
live_chart_static_static_points_finalize (GObject * obj)
{
	LiveChartStaticStaticPoints * self;
#line 6 "../src/static/static_points.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, LIVE_CHART_STATIC_TYPE_STATIC_POINTS, LiveChartStaticStaticPoints);
#line 8 "../src/static/static_points.vala"
	_g_object_unref0 (self->priv->points);
#line 9 "../src/static/static_points.vala"
	_g_object_unref0 (self->priv->_bounds);
#line 6 "../src/static/static_points.vala"
	G_OBJECT_CLASS (live_chart_static_static_points_parent_class)->finalize (obj);
#line 713 "static_points.c"
}

static GType
live_chart_static_static_points_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (LiveChartStaticStaticPointsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) live_chart_static_static_points_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LiveChartStaticStaticPoints), 0, (GInstanceInitFunc) live_chart_static_static_points_instance_init, NULL };
	GType live_chart_static_static_points_type_id;
	live_chart_static_static_points_type_id = g_type_register_static (G_TYPE_OBJECT, "LiveChartStaticStaticPoints", &g_define_type_info, 0);
	LiveChartStaticStaticPoints_private_offset = g_type_add_instance_private (live_chart_static_static_points_type_id, sizeof (LiveChartStaticStaticPointsPrivate));
	return live_chart_static_static_points_type_id;
}

GType
live_chart_static_static_points_get_type (void)
{
	static volatile gsize live_chart_static_static_points_type_id__once = 0;
	if (g_once_init_enter (&live_chart_static_static_points_type_id__once)) {
		GType live_chart_static_static_points_type_id;
		live_chart_static_static_points_type_id = live_chart_static_static_points_get_type_once ();
		g_once_init_leave (&live_chart_static_static_points_type_id__once, live_chart_static_static_points_type_id);
	}
	return live_chart_static_static_points_type_id__once;
}

static void
_vala_live_chart_static_static_points_get_property (GObject * object,
                                                    guint property_id,
                                                    GValue * value,
                                                    GParamSpec * pspec)
{
	LiveChartStaticStaticPoints * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, LIVE_CHART_STATIC_TYPE_STATIC_POINTS, LiveChartStaticStaticPoints);
#line 6 "../src/static/static_points.vala"
	switch (property_id) {
#line 6 "../src/static/static_points.vala"
		case LIVE_CHART_STATIC_STATIC_POINTS_BOUNDS_PROPERTY:
#line 6 "../src/static/static_points.vala"
		g_value_set_object (value, live_chart_static_static_points_get_bounds (self));
#line 6 "../src/static/static_points.vala"
		break;
#line 6 "../src/static/static_points.vala"
		case LIVE_CHART_STATIC_STATIC_POINTS_SIZE_PROPERTY:
#line 6 "../src/static/static_points.vala"
		g_value_set_int (value, live_chart_static_static_points_get_size (self));
#line 6 "../src/static/static_points.vala"
		break;
#line 6 "../src/static/static_points.vala"
		case LIVE_CHART_STATIC_STATIC_POINTS_REALTIME_DELTA_PROPERTY:
#line 6 "../src/static/static_points.vala"
		g_value_set_double (value, live_chart_static_static_points_get_realtime_delta (self));
#line 6 "../src/static/static_points.vala"
		break;
#line 766 "static_points.c"
		default:
#line 6 "../src/static/static_points.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 6 "../src/static/static_points.vala"
		break;
#line 772 "static_points.c"
	}
}

static void
_vala_live_chart_static_static_points_set_property (GObject * object,
                                                    guint property_id,
                                                    const GValue * value,
                                                    GParamSpec * pspec)
{
	LiveChartStaticStaticPoints * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, LIVE_CHART_STATIC_TYPE_STATIC_POINTS, LiveChartStaticStaticPoints);
#line 6 "../src/static/static_points.vala"
	switch (property_id) {
#line 6 "../src/static/static_points.vala"
		case LIVE_CHART_STATIC_STATIC_POINTS_BOUNDS_PROPERTY:
#line 6 "../src/static/static_points.vala"
		live_chart_static_static_points_set_bounds (self, g_value_get_object (value));
#line 6 "../src/static/static_points.vala"
		break;
#line 6 "../src/static/static_points.vala"
		case LIVE_CHART_STATIC_STATIC_POINTS_REALTIME_DELTA_PROPERTY:
#line 6 "../src/static/static_points.vala"
		live_chart_static_static_points_set_realtime_delta (self, g_value_get_double (value));
#line 6 "../src/static/static_points.vala"
		break;
#line 798 "static_points.c"
		default:
#line 6 "../src/static/static_points.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 6 "../src/static/static_points.vala"
		break;
#line 804 "static_points.c"
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

