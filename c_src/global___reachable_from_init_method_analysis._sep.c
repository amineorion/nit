/* This C file is generated by NIT to compile module global___reachable_from_init_method_analysis. */
#include "global___reachable_from_init_method_analysis._sep.h"
static const char LOCATE_global___reachable_from_init_method_analysis___Program___rfima[] = "reachable_from_init_method_analysis::Program::rfima";
val_t global___reachable_from_init_method_analysis___Program___rfima(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___reachable_from_init_method_analysis;
  fra.me.line = 25;
  fra.me.meth = LOCATE_global___reachable_from_init_method_analysis___Program___rfima;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* global/reachable_from_init_method_analysis.nit:25 */
  fra.me.REG[0] = ATTR_global___reachable_from_init_method_analysis___Program____rfima(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
static const char LOCATE_global___reachable_from_init_method_analysis___Program___rfima__eq[] = "reachable_from_init_method_analysis::Program::rfima=";
void global___reachable_from_init_method_analysis___Program___rfima__eq(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___reachable_from_init_method_analysis;
  fra.me.line = 25;
  fra.me.meth = LOCATE_global___reachable_from_init_method_analysis___Program___rfima__eq;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* global/reachable_from_init_method_analysis.nit:25 */
  ATTR_global___reachable_from_init_method_analysis___Program____rfima(fra.me.REG[0]) = fra.me.REG[1];
  stack_frame_head = fra.me.prev;
  return;
}
static const char LOCATE_global___reachable_from_init_method_analysis___Program___dump_reachable_methods_from_init[] = "reachable_from_init_method_analysis::Program::dump_reachable_methods_from_init";
void global___reachable_from_init_method_analysis___Program___dump_reachable_methods_from_init(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[3];} fra;
  val_t REGB0;
  val_t tmp;
  static val_t once_value_1; /* Once value */
  static val_t once_value_2; /* Once value */
  static val_t once_value_3; /* Once value */
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___reachable_from_init_method_analysis;
  fra.me.line = 28;
  fra.me.meth = LOCATE_global___reachable_from_init_method_analysis___Program___dump_reachable_methods_from_init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 4;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* global/reachable_from_init_method_analysis.nit:31 */
  REGB0 = TAG_Int(5);
  fra.me.REG[2] = NEW_Array_standard___collection___array___Array___with_capacity(REGB0);
  if (!once_value_1) {
    fra.me.REG[3] = BOX_NativeString("");
    REGB0 = TAG_Int(0);
    fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB0);
    once_value_1 = fra.me.REG[3];
    register_static_object(&once_value_1);
  } else fra.me.REG[3] = once_value_1;
  fra.me.REG[3] = fra.me.REG[3];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[3]);
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
  if (!once_value_2) {
    fra.me.REG[1] = BOX_NativeString("/");
    REGB0 = TAG_Int(1);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
    once_value_2 = fra.me.REG[1];
    register_static_object(&once_value_2);
  } else fra.me.REG[1] = once_value_2;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
  fra.me.REG[1] = CALL_program___Program___main_module(fra.me.REG[0])(fra.me.REG[0]);
  fra.me.REG[1] = CALL_metamodel___abstractmetamodel___MMModule___name(fra.me.REG[1])(fra.me.REG[1]);
  fra.me.REG[1] = CALL_standard___string___Object___to_s(fra.me.REG[1])(fra.me.REG[1]);
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
  if (!once_value_3) {
    fra.me.REG[1] = BOX_NativeString(".reachable_methods_from_init.log");
    REGB0 = TAG_Int(32);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
    once_value_3 = fra.me.REG[1];
    register_static_object(&once_value_3);
  } else fra.me.REG[1] = once_value_3;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
  fra.me.REG[2] = CALL_standard___string___Object___to_s(fra.me.REG[2])(fra.me.REG[2]);
  fra.me.REG[2] = NEW_OFStream_standard___file___OFStream___open(fra.me.REG[2]);
  CALL_program___Program___with_each_methods(fra.me.REG[0])(fra.me.REG[0], (&(fra.me)), ((fun_t)OC_global___reachable_from_init_method_analysis___Program___dump_reachable_methods_from_init_4));
  /* global/reachable_from_init_method_analysis.nit:37 */
  CALL_standard___stream___IOS___close(fra.me.REG[2])(fra.me.REG[2]);
  stack_frame_head = fra.me.prev;
  return;
}
  void OC_global___reachable_from_init_method_analysis___Program___dump_reachable_methods_from_init_4(struct stack_frame_t *closctx, val_t p0){
    struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
    val_t REGB0;
    val_t tmp;
      static val_t once_value_5; /* Once value */
      static val_t once_value_6; /* Once value */
    /* global/reachable_from_init_method_analysis.nit:32 */
    fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
    fra.me.file = LOCATE_global___reachable_from_init_method_analysis;
    fra.me.line = 32;
    fra.me.meth = LOCATE_global___reachable_from_init_method_analysis___Program___dump_reachable_methods_from_init;
    fra.me.has_broke = 0;
    fra.me.REG_size = 3;
    fra.me.nitni_local_ref_head = NULL;
    fra.me.REG[0] = NIT_NULL;
    fra.me.REG[1] = NIT_NULL;
    fra.me.REG[2] = NIT_NULL;
    fra.me.REG[0] = p0;
    /* global/reachable_from_init_method_analysis.nit:33 */
    fra.me.REG[1] = CALL_global___reachable_from_init_method_analysis___Program___rfima(closctx->REG[0])(closctx->REG[0]);
    REGB0 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
      nit_abort("Reciever is null", NULL, LOCATE_global___reachable_from_init_method_analysis, 33);
    }
    REGB0 = CALL_global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_method_reachable_from_init(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
    if (UNTAG_Bool(REGB0)) {
      /* global/reachable_from_init_method_analysis.nit:34 */
      REGB0 = TAG_Int(3);
      fra.me.REG[1] = NEW_Array_standard___collection___array___Array___with_capacity(REGB0);
      if (!once_value_5) {
        fra.me.REG[2] = BOX_NativeString("");
        REGB0 = TAG_Int(0);
        fra.me.REG[2] = NEW_String_standard___string___String___with_native(fra.me.REG[2], REGB0);
        once_value_5 = fra.me.REG[2];
        register_static_object(&once_value_5);
      } else fra.me.REG[2] = once_value_5;
      fra.me.REG[2] = fra.me.REG[2];
      CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[2]);
      fra.me.REG[0] = CALL_metamodel___abstractmetamodel___MMLocalProperty___full_name(fra.me.REG[0])(fra.me.REG[0]);
      CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
      if (!once_value_6) {
        fra.me.REG[0] = BOX_NativeString("\n");
        REGB0 = TAG_Int(1);
        fra.me.REG[0] = NEW_String_standard___string___String___with_native(fra.me.REG[0], REGB0);
        once_value_6 = fra.me.REG[0];
        register_static_object(&once_value_6);
      } else fra.me.REG[0] = once_value_6;
      fra.me.REG[0] = fra.me.REG[0];
      CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
      fra.me.REG[1] = CALL_standard___string___Object___to_s(fra.me.REG[1])(fra.me.REG[1]);
      CALL_standard___stream___OStream___write(closctx->REG[2])(closctx->REG[2], fra.me.REG[1]);
    }
    stack_frame_head = fra.me.prev;
    return;
  }
