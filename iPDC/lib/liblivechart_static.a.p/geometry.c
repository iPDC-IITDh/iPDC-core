/* geometry.c generated by valac 0.56.0, the Vala compiler
 * generated from geometry.vala, do not modify */

#include "livechart_static.h"
#include <glib.h>
#include <string.h>
#include <float.h>
#include <math.h>

LiveChartCoord*
live_chart_coord_dup (const LiveChartCoord* self)
{
	LiveChartCoord* dup;
#line 2 "../src/geometry.vala"
	dup = g_new0 (LiveChartCoord, 1);
#line 2 "../src/geometry.vala"
	memcpy (dup, self, sizeof (LiveChartCoord));
#line 2 "../src/geometry.vala"
	return dup;
#line 21 "geometry.c"
}

void
live_chart_coord_free (LiveChartCoord* self)
{
#line 2 "../src/geometry.vala"
	g_free (self);
#line 29 "geometry.c"
}

static GType
live_chart_coord_get_type_once (void)
{
	GType live_chart_coord_type_id;
	live_chart_coord_type_id = g_boxed_type_register_static ("LiveChartCoord", (GBoxedCopyFunc) live_chart_coord_dup, (GBoxedFreeFunc) live_chart_coord_free);
	return live_chart_coord_type_id;
}

GType
live_chart_coord_get_type (void)
{
	static volatile gsize live_chart_coord_type_id__once = 0;
	if (g_once_init_enter (&live_chart_coord_type_id__once)) {
		GType live_chart_coord_type_id;
		live_chart_coord_type_id = live_chart_coord_get_type_once ();
		g_once_init_leave (&live_chart_coord_type_id__once, live_chart_coord_type_id);
	}
	return live_chart_coord_type_id__once;
}

LiveChartSegment*
live_chart_segment_dup (const LiveChartSegment* self)
{
	LiveChartSegment* dup;
#line 7 "../src/geometry.vala"
	dup = g_new0 (LiveChartSegment, 1);
#line 7 "../src/geometry.vala"
	memcpy (dup, self, sizeof (LiveChartSegment));
#line 7 "../src/geometry.vala"
	return dup;
#line 62 "geometry.c"
}

void
live_chart_segment_free (LiveChartSegment* self)
{
#line 7 "../src/geometry.vala"
	g_free (self);
#line 70 "geometry.c"
}

static GType
live_chart_segment_get_type_once (void)
{
	GType live_chart_segment_type_id;
	live_chart_segment_type_id = g_boxed_type_register_static ("LiveChartSegment", (GBoxedCopyFunc) live_chart_segment_dup, (GBoxedFreeFunc) live_chart_segment_free);
	return live_chart_segment_type_id;
}

GType
live_chart_segment_get_type (void)
{
	static volatile gsize live_chart_segment_type_id__once = 0;
	if (g_once_init_enter (&live_chart_segment_type_id__once)) {
		GType live_chart_segment_type_id;
		live_chart_segment_type_id = live_chart_segment_get_type_once ();
		g_once_init_leave (&live_chart_segment_type_id__once, live_chart_segment_type_id);
	}
	return live_chart_segment_type_id__once;
}

LiveChartBezierCurve*
live_chart_bezier_curve_dup (const LiveChartBezierCurve* self)
{
	LiveChartBezierCurve* dup;
#line 11 "../src/geometry.vala"
	dup = g_new0 (LiveChartBezierCurve, 1);
#line 11 "../src/geometry.vala"
	memcpy (dup, self, sizeof (LiveChartBezierCurve));
#line 11 "../src/geometry.vala"
	return dup;
#line 103 "geometry.c"
}

void
live_chart_bezier_curve_free (LiveChartBezierCurve* self)
{
#line 11 "../src/geometry.vala"
	g_free (self);
#line 111 "geometry.c"
}

static GType
live_chart_bezier_curve_get_type_once (void)
{
	GType live_chart_bezier_curve_type_id;
	live_chart_bezier_curve_type_id = g_boxed_type_register_static ("LiveChartBezierCurve", (GBoxedCopyFunc) live_chart_bezier_curve_dup, (GBoxedFreeFunc) live_chart_bezier_curve_free);
	return live_chart_bezier_curve_type_id;
}

