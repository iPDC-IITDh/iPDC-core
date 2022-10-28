/* static_values.c generated by valac 0.56.0, the Vala compiler
 * generated from static_values.vala, do not modify */

#include "livechart.h"
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <gee.h>
#include <float.h>
#include <math.h>
#include <glib-object.h>

#define _g_free0(var) (var = (g_free (var), NULL))
enum  {
	LIVE_CHART_STATIC_STATIC_VALUES_0_PROPERTY,
	LIVE_CHART_STATIC_STATIC_VALUES_BOUNDS_PROPERTY,
	LIVE_CHART_STATIC_STATIC_VALUES_NUM_PROPERTIES
};
static GParamSpec* live_chart_static_static_values_properties[LIVE_CHART_STATIC_STATIC_VALUES_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _LiveChartStaticStaticValuesPrivate {
	LiveChartBounds* _bounds;
};

static gint LiveChartStaticStaticValues_private_offset;
static gpointer live_chart_static_static_values_parent_class = NULL;

static void live_chart_static_static_values_finalize (GObject * obj);
static GType live_chart_static_static_values_get_type_once (void);
static void _vala_live_chart_static_static_values_get_property (GObject * object,
                                                         guint property_id,
                                                         GValue * value,
                                                         GParamSpec * pspec);
static void _vala_live_chart_static_static_values_set_property (GObject * object,
                                                         guint property_id,
                                                         const GValue * value,
                                                         GParamSpec * pspec);
static inline gpointer _vala_memdup2 (gconstpointer mem,
                        gsize byte_size);

void
live_chart_static_named_value_copy (const LiveChartStaticNamedValue* self,
                                    LiveChartStaticNamedValue* dest)
{
	const gchar* _tmp0_;
	gchar* _tmp1_;
#line 6 "../src/static/static_values.vala"
	_tmp0_ = (*self).name;
#line 6 "../src/static/static_values.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 6 "../src/static/static_values.vala"
	_g_free0 ((*dest).name);
#line 6 "../src/static/static_values.vala"
	(*dest).name = _tmp1_;
#line 6 "../src/static/static_values.vala"
	(*dest).value = (*self).value;
#line 59 "static_values.c"
}

void
live_chart_static_named_value_destroy (LiveChartStaticNamedValue* self)
{
#line 7 "../src/static/static_values.vala"
	_g_free0 ((*self).name);
#line 67 "static_values.c"
}

LiveChartStaticNamedValue*
live_chart_static_named_value_dup (const LiveChartStaticNamedValue* self)
{
	LiveChartStaticNamedValue* dup;
#line 6 "../src/static/static_values.vala"
	dup = g_new0 (LiveChartStaticNamedValue, 1);
#line 6 "../src/static/static_values.vala"
	live_chart_static_named_value_copy (self, dup);
#line 6 "../src/static/static_values.vala"
	return dup;
#line 80 "static_values.c"
}

void
live_chart_static_named_value_free (LiveChartStaticNamedValue* self)
{
#line 6 "../src/static/static_values.vala"
	live_chart_static_named_value_destroy (self);
#line 6 "../src/static/static_values.vala"
	g_free (self);
#line 90 "static_values.c"
}

static GType
live_chart_static_named_value_get_type_once (void)
{
	GType live_chart_static_named_value_type_id;
	live_chart_static_named_value_type_id = g_boxed_type_register_static ("LiveChartStaticNamedValue", (GBoxedCopyFunc) live_chart_static_named_value_dup, (GBoxedFreeFunc) live_chart_static_named_value_free);
	return live_chart_static_named_value_type_id;
}

GType
live_chart_static_named_value_get_type (void)
{
	static volatile gsize live_chart_static_named_value_type_id__once = 0;
	if (g_once_init_enter (&live_chart_static_named_value_type_id__once)) {
		GType live_chart_static_named_value_type_id;
		live_chart_static_named_value_type_id = live_chart_static_named_value_get_type_once ();
		g_once_init_leave (&live_chart_static_named_value_type_id__once, live_chart_static_named_value_type_id);
	}
	return live_chart_static_named_value_type_id__once;
}

static inline gpointer
live_chart_static_static_values_get_instance_private (LiveChartStaticStaticValues* self)
{
	return G_STRUCT_MEMBER_P (self, LiveChartStaticStaticValues_private_offset);
}

LiveChartStaticStaticValues*
live_chart_static_static_values_construct (GType object_type)
{
	LiveChartStaticStaticValues * self = NULL;
	LiveChartBounds* _tmp0_;
	LiveChartBounds* _tmp1_;
#line 17 "../src/static/static_values.vala"
	self = (LiveChartStaticStaticValues*) gee_linked_list_construct (object_type, LIVE_CHART_STATIC_TYPE_NAMED_VALUE, (GBoxedCopyFunc) live_chart_static_named_value_dup, (GDestroyNotify) live_chart_static_named_value_free, NULL, NULL, NULL);
#line 18 "../src/static/static_values.vala"
	_tmp0_ = live_chart_bounds_new (((double) NAN), ((double) NAN));
#line 18 "../src/static/static_values.vala"
	_tmp1_ = _tmp0_;
#line 18 "../src/static/static_values.vala"
	live_chart_static_static_values_set_bounds (self, _tmp1_);
#line 18 "../src/static/static_values.vala"
	_g_object_unref0 (_tmp1_);
#line 17 "../src/static/static_values.vala"
	return self;
#line 137 "static_values.c"
}

LiveChartStaticStaticValues*
live_chart_static_static_values_new (void)
{
#line 17 "../src/static/static_values.vala"
	return live_chart_static_static_values_construct (LIVE_CHART_STATIC_TYPE_STATIC_VALUES);
#line 145 "static_values.c"
}

void
live_chart_static_static_values_add (LiveChartStaticStaticValues* self,
                                     LiveChartStaticNamedValue* value)
{
	LiveChartBounds* _tmp0_;
	LiveChartStaticNamedValue _tmp1_;
	LiveChartStaticNamedValue _tmp2_;
#line 21 "../src/static/static_values.vala"
	g_return_if_fail (self != NULL);
#line 21 "../src/static/static_values.vala"
	g_return_if_fail (value != NULL);
#line 22 "../src/static/static_values.vala"
	_tmp0_ = self->priv->_bounds;
#line 22 "../src/static/static_values.vala"
	_tmp1_ = *value;
#line 22 "../src/static/static_values.vala"
	live_chart_bounds_update (_tmp0_, _tmp1_.value);
#line 23 "../src/static/static_values.vala"
	_tmp2_ = *value;
#line 23 "../src/static/static_values.vala"
	GEE_ABSTRACT_COLLECTION_CLASS (live_chart_static_static_values_parent_class)->add ((GeeAbstractCollection*) G_TYPE_CHECK_INSTANCE_CAST (self, GEE_TYPE_LINKED_LIST, GeeLinkedList), &_tmp2_);
#line 169 "static_values.c"
}

LiveChartBounds*
live_chart_static_static_values_get_bounds (LiveChartStaticStaticValues* self)
{
	LiveChartBounds* result;
	LiveChartBounds* _tmp0_;
#line 14 "../src/static/static_values.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 14 "../src/static/static_values.vala"
	_tmp0_ = self->priv->_bounds;
#line 14 "../src/static/static_values.vala"
	result = _tmp0_;
#line 14 "../src/static/static_values.vala"
	return result;
#line 185 "static_values.c"
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 14 "../src/static/static_values.vala"
	return self ? g_object_ref (self) : NULL;
#line 193 "static_values.c"
}

void
live_chart_static_static_values_set_bounds (LiveChartStaticStaticValues* self,
                                            LiveChartBounds* value)
{
	LiveChartBounds* old_value;
#line 14 "../src/static/static_values.vala"
	g_return_if_fail (self != NULL);
#line 14 "../src/static/static_values.vala"
	old_value = live_chart_static_static_values_get_bounds (self);
#line 14 "../src/static/static_values.vala"
	if (old_value != value) {
#line 207 "static_values.c"
		LiveChartBounds* _tmp0_;
#line 14 "../src/static/static_values.vala"
		_tmp0_ = _g_object_ref0 (value);
#line 14 "../src/static/static_values.vala"
		_g_object_unref0 (self->priv->_bounds);
#line 14 "../src/static/static_values.vala"
		self->priv->_bounds = _tmp0_;
#line 14 "../src/static/static_values.vala"
		g_object_notify_by_pspec ((GObject *) self, live_chart_static_static_values_properties[LIVE_CHART_STATIC_STATIC_VALUES_BOUNDS_PROPERTY]);
#line 217 "static_values.c"
	}
}

static void
live_chart_static_static_values_class_init (LiveChartStaticStaticValuesClass * klass,
                                            gpointer klass_data)
{
#line 11 "../src/static/static_values.vala"
	live_chart_static_static_values_parent_class = g_type_class_peek_parent (klass);
#line 11 "../src/static/static_values.vala"
	g_type_class_adjust_private_offset (klass, &LiveChartStaticStaticValues_private_offset);
#line 11 "../src/static/static_values.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_live_chart_static_static_values_get_property;
#line 11 "../src/static/static_values.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_live_chart_static_static_values_set_property;
#line 11 "../src/static/static_values.vala"
	G_OBJECT_CLASS (klass)->finalize = live_chart_static_static_values_finalize;
#line 11 "../src/static/static_values.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), LIVE_CHART_STATIC_STATIC_VALUES_BOUNDS_PROPERTY, live_chart_static_static_values_properties[LIVE_CHART_STATIC_STATIC_VALUES_BOUNDS_PROPERTY] = g_param_spec_object ("bounds", "bounds", "bounds", LIVE_CHART_TYPE_BOUNDS, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
#line 237 "static_values.c"
}

static void
live_chart_static_static_values_instance_init (LiveChartStaticStaticValues * self,
                                               gpointer klass)
{
#line 11 "../src/static/static_values.vala"
	self->priv = live_chart_static_static_values_get_instance_private (self);
#line 246 "static_values.c"
}

static void
live_chart_static_static_values_finalize (GObject * obj)
{
	LiveChartStaticStaticValues * self;
#line 11 "../src/static/static_values.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, LIVE_CHART_STATIC_TYPE_STATIC_VALUES, LiveChartStaticStaticValues);
#line 13 "../src/static/static_values.vala"
	_g_object_unref0 (self->priv->_bounds);
#line 11 "../src/static/static_values.vala"
	G_OBJECT_CLASS (live_chart_static_static_values_parent_class)->finalize (obj);
#line 259 "static_values.c"
}

static GType
live_chart_static_static_values_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (LiveChartStaticStaticValuesClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) live_chart_static_static_values_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LiveChartStaticStaticValues), 0, (GInstanceInitFunc) live_chart_static_static_values_instance_init, NULL };
	GType live_chart_static_static_values_type_id;
	live_chart_static_static_values_type_id = g_type_register_static (GEE_TYPE_LINKED_LIST, "LiveChartStaticStaticValues", &g_define_type_info, 0);
	LiveChartStaticStaticValues_private_offset = g_type_add_instance_private (live_chart_static_static_values_type_id, sizeof (LiveChartStaticStaticValuesPrivate));
	return live_chart_static_static_values_type_id;
}

