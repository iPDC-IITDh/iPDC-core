/* labels.c generated by valac 0.56.0, the Vala compiler
 * generated from labels.vala, do not modify */

#include "livechart_static.h"
#include <glib.h>
#include <cairo-gobject.h>
#include <string.h>
#include <gobject/gvaluecollector.h>

#define _live_chart_font_unref0(var) ((var == NULL) ? NULL : (var = (live_chart_font_unref (var), NULL)))
typedef struct _LiveChartParamSpecLabels LiveChartParamSpecLabels;

struct _LiveChartLabelsPrivate {
	gboolean _visible;
	cairo_text_extents_t _extents;
	LiveChartFont* _font;
};

struct _LiveChartParamSpecLabels {
	GParamSpec parent_instance;
};

static gint LiveChartLabels_private_offset;
static gpointer live_chart_labels_parent_class = NULL;

static void live_chart_labels_finalize (LiveChartLabels * obj);
static GType live_chart_labels_get_type_once (void);

static inline gpointer
live_chart_labels_get_instance_private (LiveChartLabels* self)
{
	return G_STRUCT_MEMBER_P (self, LiveChartLabels_private_offset);
}

LiveChartLabels*
live_chart_labels_construct (GType object_type)
{
	LiveChartLabels* self = NULL;
	cairo_text_extents_t _tmp0_ = {0};
	LiveChartFont* _tmp1_;
	LiveChartFont* _tmp2_;
	cairo_text_extents_t _tmp3_;
	cairo_text_extents_t _tmp4_;
	cairo_text_extents_t _tmp5_;
	cairo_text_extents_t _tmp6_;
	cairo_text_extents_t _tmp7_;
	cairo_text_extents_t _tmp8_;
#line 11 "../src/labels.vala"
	self = (LiveChartLabels*) g_type_create_instance (object_type);
#line 13 "../src/labels.vala"
	live_chart_labels_set_visible (self, TRUE);
#line 14 "../src/labels.vala"
	memset (&_tmp0_, 0, sizeof (cairo_text_extents_t));
#line 14 "../src/labels.vala"
	live_chart_labels_set_extents (self, &_tmp0_);
#line 15 "../src/labels.vala"
	_tmp1_ = live_chart_font_new ();
#line 15 "../src/labels.vala"
	_tmp2_ = _tmp1_;
#line 15 "../src/labels.vala"
	live_chart_labels_set_font (self, _tmp2_);
#line 15 "../src/labels.vala"
	_live_chart_font_unref0 (_tmp2_);
#line 17 "../src/labels.vala"
	_tmp3_ = self->priv->_extents;
#line 17 "../src/labels.vala"
	_tmp3_.height = 0.0;
#line 18 "../src/labels.vala"
	_tmp4_ = self->priv->_extents;
#line 18 "../src/labels.vala"
	_tmp4_.width = 0.0;
#line 19 "../src/labels.vala"
	_tmp5_ = self->priv->_extents;
#line 19 "../src/labels.vala"
	_tmp5_.x_advance = 0.0;
#line 20 "../src/labels.vala"
	_tmp6_ = self->priv->_extents;
#line 20 "../src/labels.vala"
	_tmp6_.x_bearing = 0.0;
#line 21 "../src/labels.vala"
	_tmp7_ = self->priv->_extents;
#line 21 "../src/labels.vala"
	_tmp7_.y_advance = 0.0;
#line 22 "../src/labels.vala"
	_tmp8_ = self->priv->_extents;
#line 22 "../src/labels.vala"
	_tmp8_.y_bearing = 0.0;
#line 11 "../src/labels.vala"
	return self;
#line 91 "labels.c"
}

LiveChartLabels*
live_chart_labels_new (void)
{
#line 11 "../src/labels.vala"
	return live_chart_labels_construct (LIVE_CHART_TYPE_LABELS);
#line 99 "labels.c"
}