GType
live_chart_bezier_curve_get_type (void)
{
	static volatile gsize live_chart_bezier_curve_type_id__once = 0;
	if (g_once_init_enter (&live_chart_bezier_curve_type_id__once)) {
		GType live_chart_bezier_curve_type_id;
		live_chart_bezier_curve_type_id = live_chart_bezier_curve_get_type_once ();
		g_once_init_leave (&live_chart_bezier_curve_type_id__once, live_chart_bezier_curve_type_id);
	}
	return live_chart_bezier_curve_type_id__once;
}

void
live_chart_build_bezier_curve_from_points (LiveChartPoint* previous,
                                           LiveChartPoint* target,
                                           LiveChartBezierCurve* result)
{
	gdouble pressure = 0.0;
	LiveChartPoint _tmp0_;
	LiveChartPoint _tmp1_;
	LiveChartBezierCurve bezier = {0};
	LiveChartPoint _tmp2_;
	LiveChartPoint _tmp3_;
	LiveChartCoord _tmp4_ = {0};
	LiveChartPoint _tmp5_;
	LiveChartPoint _tmp6_;
	LiveChartCoord _tmp7_ = {0};
	LiveChartPoint _tmp8_;
	LiveChartPoint _tmp9_;
	LiveChartCoord _tmp10_ = {0};
	LiveChartPoint _tmp11_;
	LiveChartPoint _tmp12_;
	LiveChartCoord _tmp13_ = {0};
	LiveChartBezierCurve _tmp14_ = {0};
#line 18 "../src/geometry.vala"
	g_return_if_fail (previous != NULL);
#line 18 "../src/geometry.vala"
	g_return_if_fail (target != NULL);
#line 19 "../src/geometry.vala"
	_tmp0_ = *target;
#line 19 "../src/geometry.vala"
	_tmp1_ = *previous;
#line 19 "../src/geometry.vala"
	pressure = (_tmp0_.x - _tmp1_.x) / 2.0;
#line 20 "../src/geometry.vala"
	_tmp2_ = *previous;
#line 20 "../src/geometry.vala"
	_tmp3_ = *previous;
#line 20 "../src/geometry.vala"
	_tmp4_.x = _tmp2_.x;
#line 20 "../src/geometry.vala"
	_tmp4_.y = _tmp3_.y;
#line 20 "../src/geometry.vala"
	_tmp5_ = *previous;
#line 20 "../src/geometry.vala"
	_tmp6_ = *previous;
#line 20 "../src/geometry.vala"
	_tmp7_.x = _tmp5_.x + pressure;
#line 20 "../src/geometry.vala"
	_tmp7_.y = _tmp6_.y;
#line 20 "../src/geometry.vala"
	_tmp8_ = *target;
#line 20 "../src/geometry.vala"
	_tmp9_ = *target;
#line 20 "../src/geometry.vala"
	_tmp10_.x = _tmp8_.x - pressure;
#line 20 "../src/geometry.vala"
	_tmp10_.y = _tmp9_.y;
#line 20 "../src/geometry.vala"
	_tmp11_ = *target;
#line 20 "../src/geometry.vala"
	_tmp12_ = *target;
#line 20 "../src/geometry.vala"
	_tmp13_.x = _tmp11_.x;
#line 20 "../src/geometry.vala"
	_tmp13_.y = _tmp12_.y;
#line 20 "../src/geometry.vala"
	_tmp14_.c0 = _tmp4_;
#line 20 "../src/geometry.vala"
	_tmp14_.c1 = _tmp7_;
#line 20 "../src/geometry.vala"
	_tmp14_.c2 = _tmp10_;
#line 20 "../src/geometry.vala"
	_tmp14_.c3 = _tmp13_;
#line 20 "../src/geometry.vala"
	bezier = _tmp14_;
#line 39 "../src/geometry.vala"
	*result = bezier;
#line 39 "../src/geometry.vala"
	return;
#line 212 "geometry.c"
}
