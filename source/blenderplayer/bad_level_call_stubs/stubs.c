/*
 * ***** BEGIN GPL LICENSE BLOCK *****
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
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 *
 * The Original Code is: all of this file.
 *
 * Contributor(s): none yet.
 *
 * ***** END GPL LICENSE BLOCK *****
 * BKE_bad_level_calls function stubs
 */

/** \file blenderplayer/bad_level_call_stubs/stubs.c
 *  \ingroup blc
 */

#ifdef WITH_GAMEENGINE

#define ASSERT_STUBS 0
#if ASSERT_STUBS
#  include <assert.h>
#  define STUB_ASSERT(x) (assert(x))
#else
#  define STUB_ASSERT(x)
#endif


struct ARegion;
struct ARegionType;
struct bFaceMap;
struct BMEditMesh;
struct Base;
struct bContext;
struct BoundBox;
struct Brush;
struct CSG_FaceIteratorDescriptor;
struct CSG_VertexIteratorDescriptor;
struct ChannelDriver;
struct ColorBand;
struct Context;
struct Curve;
struct CurveMapping;
struct DerivedMesh;
struct EditBone;
struct EnvMap;
struct FCurve;
struct Heap;
struct HeapNode;
struct ID;
struct ImBuf;
struct Image;
struct ImageUser;
struct KeyingSet;
struct KeyingSetInfo;
struct MCol;
struct MTex;
struct Main;
struct Mask;
struct Material;
struct MenuType;
struct Mesh;
struct MetaBall;
struct Lattice;
struct ModifierData;
struct MovieClip;
struct MultiresModifierData;
struct HookModifierData;
struct NodeBlurData;
struct Nurb;
struct Object;
struct PBVHNode;
struct PyObject;
struct Render;
struct RenderEngine;
struct RenderEngineType;
struct RenderLayer;
struct RenderResult;
struct Scene;
struct Scene;
struct ScrArea;
struct SculptSession;
struct ShadeInput;
struct ShadeResult;
struct SpaceButs;
struct SpaceClip;
struct SpaceImage;
struct SpaceNode;
struct Tex;
struct TexResult;
struct Text;
struct ToolSettings;
struct View2D;
struct View3D;
struct bAction;
struct bArmature;
struct bConstraint;
struct bConstraintOb;
struct bConstraintTarget;
struct bContextDataResult;
struct bGPDlayer;
struct bFaceMap;
struct bNode;
struct bNodeType;
struct bNodeSocket;
struct bNodeSocketType;
struct bNodeTree;
struct bNodeTreeType;
struct bPoseChannel;
struct bPythonConstraint;
struct bTheme;
struct uiLayout;
struct wmEvent;
struct wmKeyConfig;
struct wmKeyMap;
struct wmOperator;
struct wmOperatorType;
struct wmWindow;
struct wmWindowManager;
struct wmManipulatorGroupType;
struct wmManipulatorMap;


/* -------------------------------------------------------------------- */
/* Declarations */

/* may cause troubles... enable for now so args match for certain */
#if 1
#if defined(__GNUC__)
#  pragma GCC diagnostic error "-Wmissing-prototypes"
#  pragma GCC diagnostic ignored "-Wunused-parameter"
#endif

#include <stdio.h>  /* FILE */

#include "../../intern/cycles/blender/CCL_api.h"
#include "../../intern/clog/CLG_log.h"
#include "../../intern/dualcon/dualcon.h"
#include "../../intern/elbeem/extern/elbeem.h"
#include "../../intern/numaapi/include/numaapi.h"
#include "../blender/blenkernel/BKE_modifier.h"
#include "../blender/blenkernel/BKE_paint.h"
#include "../blender/collada/collada.h"
#include "../blender/compositor/COM_compositor.h"
#include "../blender/gpencil_modifiers/MOD_gpencil_modifiertypes.h"
#include "../blender/editors/include/BIF_glutil.h"
#include "../blender/editors/include/ED_armature.h"
#include "../blender/editors/include/ED_anim_api.h"
#include "../blender/editors/include/ED_buttons.h"
#include "../blender/editors/include/ED_clip.h"
#include "../blender/editors/include/ED_curve.h"
#include "../blender/editors/include/ED_fileselect.h"
#include "../blender/editors/include/ED_gizmo_library.h"
#include "../blender/editors/include/ED_gpencil.h"
#include "../blender/editors/include/ED_image.h"
#include "../blender/editors/include/ED_info.h"
#include "../blender/editors/include/ED_keyframes_draw.h"
#include "../blender/editors/include/ED_keyframes_edit.h"
#include "../blender/editors/include/ED_keyframing.h"
#include "../blender/editors/include/ED_lattice.h"
//#include "../blender/editors/include/ED_manipulator_library.h"
#include "../blender/editors/include/ED_mball.h"
#include "../blender/editors/include/ED_mesh.h"
#include "../blender/editors/include/ED_node.h"
#include "../blender/editors/include/ED_object.h"
#include "../blender/editors/include/ED_particle.h"
#include "../blender/editors/include/ED_render.h"
#include "../blender/editors/include/ED_scene.h"
#include "../blender/editors/include/ED_screen.h"
#include "../blender/editors/include/ED_space_api.h"
#include "../blender/editors/include/ED_text.h"
#include "../blender/editors/include/ED_transform.h"
#include "../blender/editors/include/ED_transform_snap_object_context.h"
#include "../blender/editors/include/ED_uvedit.h"
#include "../blender/editors/include/ED_view3d.h"
#include "../blender/editors/include/UI_interface.h"
#include "../blender/editors/include/UI_interface_icons.h"
#include "../blender/editors/include/UI_resources.h"
#include "../blender/editors/include/UI_view2d.h"
#include "../blender/freestyle/FRS_freestyle.h"
#include "../blender/freestyle/intern/python/BPy_Freestyle.h"
#include "../blender/gpu/GPU_immediate.h"
#include "../blender/gpu/GPU_matrix.h"
#include "../blender/python/BPY_extern.h"
#include "../blender/python/intern/bpy_gizmo_wrap.h"
#include "../blender/render/extern/include/RE_engine.h"
#include "../blender/render/extern/include/RE_pipeline.h"
#include "../blender/render/extern/include/RE_render_ext.h"
#include "../blender/render/extern/include/RE_shader_ext.h"
#include "../blender/shader_fx/FX_shader_types.h"
#include "../blender/draw/DRW_engine.h"
#include "../blender/windowmanager/WM_api.h"
#include "../blender/windowmanager/WM_types.h"
#include "../blender/windowmanager/WM_message.h"
#include "../blender/windowmanager/WM_toolsystem.h"
#include "../blender/windowmanager/wm_window.h"