GType
live_chart_static_static_values_get_type (void)
{
	static volatile gsize live_chart_static_static_values_type_id__once = 0;
	if (g_once_init_enter (&live_chart_static_static_values_type_id__once)) {
		GType live_chart_static_static_values_type_id;
		live_chart_static_static_values_type_id = live_chart_static_static_values_get_type_once ();
		g_once_init_leave (&live_chart_static_static_values_type_id__once, live_chart_static_static_values_type_id);
	}
	return live_chart_static_static_values_type_id__once;
}

static void
_vala_live_chart_static_static_values_get_property (GObject * object,
                                                    guint property_id,
                                                    GValue * value,
                                                    GParamSpec * pspec)
{
	LiveChartStaticStaticValues * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, LIVE_CHART_STATIC_TYPE_STATIC_VALUES, LiveChartStaticStaticValues);
#line 11 "../src/static/static_values.vala"
	switch (property_id) {
#line 11 "../src/static/static_values.vala"
		case LIVE_CHART_STATIC_STATIC_VALUES_BOUNDS_PROPERTY:
#line 11 "../src/static/static_values.vala"
		g_value_set_object (value, live_chart_static_static_values_get_bounds (self));
#line 11 "../src/static/static_values.vala"
		break;
#line 300 "static_values.c"
		default:
#line 11 "../src/static/static_values.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 11 "../src/static/static_values.vala"
		break;
#line 306 "static_values.c"
	}
}

static void
_vala_live_chart_static_static_values_set_property (GObject * object,
                                                    guint property_id,
                                                    const GValue * value,
                                                    GParamSpec * pspec)
{
	LiveChartStaticStaticValues * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, LIVE_CHART_STATIC_TYPE_STATIC_VALUES, LiveChartStaticStaticValues);
#line 11 "../src/static/static_values.vala"
	switch (property_id) {
#line 11 "../src/static/static_values.vala"
		case LIVE_CHART_STATIC_STATIC_VALUES_BOUNDS_PROPERTY:
#line 11 "../src/static/static_values.vala"
		live_chart_static_static_values_set_bounds (self, g_value_get_object (value));
#line 11 "../src/static/static_values.vala"
		break;
#line 326 "static_values.c"
		default:
#line 11 "../src/static/static_values.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 11 "../src/static/static_values.vala"
		break;
#line 332 "static_values.c"
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