gboolean
live_chart_labels_get_visible (LiveChartLabels* self)
{
	gboolean result;
#line 7 "../src/labels.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 7 "../src/labels.vala"
	result = self->priv->_visible;
#line 7 "../src/labels.vala"
	return result;
#line 112 "labels.c"
}

void
live_chart_labels_set_visible (LiveChartLabels* self,
                               gboolean value)
{
#line 7 "../src/labels.vala"
	g_return_if_fail (self != NULL);
#line 7 "../src/labels.vala"
	self->priv->_visible = value;
#line 123 "labels.c"
}

void
live_chart_labels_get_extents (LiveChartLabels* self,
                               cairo_text_extents_t * result)
{
	cairo_text_extents_t _tmp0_;
#line 8 "../src/labels.vala"
	g_return_if_fail (self != NULL);
#line 8 "../src/labels.vala"
	_tmp0_ = self->priv->_extents;
#line 8 "../src/labels.vala"
	*result = _tmp0_;
#line 8 "../src/labels.vala"
	return;
#line 139 "labels.c"
}

void
live_chart_labels_set_extents (LiveChartLabels* self,
                               cairo_text_extents_t * value)
{
	cairo_text_extents_t _tmp0_;
#line 8 "../src/labels.vala"
	g_return_if_fail (self != NULL);
#line 8 "../src/labels.vala"
	_tmp0_ = *value;
#line 8 "../src/labels.vala"
	self->priv->_extents = _tmp0_;
#line 153 "labels.c"
}

LiveChartFont*
live_chart_labels_get_font (LiveChartLabels* self)
{
	LiveChartFont* result;
	LiveChartFont* _tmp0_;
#line 9 "../src/labels.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 9 "../src/labels.vala"
	_tmp0_ = self->priv->_font;
#line 9 "../src/labels.vala"
	result = _tmp0_;
#line 9 "../src/labels.vala"
	return result;
#line 169 "labels.c"
}

static gpointer
_live_chart_font_ref0 (gpointer self)
{
#line 9 "../src/labels.vala"
	return self ? live_chart_font_ref (self) : NULL;
#line 177 "labels.c"
}

void
live_chart_labels_set_font (LiveChartLabels* self,
                            LiveChartFont* value)
{
	LiveChartFont* _tmp0_;
#line 9 "../src/labels.vala"
	g_return_if_fail (self != NULL);
#line 9 "../src/labels.vala"
	_tmp0_ = _live_chart_font_ref0 (value);
#line 9 "../src/labels.vala"
	_live_chart_font_unref0 (self->priv->_font);
#line 9 "../src/labels.vala"
	self->priv->_font = _tmp0_;
#line 193 "labels.c"
}

static void
live_chart_value_labels_init (GValue* value)
{
#line 5 "../src/labels.vala"
	value->data[0].v_pointer = NULL;
#line 201 "labels.c"
}

static void
live_chart_value_labels_free_value (GValue* value)
{
#line 5 "../src/labels.vala"
	if (value->data[0].v_pointer) {
#line 5 "../src/labels.vala"
		live_chart_labels_unref (value->data[0].v_pointer);
#line 211 "labels.c"
	}
}

static void
live_chart_value_labels_copy_value (const GValue* src_value,
                                    GValue* dest_value)
{
#line 5 "../src/labels.vala"
	if (src_value->data[0].v_pointer) {
#line 5 "../src/labels.vala"
		dest_value->data[0].v_pointer = live_chart_labels_ref (src_value->data[0].v_pointer);
#line 223 "labels.c"
	} else {
#line 5 "../src/labels.vala"
		dest_value->data[0].v_pointer = NULL;
#line 227 "labels.c"
	}
}

static gpointer
live_chart_value_labels_peek_pointer (const GValue* value)
{
#line 5 "../src/labels.vala"
	return value->data[0].v_pointer;
#line 236 "labels.c"
}