static const char LOCATE_global___reachable_from_init_method_analysis___Program___dump_unreachable_methods_from_init[] = "reachable_from_init_method_analysis::Program::dump_unreachable_methods_from_init";
void global___reachable_from_init_method_analysis___Program___dump_unreachable_methods_from_init(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[3];} fra;
  val_t REGB0;
  val_t tmp;
  static val_t once_value_1; /* Once value */
  static val_t once_value_2; /* Once value */
  static val_t once_value_3; /* Once value */
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___reachable_from_init_method_analysis;
  fra.me.line = 40;
  fra.me.meth = LOCATE_global___reachable_from_init_method_analysis___Program___dump_unreachable_methods_from_init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 4;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* global/reachable_from_init_method_analysis.nit:43 */
  REGB0 = TAG_Int(5);
  fra.me.REG[2] = NEW_Array_standard___collection___array___Array___with_capacity(REGB0);
  if (!once_value_1) {
    fra.me.REG[3] = BOX_NativeString("");
    REGB0 = TAG_Int(0);
    fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB0);
    once_value_1 = fra.me.REG[3];
    register_static_object(&once_value_1);
  } else fra.me.REG[3] = once_value_1;
  fra.me.REG[3] = fra.me.REG[3];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[3]);
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
  if (!once_value_2) {
    fra.me.REG[1] = BOX_NativeString("/");
    REGB0 = TAG_Int(1);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
    once_value_2 = fra.me.REG[1];
    register_static_object(&once_value_2);
  } else fra.me.REG[1] = once_value_2;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
  fra.me.REG[1] = CALL_program___Program___main_module(fra.me.REG[0])(fra.me.REG[0]);
  fra.me.REG[1] = CALL_metamodel___abstractmetamodel___MMModule___name(fra.me.REG[1])(fra.me.REG[1]);
  fra.me.REG[1] = CALL_standard___string___Object___to_s(fra.me.REG[1])(fra.me.REG[1]);
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
  if (!once_value_3) {
    fra.me.REG[1] = BOX_NativeString(".unreachable_methods_from_init.log");
    REGB0 = TAG_Int(34);
    fra.me.REG[1] = NEW_String_standard___string___String___with_native(fra.me.REG[1], REGB0);
    once_value_3 = fra.me.REG[1];
    register_static_object(&once_value_3);
  } else fra.me.REG[1] = once_value_3;
  fra.me.REG[1] = fra.me.REG[1];
  CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
  fra.me.REG[2] = CALL_standard___string___Object___to_s(fra.me.REG[2])(fra.me.REG[2]);
  fra.me.REG[2] = NEW_OFStream_standard___file___OFStream___open(fra.me.REG[2]);
  CALL_program___Program___with_each_methods(fra.me.REG[0])(fra.me.REG[0], (&(fra.me)), ((fun_t)OC_global___reachable_from_init_method_analysis___Program___dump_unreachable_methods_from_init_4));
  /* global/reachable_from_init_method_analysis.nit:49 */
  CALL_standard___stream___IOS___close(fra.me.REG[2])(fra.me.REG[2]);
  stack_frame_head = fra.me.prev;
  return;
}
  void OC_global___reachable_from_init_method_analysis___Program___dump_unreachable_methods_from_init_4(struct stack_frame_t *closctx, val_t p0){
    struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
    val_t REGB0;
    val_t REGB1;
    val_t tmp;
      static val_t once_value_5; /* Once value */
      static val_t once_value_6; /* Once value */
    /* global/reachable_from_init_method_analysis.nit:44 */
    fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
    fra.me.file = LOCATE_global___reachable_from_init_method_analysis;
    fra.me.line = 44;
    fra.me.meth = LOCATE_global___reachable_from_init_method_analysis___Program___dump_unreachable_methods_from_init;
    fra.me.has_broke = 0;
    fra.me.REG_size = 3;
    fra.me.nitni_local_ref_head = NULL;
    fra.me.REG[0] = NIT_NULL;
    fra.me.REG[1] = NIT_NULL;
    fra.me.REG[2] = NIT_NULL;
    fra.me.REG[0] = p0;
    /* global/reachable_from_init_method_analysis.nit:45 */
    fra.me.REG[1] = CALL_global___reachable_from_init_method_analysis___Program___rfima(closctx->REG[0])(closctx->REG[0]);
    REGB0 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
      nit_abort("Reciever is null", NULL, LOCATE_global___reachable_from_init_method_analysis, 45);
    }
    REGB0 = CALL_global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_method_reachable_from_init(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
    REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
    if (UNTAG_Bool(REGB0)) {
      fra.me.REG[1] = CALL_global___reachable_method_analysis___Program___rma(closctx->REG[0])(closctx->REG[0]);
      REGB0 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
        nit_abort("Reciever is null", NULL, LOCATE_global___reachable_from_init_method_analysis, 45);
      }
      REGB0 = CALL_global___reachable_method_analysis___ReachableMethodAnalysis___is_method_reachable(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
    } else {
      REGB1 = TAG_Bool(0);
      REGB0 = REGB1;
    }
    if (UNTAG_Bool(REGB0)) {
      /* global/reachable_from_init_method_analysis.nit:46 */
      REGB0 = TAG_Int(3);
      fra.me.REG[1] = NEW_Array_standard___collection___array___Array___with_capacity(REGB0);
      if (!once_value_5) {
        fra.me.REG[2] = BOX_NativeString("");
        REGB0 = TAG_Int(0);
        fra.me.REG[2] = NEW_String_standard___string___String___with_native(fra.me.REG[2], REGB0);
        once_value_5 = fra.me.REG[2];
        register_static_object(&once_value_5);
      } else fra.me.REG[2] = once_value_5;
      fra.me.REG[2] = fra.me.REG[2];
      CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[2]);
      fra.me.REG[0] = CALL_metamodel___abstractmetamodel___MMLocalProperty___full_name(fra.me.REG[0])(fra.me.REG[0]);
      CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
      if (!once_value_6) {
        fra.me.REG[0] = BOX_NativeString("\n");
        REGB0 = TAG_Int(1);
        fra.me.REG[0] = NEW_String_standard___string___String___with_native(fra.me.REG[0], REGB0);
        once_value_6 = fra.me.REG[0];
        register_static_object(&once_value_6);
      } else fra.me.REG[0] = once_value_6;
      fra.me.REG[0] = fra.me.REG[0];
      CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[1])(fra.me.REG[1], fra.me.REG[0]);
      fra.me.REG[1] = CALL_standard___string___Object___to_s(fra.me.REG[1])(fra.me.REG[1]);
      CALL_standard___stream___OStream___write(closctx->REG[2])(closctx->REG[2], fra.me.REG[1]);
    }
    stack_frame_head = fra.me.prev;
    return;
  }