/* -------------------------------------------------------------------- */
/* Externs
 * (ideally we wouldn't have _any_ but we can't include all directly)
 */


/* bpy_operator_wrap.h */
extern void macro_wrapper(struct wmOperatorType *ot, void *userdata);
extern void operator_wrapper(struct wmManipulatorGroupType *wgt, void *userdata);

/* bpy_widgetgroup_wrap.h */
extern void widgetgroup_wrapper(struct wmOperatorType *ot, void *userdata);

/* bpy_rna.h */
extern bool pyrna_id_FromPyObject(struct PyObject *obj, struct ID **id);
extern const char *BPY_app_translations_py_pgettext(const char *msgctxt, const char *msgid);
extern const char *BPY_app_translations_py_pgettext(const char *msgctxt, const char *msgid);
extern struct PyObject *pyrna_id_CreatePyObject(struct ID *id);
extern bool pyrna_id_CheckPyObject(struct PyObject *obj);
/* bpy_interface.c */

#endif
/* end declarations */


/* -------------------------------------------------------------------- */
/* Return Macro's */

#include <string.h>  /* memset */
#define RET_NULL {STUB_ASSERT(0); return (void *) NULL;}
#define RET_ZERO {STUB_ASSERT(0); return 0;}
#define RET_MINUSONE {STUB_ASSERT(0); return -1;}
#define RET_STRUCT(t) {struct t v; STUB_ASSERT(0); memset(&v, 0, sizeof(v)); return v;}
#define RET_ARG(arg) {STUB_ASSERT(0); return arg; }
#define RET_NONE {STUB_ASSERT(0);}

/* -------------------------------------------------------------------- */
/* Stubs */

void FRS_free_view_map_cache(void) RET_NONE
int FRS_is_freestyle_enabled(struct ViewLayer *view_layer) RET_ZERO
void FRS_init_stroke_renderer(struct Render *re) RET_NONE
void FRS_begin_stroke_rendering(struct Render *re) RET_NONE
struct Render *FRS_do_stroke_rendering(struct Render *re,
                                           struct ViewLayer *view_layer,
                                           int render) RET_NULL
void FRS_end_stroke_rendering(struct Render *re) RET_NONE
void FRS_exit(void) RET_NONE

PyObject *Freestyle_Init(void) RET_NULL

void FRS_copy_active_lineset(struct FreestyleConfig *config) RET_NONE
void FRS_paste_active_lineset(struct FreestyleConfig *config) RET_NONE
void FRS_delete_active_lineset(struct FreestyleConfig *config) RET_NONE
bool FRS_move_active_lineset(struct FreestyleConfig *config, int direction) RET_ZERO
struct Material *FRS_create_stroke_material(struct Main *bmain, struct FreestyleLineStyle *linestyle) RET_NULL


int collada_import(struct bContext *C, ImportSettings *import_settings) RET_ZERO
int collada_export(struct bContext *C, ExportSettings *export_settings) RET_ZERO

void *CCL_python_module_init(void) RET_NULL

void COM_execute(RenderData *rd,
                     Scene *scene,
                     bNodeTree *editingtree,
                     int rendering,
                     const ColorManagedViewSettings *viewSettings,
                     const ColorManagedDisplaySettings *displaySettings,
                     const char *viewName) RET_NONE

void COM_deinitialize(void) RET_NONE

#endif // WITH_GAMEENGINE