static gchar*
live_chart_value_labels_collect_value (GValue* value,
                                       guint n_collect_values,
                                       GTypeCValue* collect_values,
                                       guint collect_flags)
{
#line 5 "../src/labels.vala"
	if (collect_values[0].v_pointer) {
#line 247 "labels.c"
		LiveChartLabels * object;
		object = collect_values[0].v_pointer;
#line 5 "../src/labels.vala"
		if (object->parent_instance.g_class == NULL) {
#line 5 "../src/labels.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 254 "labels.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 5 "../src/labels.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 258 "labels.c"
		}
#line 5 "../src/labels.vala"
		value->data[0].v_pointer = live_chart_labels_ref (object);
#line 262 "labels.c"
	} else {
#line 5 "../src/labels.vala"
		value->data[0].v_pointer = NULL;
#line 266 "labels.c"
	}
#line 5 "../src/labels.vala"
	return NULL;
#line 270 "labels.c"
}

static gchar*
live_chart_value_labels_lcopy_value (const GValue* value,
                                     guint n_collect_values,
                                     GTypeCValue* collect_values,
                                     guint collect_flags)
{
	LiveChartLabels ** object_p;
	object_p = collect_values[0].v_pointer;
#line 5 "../src/labels.vala"
	if (!object_p) {
#line 5 "../src/labels.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 285 "labels.c"
	}
#line 5 "../src/labels.vala"
	if (!value->data[0].v_pointer) {
#line 5 "../src/labels.vala"
		*object_p = NULL;
#line 291 "labels.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 5 "../src/labels.vala"
		*object_p = value->data[0].v_pointer;
#line 295 "labels.c"
	} else {
#line 5 "../src/labels.vala"
		*object_p = live_chart_labels_ref (value->data[0].v_pointer);
#line 299 "labels.c"
	}
#line 5 "../src/labels.vala"
	return NULL;
#line 303 "labels.c"
}

GParamSpec*
live_chart_param_spec_labels (const gchar* name,
                              const gchar* nick,
                              const gchar* blurb,
                              GType object_type,
                              GParamFlags flags)
{
	LiveChartParamSpecLabels* spec;
#line 5 "../src/labels.vala"
	g_return_val_if_fail (g_type_is_a (object_type, LIVE_CHART_TYPE_LABELS), NULL);
#line 5 "../src/labels.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 5 "../src/labels.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 5 "../src/labels.vala"
	return G_PARAM_SPEC (spec);
#line 322 "labels.c"
}

gpointer
live_chart_value_get_labels (const GValue* value)
{
#line 5 "../src/labels.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, LIVE_CHART_TYPE_LABELS), NULL);
#line 5 "../src/labels.vala"
	return value->data[0].v_pointer;
#line 332 "labels.c"
}

void
live_chart_value_set_labels (GValue* value,
                             gpointer v_object)
{
	LiveChartLabels * old;
#line 5 "../src/labels.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, LIVE_CHART_TYPE_LABELS));
#line 5 "../src/labels.vala"
	old = value->data[0].v_pointer;
#line 5 "../src/labels.vala"
	if (v_object) {
#line 5 "../src/labels.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, LIVE_CHART_TYPE_LABELS));
#line 5 "../src/labels.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 5 "../src/labels.vala"
		value->data[0].v_pointer = v_object;
#line 5 "../src/labels.vala"
		live_chart_labels_ref (value->data[0].v_pointer);
#line 354 "labels.c"
	} else {
#line 5 "../src/labels.vala"
		value->data[0].v_pointer = NULL;
#line 358 "labels.c"
	}
#line 5 "../src/labels.vala"
	if (old) {
#line 5 "../src/labels.vala"
		live_chart_labels_unref (old);
#line 364 "labels.c"
	}
}