static const char LOCATE_global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_iroutine_reachable_from_init[] = "reachable_from_init_method_analysis::ReachableFromInitMethodAnalysis::is_iroutine_reachable_from_init";
val_t global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_iroutine_reachable_from_init(val_t p0, val_t p1){
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___reachable_from_init_method_analysis;
  fra.me.line = 57;
  fra.me.meth = LOCATE_global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_iroutine_reachable_from_init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 0;
  fra.me.nitni_local_ref_head = NULL;
  /* global/reachable_from_init_method_analysis.nit:57 */
  nit_abort("Deferred method called", NULL, LOCATE_global___reachable_from_init_method_analysis, 57);
  stack_frame_head = fra.me.prev;
  return NIT_NULL;
}
static const char LOCATE_global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_method_reachable_from_init[] = "reachable_from_init_method_analysis::ReachableFromInitMethodAnalysis::is_method_reachable_from_init";
val_t global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_method_reachable_from_init(val_t p0, val_t p1){
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___reachable_from_init_method_analysis;
  fra.me.line = 58;
  fra.me.meth = LOCATE_global___reachable_from_init_method_analysis___ReachableFromInitMethodAnalysis___is_method_reachable_from_init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 0;
  fra.me.nitni_local_ref_head = NULL;
  /* global/reachable_from_init_method_analysis.nit:58 */
  nit_abort("Deferred method called", NULL, LOCATE_global___reachable_from_init_method_analysis, 58);
  stack_frame_head = fra.me.prev;
  return NIT_NULL;
}
static const char LOCATE_global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___is_iroutine_reachable_from_init[] = "reachable_from_init_method_analysis::DefaultReachableFromInitMethodAnalysis::(reachable_from_init_method_analysis::ReachableFromInitMethodAnalysis::is_iroutine_reachable_from_init)";
val_t global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___is_iroutine_reachable_from_init(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___reachable_from_init_method_analysis;
  fra.me.line = 65;
  fra.me.meth = LOCATE_global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___is_iroutine_reachable_from_init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* global/reachable_from_init_method_analysis.nit:65 */
  REGB0 = TAG_Bool(1);
  goto label1;
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return REGB0;
}
static const char LOCATE_global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___is_method_reachable_from_init[] = "reachable_from_init_method_analysis::DefaultReachableFromInitMethodAnalysis::(reachable_from_init_method_analysis::ReachableFromInitMethodAnalysis::is_method_reachable_from_init)";
val_t global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___is_method_reachable_from_init(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___reachable_from_init_method_analysis;
  fra.me.line = 66;
  fra.me.meth = LOCATE_global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___is_method_reachable_from_init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* global/reachable_from_init_method_analysis.nit:66 */
  REGB0 = TAG_Bool(1);
  goto label1;
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return REGB0;
}
static const char LOCATE_global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___init[] = "reachable_from_init_method_analysis::DefaultReachableFromInitMethodAnalysis::init";
void global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___init(val_t p0, int* init_table){
  int itpos0 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis].i;
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  if (init_table[itpos0]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___reachable_from_init_method_analysis;
  fra.me.line = 68;
  fra.me.meth = LOCATE_global___reachable_from_init_method_analysis___DefaultReachableFromInitMethodAnalysis___init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  stack_frame_head = fra.me.prev;
  init_table[itpos0] = 1;
  return;
}