void
live_chart_value_take_labels (GValue* value,
                              gpointer v_object)
{
	LiveChartLabels * old;
#line 5 "../src/labels.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, LIVE_CHART_TYPE_LABELS));
#line 5 "../src/labels.vala"
	old = value->data[0].v_pointer;
#line 5 "../src/labels.vala"
	if (v_object) {
#line 5 "../src/labels.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, LIVE_CHART_TYPE_LABELS));
#line 5 "../src/labels.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 5 "../src/labels.vala"
		value->data[0].v_pointer = v_object;
#line 385 "labels.c"
	} else {
#line 5 "../src/labels.vala"
		value->data[0].v_pointer = NULL;
#line 389 "labels.c"
	}
#line 5 "../src/labels.vala"
	if (old) {
#line 5 "../src/labels.vala"
		live_chart_labels_unref (old);
#line 395 "labels.c"
	}
}

static void
live_chart_labels_class_init (LiveChartLabelsClass * klass,
                              gpointer klass_data)
{
#line 5 "../src/labels.vala"
	live_chart_labels_parent_class = g_type_class_peek_parent (klass);
#line 5 "../src/labels.vala"
	((LiveChartLabelsClass *) klass)->finalize = live_chart_labels_finalize;
#line 5 "../src/labels.vala"
	g_type_class_adjust_private_offset (klass, &LiveChartLabels_private_offset);
#line 409 "labels.c"
}

static void
live_chart_labels_instance_init (LiveChartLabels * self,
                                 gpointer klass)
{
#line 5 "../src/labels.vala"
	self->priv = live_chart_labels_get_instance_private (self);
#line 5 "../src/labels.vala"
	self->ref_count = 1;
#line 420 "labels.c"
}

static void
live_chart_labels_finalize (LiveChartLabels * obj)
{
	LiveChartLabels * self;
#line 5 "../src/labels.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, LIVE_CHART_TYPE_LABELS, LiveChartLabels);
#line 5 "../src/labels.vala"
	g_signal_handlers_destroy (self);
#line 9 "../src/labels.vala"
	_live_chart_font_unref0 (self->priv->_font);
#line 433 "labels.c"
}

static GType
live_chart_labels_get_type_once (void)
{
	static const GTypeValueTable g_define_type_value_table = { live_chart_value_labels_init, live_chart_value_labels_free_value, live_chart_value_labels_copy_value, live_chart_value_labels_peek_pointer, "p", live_chart_value_labels_collect_value, "p", live_chart_value_labels_lcopy_value };
	static const GTypeInfo g_define_type_info = { sizeof (LiveChartLabelsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) live_chart_labels_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LiveChartLabels), 0, (GInstanceInitFunc) live_chart_labels_instance_init, &g_define_type_value_table };
	static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
	GType live_chart_labels_type_id;
	live_chart_labels_type_id = g_type_register_fundamental (g_type_fundamental_next (), "LiveChartLabels", &g_define_type_info, &g_define_type_fundamental_info, 0);
	LiveChartLabels_private_offset = g_type_add_instance_private (live_chart_labels_type_id, sizeof (LiveChartLabelsPrivate));
	return live_chart_labels_type_id;
}

GType
live_chart_labels_get_type (void)
{
	static volatile gsize live_chart_labels_type_id__once = 0;
	if (g_once_init_enter (&live_chart_labels_type_id__once)) {
		GType live_chart_labels_type_id;
		live_chart_labels_type_id = live_chart_labels_get_type_once ();
		g_once_init_leave (&live_chart_labels_type_id__once, live_chart_labels_type_id);
	}
	return live_chart_labels_type_id__once;
}

gpointer
live_chart_labels_ref (gpointer instance)
{
	LiveChartLabels * self;
	self = instance;
#line 5 "../src/labels.vala"
	g_atomic_int_inc (&self->ref_count);
#line 5 "../src/labels.vala"
	return instance;
#line 469 "labels.c"
}

void
live_chart_labels_unref (gpointer instance)
{
	LiveChartLabels * self;
	self = instance;
#line 5 "../src/labels.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 5 "../src/labels.vala"
		LIVE_CHART_LABELS_GET_CLASS (self)->finalize (self);
#line 5 "../src/labels.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 483 "labels.c"
	}
}

