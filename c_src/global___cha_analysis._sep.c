/* This C file is generated by NIT to compile module global___cha_analysis. */
#include "global___cha_analysis._sep.h"
static const char LOCATE_global___cha_analysis___ChaContext___reachable_iroutines[] = "cha_analysis::ChaContext::reachable_iroutines";
val_t global___cha_analysis___ChaContext___reachable_iroutines(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___cha_analysis;
  fra.me.line = 26;
  fra.me.meth = LOCATE_global___cha_analysis___ChaContext___reachable_iroutines;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* global/cha_analysis.nit:26 */
  REGB0 = TAG_Bool(ATTR_global___cha_analysis___ChaContext____reachable_iroutines(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_reachable_iroutines", LOCATE_global___cha_analysis, 26);
  }
  fra.me.REG[0] = ATTR_global___cha_analysis___ChaContext____reachable_iroutines(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
static const char LOCATE_global___cha_analysis___ChaContext___is_iroutine_reachable[] = "cha_analysis::ChaContext::(reachable_method_analysis::ReachableMethodAnalysis::is_iroutine_reachable)";
val_t global___cha_analysis___ChaContext___is_iroutine_reachable(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___cha_analysis;
  fra.me.line = 28;
  fra.me.meth = LOCATE_global___cha_analysis___ChaContext___is_iroutine_reachable;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* global/cha_analysis.nit:29 */
  REGB0 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    REGB1 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
    if (UNTAG_Bool(REGB1)) {
      REGB1 = TAG_Bool(0);
      REGB0 = REGB1;
    } else {
      REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[1])(fra.me.REG[1], NIT_NULL);
      REGB0 = REGB1;
    }
  }
  REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
  if (UNTAG_Bool(REGB0)) {
    fra.me.REG[0] = CALL_global___cha_analysis___ChaContext___reachable_iroutines(fra.me.REG[0])(fra.me.REG[0]);
    REGB0 = CALL_standard___collection___abstract_collection___Collection___has(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1]);
  } else {
    REGB1 = TAG_Bool(0);
    REGB0 = REGB1;
  }
  goto label1;
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return REGB0;
}
static const char LOCATE_global___cha_analysis___ChaContext___is_method_reachable[] = "cha_analysis::ChaContext::(reachable_method_analysis::ReachableMethodAnalysis::is_method_reachable)";
val_t global___cha_analysis___ChaContext___is_method_reachable(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___cha_analysis;
  fra.me.line = 32;
  fra.me.meth = LOCATE_global___cha_analysis___ChaContext___is_method_reachable;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* global/cha_analysis.nit:33 */
  fra.me.REG[1] = CALL_icode___icode_base___MMMethod___iroutine(fra.me.REG[1])(fra.me.REG[1]);
  REGB0 = CALL_global___reachable_method_analysis___ReachableMethodAnalysis___is_iroutine_reachable(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1]);
  goto label1;
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return REGB0;
}
static const char LOCATE_global___cha_analysis___ChaContext___init[] = "cha_analysis::ChaContext::init";
void global___cha_analysis___ChaContext___init(val_t p0, int* init_table){
  int itpos0 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_global___cha_analysis___ChaContext].i;
  struct {struct stack_frame_t me;} fra;
  val_t tmp;
  if (init_table[itpos0]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___cha_analysis;
  fra.me.line = 0;
  fra.me.meth = LOCATE_global___cha_analysis___ChaContext___init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 0;
  fra.me.nitni_local_ref_head = NULL;
  stack_frame_head = fra.me.prev;
  init_table[itpos0] = 1;
  return;
}
static const char LOCATE_global___cha_analysis___ChaBuilder___iroutine_to_search[] = "cha_analysis::ChaBuilder::iroutine_to_search";
val_t global___cha_analysis___ChaBuilder___iroutine_to_search(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___cha_analysis;
  fra.me.line = 38;
  fra.me.meth = LOCATE_global___cha_analysis___ChaBuilder___iroutine_to_search;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* global/cha_analysis.nit:38 */
  REGB0 = TAG_Bool(ATTR_global___cha_analysis___ChaBuilder____iroutine_to_search(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_iroutine_to_search", LOCATE_global___cha_analysis, 38);
  }
  fra.me.REG[0] = ATTR_global___cha_analysis___ChaBuilder____iroutine_to_search(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
static const char LOCATE_global___cha_analysis___ChaBuilder___context[] = "cha_analysis::ChaBuilder::context";
val_t global___cha_analysis___ChaBuilder___context(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___cha_analysis;
  fra.me.line = 39;
  fra.me.meth = LOCATE_global___cha_analysis___ChaBuilder___context;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* global/cha_analysis.nit:39 */
  REGB0 = TAG_Bool(ATTR_global___cha_analysis___ChaBuilder____context(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_context", LOCATE_global___cha_analysis, 39);
  }
  fra.me.REG[0] = ATTR_global___cha_analysis___ChaBuilder____context(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
static const char LOCATE_global___cha_analysis___ChaBuilder___program[] = "cha_analysis::ChaBuilder::program";
val_t global___cha_analysis___ChaBuilder___program(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___cha_analysis;
  fra.me.line = 40;
  fra.me.meth = LOCATE_global___cha_analysis___ChaBuilder___program;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* global/cha_analysis.nit:40 */
  REGB0 = TAG_Bool(ATTR_global___cha_analysis___ChaBuilder____program(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_program", LOCATE_global___cha_analysis, 40);
  }
  fra.me.REG[0] = ATTR_global___cha_analysis___ChaBuilder____program(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
static const char LOCATE_global___cha_analysis___ChaBuilder___init[] = "cha_analysis::ChaBuilder::init";
void global___cha_analysis___ChaBuilder___init(val_t p0, val_t p1, int* init_table){
  int itpos1 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_global___cha_analysis___ChaBuilder].i;
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t tmp;
  if (init_table[itpos1]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___cha_analysis;
  fra.me.line = 42;
  fra.me.meth = LOCATE_global___cha_analysis___ChaBuilder___init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* global/cha_analysis.nit:43 */
  ATTR_global___cha_analysis___ChaBuilder____program(fra.me.REG[0]) = fra.me.REG[1];
  /* global/cha_analysis.nit:44 */
  fra.me.REG[1] = NEW_ChaContext_global___cha_analysis___ChaContext___init();
  ATTR_global___cha_analysis___ChaBuilder____context(fra.me.REG[0]) = fra.me.REG[1];
  stack_frame_head = fra.me.prev;
  init_table[itpos1] = 1;
  return;
}
static const char LOCATE_global___cha_analysis___ChaBuilder___add_search[] = "cha_analysis::ChaBuilder::add_search";
void global___cha_analysis___ChaBuilder___add_search(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4){
  struct {struct stack_frame_t me; val_t MORE_REG[3];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t REGB2;
  val_t REGB3;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___cha_analysis;
  fra.me.line = 47;
  fra.me.meth = LOCATE_global___cha_analysis___ChaBuilder___add_search;
  fra.me.has_broke = 0;
  fra.me.REG_size = 4;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  fra.me.REG[2] = p2;
  REGB0 = p3;
  REGB1 = p4;
  /* global/cha_analysis.nit:49 */
  REGB2 = TAG_Bool(fra.me.REG[2]==NIT_NULL);
  if (UNTAG_Bool(REGB2)) {
  } else {
    REGB3 = TAG_Bool(fra.me.REG[2]==NIT_NULL);
    if (UNTAG_Bool(REGB3)) {
      REGB3 = TAG_Bool(0);
      REGB2 = REGB3;
    } else {
      REGB3 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[2])(fra.me.REG[2], NIT_NULL);
      REGB2 = REGB3;
    }
  }
  REGB2 = TAG_Bool(!UNTAG_Bool(REGB2));
  if (UNTAG_Bool(REGB2)) {
    fra.me.REG[3] = CALL_global___cha_analysis___ChaBuilder___context(fra.me.REG[0])(fra.me.REG[0]);
    REGB2 = CALL_global___reachable_method_analysis___ReachableMethodAnalysis___is_iroutine_reachable(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[2]);
    REGB2 = TAG_Bool(!UNTAG_Bool(REGB2));
  } else {
    REGB3 = TAG_Bool(0);
    REGB2 = REGB3;
  }
  if (UNTAG_Bool(REGB2)) {
    /* global/cha_analysis.nit:50 */
    fra.me.REG[3] = CALL_global___cha_analysis___ChaBuilder___context(fra.me.REG[0])(fra.me.REG[0]);
    fra.me.REG[3] = CALL_global___cha_analysis___ChaContext___reachable_iroutines(fra.me.REG[3])(fra.me.REG[3]);
    CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[2]);
    /* global/cha_analysis.nit:51 */
    REGB2 = TAG_Bool(ATTR_global___cha_analysis___ChaBuilder____iroutine_to_search(fra.me.REG[0])!=NIT_NULL);
    if (UNTAG_Bool(REGB2)) {
    } else {
      nit_abort("Uninitialized attribute %s", "_iroutine_to_search", LOCATE_global___cha_analysis, 51);
    }
    fra.me.REG[3] = ATTR_global___cha_analysis___ChaBuilder____iroutine_to_search(fra.me.REG[0]);
    CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[2]);
  }
  /* global/cha_analysis.nit:54 */
  REGB2 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
  if (UNTAG_Bool(REGB2)) {
  } else {
    REGB3 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
    if (UNTAG_Bool(REGB3)) {
      REGB3 = TAG_Bool(0);
      REGB2 = REGB3;
    } else {
      REGB3 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[1])(fra.me.REG[1], NIT_NULL);
      REGB2 = REGB3;
    }
  }
  REGB2 = TAG_Bool(!UNTAG_Bool(REGB2));
  if (UNTAG_Bool(REGB2)) {
    /* global/cha_analysis.nit:56 */
    REGB0 = TAG_Bool(!UNTAG_Bool(REGB0));
    if (UNTAG_Bool(REGB0)) {
      /* global/cha_analysis.nit:57 */
      REGB0 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
      if (UNTAG_Bool(REGB0)) {
        nit_abort("Reciever is null", NULL, LOCATE_global___cha_analysis, 57);
      }
      fra.me.REG[2] = CALL_metamodel___abstractmetamodel___MMLocalProperty___prhe(fra.me.REG[1])(fra.me.REG[1]);
      fra.me.REG[2] = CALL_metamodel___partial_order___PartialOrderElement___smallers(fra.me.REG[2])(fra.me.REG[2]);
      CALL_standard___collection___abstract_collection___Collection___iterate(fra.me.REG[2])(fra.me.REG[2], (&(fra.me)), ((fun_t)OC_global___cha_analysis___ChaBuilder___add_search_1));
    }
    /* global/cha_analysis.nit:65 */
    if (UNTAG_Bool(REGB1)) {
      /* global/cha_analysis.nit:66 */
      REGB1 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
      if (UNTAG_Bool(REGB1)) {
        nit_abort("Reciever is null", NULL, LOCATE_global___cha_analysis, 66);
      }
      fra.me.REG[1] = CALL_metamodel___abstractmetamodel___MMLocalProperty___prhe(fra.me.REG[1])(fra.me.REG[1]);
      fra.me.REG[1] = CALL_metamodel___partial_order___PartialOrderElement___greaters(fra.me.REG[1])(fra.me.REG[1]);
      CALL_standard___collection___abstract_collection___Collection___iterate(fra.me.REG[1])(fra.me.REG[1], (&(fra.me)), ((fun_t)OC_global___cha_analysis___ChaBuilder___add_search_2));
    }
  }
  stack_frame_head = fra.me.prev;
  return;
}
      void OC_global___cha_analysis___ChaBuilder___add_search_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0){
        struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
        val_t REGB0;
        val_t REGB1;
        fun_t CREG[1];
        val_t tmp;
        fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
        fra.me.file = LOCATE_global___cha_analysis;
        fra.me.line = 0;
        fra.me.meth = LOCATE_global___cha_analysis___ChaBuilder___add_search;
        fra.me.has_broke = 0;
        fra.me.REG_size = 2;
        fra.me.nitni_local_ref_head = NULL;
        fra.me.REG[0] = NIT_NULL;
        fra.me.REG[1] = NIT_NULL;
        fra.me.closure_ctx = closctx_param;
        fra.me.closure_funs = CREG;
        fra.me.REG[0] = p0;
        CREG[0] = clos_fun0;
        /* global/cha_analysis.nit:58 */
        REGB0 = TAG_Bool(VAL_ISA(fra.me.REG[0], COLOR_metamodel___abstractmetamodel___MMMethod, ID_metamodel___abstractmetamodel___MMMethod)) /*cast MMMethod*/;
        if (UNTAG_Bool(REGB0)) {
          /* global/cha_analysis.nit:59 */
          fra.me.REG[1] = CALL_icode___icode_base___MMMethod___iroutine(fra.me.REG[0])(fra.me.REG[0]);
          REGB0 = TAG_Bool(1);
          REGB1 = TAG_Bool(0);
          CALL_global___cha_analysis___ChaBuilder___add_search(closctx->REG[0])(closctx->REG[0], fra.me.REG[0], fra.me.REG[1], REGB0, REGB1);
        }
        stack_frame_head = fra.me.prev;
        return;
      }
      void OC_global___cha_analysis___ChaBuilder___add_search_2(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0){
        struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
        val_t REGB0;
        val_t REGB1;
        fun_t CREG[1];
        val_t tmp;
        fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
        fra.me.file = LOCATE_global___cha_analysis;
        fra.me.line = 0;
        fra.me.meth = LOCATE_global___cha_analysis___ChaBuilder___add_search;
        fra.me.has_broke = 0;
        fra.me.REG_size = 2;
        fra.me.nitni_local_ref_head = NULL;
        fra.me.REG[0] = NIT_NULL;
        fra.me.REG[1] = NIT_NULL;
        fra.me.closure_ctx = closctx_param;
        fra.me.closure_funs = CREG;
        fra.me.REG[0] = p0;
        CREG[0] = clos_fun0;
        /* global/cha_analysis.nit:67 */
        REGB0 = TAG_Bool(VAL_ISA(fra.me.REG[0], COLOR_metamodel___abstractmetamodel___MMMethod, ID_metamodel___abstractmetamodel___MMMethod)) /*cast MMMethod*/;
        if (UNTAG_Bool(REGB0)) {
          /* global/cha_analysis.nit:68 */
          fra.me.REG[1] = CALL_icode___icode_base___MMMethod___iroutine(fra.me.REG[0])(fra.me.REG[0]);
          REGB0 = TAG_Bool(1);
          REGB1 = TAG_Bool(0);
          CALL_global___cha_analysis___ChaBuilder___add_search(closctx->REG[0])(closctx->REG[0], fra.me.REG[0], fra.me.REG[1], REGB0, REGB1);
        }
        stack_frame_head = fra.me.prev;
        return;
      }
static const char LOCATE_global___cha_analysis___ChaBuilder___work[] = "cha_analysis::ChaBuilder::work";
void global___cha_analysis___ChaBuilder___work(val_t p0){
  struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___cha_analysis;
  fra.me.line = 75;
  fra.me.meth = LOCATE_global___cha_analysis___ChaBuilder___work;
  fra.me.has_broke = 0;
  fra.me.REG_size = 3;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* global/cha_analysis.nit:77 */
  fra.me.REG[1] = CALL_global___cha_analysis___ChaBuilder___program(fra.me.REG[0])(fra.me.REG[0]);
  fra.me.REG[1] = CALL_program___Program___main_method(fra.me.REG[1])(fra.me.REG[1]);
  /* global/cha_analysis.nit:78 */
  REGB0 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    REGB1 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
    if (UNTAG_Bool(REGB1)) {
      REGB1 = TAG_Bool(0);
      REGB0 = REGB1;
    } else {
      REGB1 = CALL_standard___kernel___Object_____eqeq(fra.me.REG[1])(fra.me.REG[1], NIT_NULL);
      REGB0 = REGB1;
    }
  }
  if (UNTAG_Bool(REGB0)) {
    goto label1;
  }
  /* global/cha_analysis.nit:80 */
  REGB0 = TAG_Bool(fra.me.REG[1]==NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
    nit_abort("Reciever is null", NULL, LOCATE_global___cha_analysis, 80);
  }
  fra.me.REG[2] = CALL_icode___icode_base___MMMethod___iroutine(fra.me.REG[1])(fra.me.REG[1]);
  REGB0 = TAG_Bool(1);
  REGB1 = TAG_Bool(0);
  CALL_global___cha_analysis___ChaBuilder___add_search(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1], fra.me.REG[2], REGB0, REGB1);
  /* global/cha_analysis.nit:82 */
  while(1) {
    fra.me.REG[2] = CALL_global___cha_analysis___ChaBuilder___iroutine_to_search(fra.me.REG[0])(fra.me.REG[0]);
    REGB1 = CALL_standard___collection___abstract_collection___Collection___is_empty(fra.me.REG[2])(fra.me.REG[2]);
    REGB1 = TAG_Bool(!UNTAG_Bool(REGB1));
    if (UNTAG_Bool(REGB1)) {
      /* global/cha_analysis.nit:83 */
      fra.me.REG[2] = NEW_ChaVisitor_global___cha_analysis___ChaVisitor___init(fra.me.REG[0]);
      /* global/cha_analysis.nit:84 */
      fra.me.REG[1] = CALL_global___cha_analysis___ChaBuilder___iroutine_to_search(fra.me.REG[0])(fra.me.REG[0]);
      fra.me.REG[1] = CALL_standard___collection___abstract_collection___Sequence___pop(fra.me.REG[1])(fra.me.REG[1]);
      /* global/cha_analysis.nit:85 */
      fra.me.REG[1] = CALL_icode___icode_base___IRoutine___body(fra.me.REG[1])(fra.me.REG[1]);
      CALL_icode___icode_tools___ICodeVisitor___visit_icode(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[1]);
    } else {
      /* global/cha_analysis.nit:82 */
      goto label2;
    }
  }
  label2: while(0);
  label1: while(0);
  stack_frame_head = fra.me.prev;
  return;
}
static const char LOCATE_global___cha_analysis___ChaVisitor___builder[] = "cha_analysis::ChaVisitor::builder";
val_t global___cha_analysis___ChaVisitor___builder(val_t p0){
  struct {struct stack_frame_t me;} fra;
  val_t REGB0;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___cha_analysis;
  fra.me.line = 92;
  fra.me.meth = LOCATE_global___cha_analysis___ChaVisitor___builder;
  fra.me.has_broke = 0;
  fra.me.REG_size = 1;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[0] = p0;
  /* global/cha_analysis.nit:92 */
  REGB0 = TAG_Bool(ATTR_global___cha_analysis___ChaVisitor____builder(fra.me.REG[0])!=NIT_NULL);
  if (UNTAG_Bool(REGB0)) {
  } else {
    nit_abort("Uninitialized attribute %s", "_builder", LOCATE_global___cha_analysis, 92);
  }
  fra.me.REG[0] = ATTR_global___cha_analysis___ChaVisitor____builder(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return fra.me.REG[0];
}
static const char LOCATE_global___cha_analysis___ChaVisitor___visit_icode[] = "cha_analysis::ChaVisitor::(icode_tools::ICodeVisitor::visit_icode)";
void global___cha_analysis___ChaVisitor___visit_icode(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[6];} fra;
  val_t REGB0;
  val_t REGB1;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___cha_analysis;
  fra.me.line = 94;
  fra.me.meth = LOCATE_global___cha_analysis___ChaVisitor___visit_icode;
  fra.me.has_broke = 0;
  fra.me.REG_size = 7;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[3] = NIT_NULL;
  fra.me.REG[4] = NIT_NULL;
  fra.me.REG[5] = NIT_NULL;
  fra.me.REG[6] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* global/cha_analysis.nit:94 */
  fra.me.REG[2] = fra.me.REG[0];
  fra.me.REG[3] = fra.me.REG[1];
  /* global/cha_analysis.nit:96 */
  REGB0 = TAG_Bool((fra.me.REG[3]!=NIT_NULL) && VAL_ISA(fra.me.REG[3], COLOR_icode___icode_base___IStaticCall, ID_icode___icode_base___IStaticCall)) /*cast IStaticCall*/;
  if (UNTAG_Bool(REGB0)) {
    /* global/cha_analysis.nit:98 */
    fra.me.REG[4] = CALL_global___cha_analysis___ChaVisitor___builder(fra.me.REG[2])(fra.me.REG[2]);
    REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
      nit_abort("Reciever is null", NULL, LOCATE_global___cha_analysis, 98);
    }
    fra.me.REG[5] = CALL_icode___icode_base___IAbsCall___property(fra.me.REG[3])(fra.me.REG[3]);
    REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
    if (UNTAG_Bool(REGB0)) {
      nit_abort("Reciever is null", NULL, LOCATE_global___cha_analysis, 98);
    }
    fra.me.REG[6] = CALL_icode___icode_base___IAbsCall___property(fra.me.REG[3])(fra.me.REG[3]);
    fra.me.REG[6] = CALL_icode___icode_base___MMMethod___iroutine(fra.me.REG[6])(fra.me.REG[6]);
    REGB0 = TAG_Bool(1);
    REGB1 = TAG_Bool(0);
    CALL_global___cha_analysis___ChaBuilder___add_search(fra.me.REG[4])(fra.me.REG[4], fra.me.REG[5], fra.me.REG[6], REGB0, REGB1);
  } else {
    /* global/cha_analysis.nit:99 */
    REGB1 = TAG_Bool((fra.me.REG[3]!=NIT_NULL) && VAL_ISA(fra.me.REG[3], COLOR_icode___icode_base___INew, ID_icode___icode_base___INew)) /*cast INew*/;
    if (UNTAG_Bool(REGB1)) {
      /* global/cha_analysis.nit:101 */
      REGB1 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
      if (UNTAG_Bool(REGB1)) {
        nit_abort("Reciever is null", NULL, LOCATE_global___cha_analysis, 101);
      }
      fra.me.REG[6] = CALL_icode___icode_base___INew___stype(fra.me.REG[3])(fra.me.REG[3]);
      /* global/cha_analysis.nit:102 */
      fra.me.REG[5] = CALL_global___cha_analysis___ChaVisitor___builder(fra.me.REG[2])(fra.me.REG[2]);
      fra.me.REG[5] = CALL_global___cha_analysis___ChaBuilder___program(fra.me.REG[5])(fra.me.REG[5]);
      fra.me.REG[5] = CALL_program___Program___main_module(fra.me.REG[5])(fra.me.REG[5]);
      fra.me.REG[5] = CALL_metamodel___static_type___MMType___for_module(fra.me.REG[6])(fra.me.REG[6], fra.me.REG[5]);
      fra.me.REG[5] = CALL_metamodel___static_type___MMType___local_class(fra.me.REG[5])(fra.me.REG[5]);
      /* global/cha_analysis.nit:103 */
      fra.me.REG[6] = CALL_metamodel___abstractmetamodel___MMLocalClass___global(fra.me.REG[5])(fra.me.REG[5]);
      REGB1 = CALL_metamodel___abstractmetamodel___MMGlobalClass___is_extern(fra.me.REG[6])(fra.me.REG[6]);
      REGB1 = TAG_Bool(!UNTAG_Bool(REGB1));
      if (UNTAG_Bool(REGB1)) {
        /* global/cha_analysis.nit:104 */
        REGB1 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
        if (UNTAG_Bool(REGB1)) {
          nit_abort("Reciever is null", NULL, LOCATE_global___cha_analysis, 104);
        }
        fra.me.REG[6] = CALL_icode___icode_base___IAbsCall___property(fra.me.REG[3])(fra.me.REG[3]);
        fra.me.REG[6] = CALL_metamodel___abstractmetamodel___MMLocalProperty___global(fra.me.REG[6])(fra.me.REG[6]);
        fra.me.REG[6] = CALL_metamodel___abstractmetamodel___MMLocalClass_____bra(fra.me.REG[5])(fra.me.REG[5], fra.me.REG[6]);
        REGB1 = TAG_Bool(VAL_ISA(fra.me.REG[6], COLOR_metamodel___abstractmetamodel___MMMethod, ID_metamodel___abstractmetamodel___MMMethod)) /*cast MMMethod*/;
        if (UNTAG_Bool(REGB1)) {
        } else {
          nit_abort("Cast failed", NULL, LOCATE_global___cha_analysis, 104);
        }
        /* global/cha_analysis.nit:105 */
        fra.me.REG[5] = CALL_program___MMLocalClass___new_instance_iroutine(fra.me.REG[5])(fra.me.REG[5]);
        fra.me.REG[6] = CALL_standard___collection___abstract_collection___MapRead_____bra(fra.me.REG[5])(fra.me.REG[5], fra.me.REG[6]);
        /* global/cha_analysis.nit:106 */
        fra.me.REG[5] = CALL_global___cha_analysis___ChaVisitor___builder(fra.me.REG[2])(fra.me.REG[2]);
        REGB1 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
        if (UNTAG_Bool(REGB1)) {
          nit_abort("Reciever is null", NULL, LOCATE_global___cha_analysis, 106);
        }
        fra.me.REG[4] = CALL_icode___icode_base___IAbsCall___property(fra.me.REG[3])(fra.me.REG[3]);
        REGB1 = TAG_Bool(0);
        REGB0 = TAG_Bool(0);
        CALL_global___cha_analysis___ChaBuilder___add_search(fra.me.REG[5])(fra.me.REG[5], fra.me.REG[4], fra.me.REG[6], REGB1, REGB0);
      }
    } else {
      /* global/cha_analysis.nit:108 */
      REGB0 = TAG_Bool((fra.me.REG[3]!=NIT_NULL) && VAL_ISA(fra.me.REG[3], COLOR_icode___icode_base___ISuper, ID_icode___icode_base___ISuper)) /*cast ISuper*/;
      if (UNTAG_Bool(REGB0)) {
        /* global/cha_analysis.nit:109 */
        fra.me.REG[6] = CALL_global___cha_analysis___ChaVisitor___builder(fra.me.REG[2])(fra.me.REG[2]);
        REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
        if (UNTAG_Bool(REGB0)) {
          nit_abort("Reciever is null", NULL, LOCATE_global___cha_analysis, 109);
        }
        fra.me.REG[4] = CALL_icode___icode_base___IAbsCall___property(fra.me.REG[3])(fra.me.REG[3]);
        REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
        if (UNTAG_Bool(REGB0)) {
          nit_abort("Reciever is null", NULL, LOCATE_global___cha_analysis, 109);
        }
        fra.me.REG[5] = CALL_icode___icode_base___IAbsCall___property(fra.me.REG[3])(fra.me.REG[3]);
        fra.me.REG[5] = CALL_icode___icode_base___MMMethod___iroutine(fra.me.REG[5])(fra.me.REG[5]);
        REGB0 = TAG_Bool(0);
        REGB1 = TAG_Bool(1);
        CALL_global___cha_analysis___ChaBuilder___add_search(fra.me.REG[6])(fra.me.REG[6], fra.me.REG[4], fra.me.REG[5], REGB0, REGB1);
      } else {
        /* global/cha_analysis.nit:110 */
        REGB1 = TAG_Bool((fra.me.REG[3]!=NIT_NULL) && VAL_ISA(fra.me.REG[3], COLOR_icode___icode_base___ICall, ID_icode___icode_base___ICall)) /*cast ICall*/;
        if (UNTAG_Bool(REGB1)) {
          /* global/cha_analysis.nit:111 */
          fra.me.REG[5] = CALL_global___cha_analysis___ChaVisitor___builder(fra.me.REG[2])(fra.me.REG[2]);
          REGB1 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
          if (UNTAG_Bool(REGB1)) {
            nit_abort("Reciever is null", NULL, LOCATE_global___cha_analysis, 111);
          }
          fra.me.REG[4] = CALL_icode___icode_base___IAbsCall___property(fra.me.REG[3])(fra.me.REG[3]);
          REGB1 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
          if (UNTAG_Bool(REGB1)) {
            nit_abort("Reciever is null", NULL, LOCATE_global___cha_analysis, 111);
          }
          fra.me.REG[6] = CALL_icode___icode_base___IAbsCall___property(fra.me.REG[3])(fra.me.REG[3]);
          fra.me.REG[6] = CALL_icode___icode_base___MMMethod___iroutine(fra.me.REG[6])(fra.me.REG[6]);
          REGB1 = TAG_Bool(0);
          REGB0 = TAG_Bool(0);
          CALL_global___cha_analysis___ChaBuilder___add_search(fra.me.REG[5])(fra.me.REG[5], fra.me.REG[4], fra.me.REG[6], REGB1, REGB0);
        } else {
          /* global/cha_analysis.nit:112 */
          REGB0 = TAG_Bool((fra.me.REG[3]!=NIT_NULL) && VAL_ISA(fra.me.REG[3], COLOR_icode___icode_base___ICheckInstance, ID_icode___icode_base___ICheckInstance)) /*cast ICheckInstance*/;
          if (UNTAG_Bool(REGB0)) {
            /* global/cha_analysis.nit:113 */
            REGB0 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
            if (UNTAG_Bool(REGB0)) {
              nit_abort("Reciever is null", NULL, LOCATE_global___cha_analysis, 113);
            }
            fra.me.REG[6] = CALL_icode___icode_base___ICheckInstance___stype(fra.me.REG[3])(fra.me.REG[3]);
            /* global/cha_analysis.nit:114 */
            fra.me.REG[4] = CALL_global___cha_analysis___ChaVisitor___builder(fra.me.REG[2])(fra.me.REG[2]);
            fra.me.REG[4] = CALL_global___cha_analysis___ChaBuilder___program(fra.me.REG[4])(fra.me.REG[4]);
            fra.me.REG[4] = CALL_program___Program___main_module(fra.me.REG[4])(fra.me.REG[4]);
            fra.me.REG[4] = CALL_metamodel___static_type___MMType___for_module(fra.me.REG[6])(fra.me.REG[6], fra.me.REG[4]);
            fra.me.REG[4] = CALL_metamodel___static_type___MMType___local_class(fra.me.REG[4])(fra.me.REG[4]);
            /* global/cha_analysis.nit:115 */
            fra.me.REG[4] = CALL_program___MMLocalClass___checknew_iroutine(fra.me.REG[4])(fra.me.REG[4]);
            /* global/cha_analysis.nit:116 */
            fra.me.REG[6] = CALL_global___cha_analysis___ChaVisitor___builder(fra.me.REG[2])(fra.me.REG[2]);
            REGB0 = TAG_Bool(1);
            REGB1 = TAG_Bool(0);
            CALL_global___cha_analysis___ChaBuilder___add_search(fra.me.REG[6])(fra.me.REG[6], NIT_NULL, fra.me.REG[4], REGB0, REGB1);
          } else {
            /* global/cha_analysis.nit:117 */
            REGB1 = TAG_Bool((fra.me.REG[3]!=NIT_NULL) && VAL_ISA(fra.me.REG[3], COLOR_icode___icode_base___IInitAttributes, ID_icode___icode_base___IInitAttributes)) /*cast IInitAttributes*/;
            if (UNTAG_Bool(REGB1)) {
              /* global/cha_analysis.nit:118 */
              REGB1 = TAG_Bool(fra.me.REG[3]==NIT_NULL);
              if (UNTAG_Bool(REGB1)) {
		nit_abort("Reciever is null", NULL, LOCATE_global___cha_analysis, 118);
              }
              fra.me.REG[3] = CALL_icode___icode_base___IInitAttributes___stype(fra.me.REG[3])(fra.me.REG[3]);
              /* global/cha_analysis.nit:119 */
              fra.me.REG[4] = CALL_global___cha_analysis___ChaVisitor___builder(fra.me.REG[2])(fra.me.REG[2]);
              fra.me.REG[4] = CALL_global___cha_analysis___ChaBuilder___program(fra.me.REG[4])(fra.me.REG[4]);
              fra.me.REG[4] = CALL_program___Program___main_module(fra.me.REG[4])(fra.me.REG[4]);
              fra.me.REG[4] = CALL_metamodel___static_type___MMType___for_module(fra.me.REG[3])(fra.me.REG[3], fra.me.REG[4]);
              fra.me.REG[4] = CALL_metamodel___static_type___MMType___local_class(fra.me.REG[4])(fra.me.REG[4]);
              /* global/cha_analysis.nit:120 */
              fra.me.REG[4] = CALL_program___MMLocalClass___init_var_iroutine(fra.me.REG[4])(fra.me.REG[4]);
              /* global/cha_analysis.nit:121 */
              fra.me.REG[2] = CALL_global___cha_analysis___ChaVisitor___builder(fra.me.REG[2])(fra.me.REG[2]);
              REGB1 = TAG_Bool(1);
              REGB0 = TAG_Bool(0);
              CALL_global___cha_analysis___ChaBuilder___add_search(fra.me.REG[2])(fra.me.REG[2], NIT_NULL, fra.me.REG[4], REGB1, REGB0);
            }
          }
        }
      }
    }
  }
  /* global/cha_analysis.nit:123 */
  CALL_SUPER_global___cha_analysis___ChaVisitor___visit_icode(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1]);
  stack_frame_head = fra.me.prev;
  return;
}
static const char LOCATE_global___cha_analysis___ChaVisitor___init[] = "cha_analysis::ChaVisitor::init";
void global___cha_analysis___ChaVisitor___init(val_t p0, val_t p1, int* init_table){
  int itpos2 = VAL2OBJ(p0)->vft[INIT_TABLE_POS_global___cha_analysis___ChaVisitor].i;
  struct {struct stack_frame_t me; val_t MORE_REG[2];} fra;
  val_t tmp;
  if (init_table[itpos2]) return;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_global___cha_analysis;
  fra.me.line = 126;
  fra.me.meth = LOCATE_global___cha_analysis___ChaVisitor___init;
  fra.me.has_broke = 0;
  fra.me.REG_size = 3;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[2] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* global/cha_analysis.nit:126 */
  fra.me.REG[2] = fra.me.REG[0];
  CALL_icode___icode_tools___ICodeVisitor___init(fra.me.REG[0])(fra.me.REG[0], init_table);
  /* global/cha_analysis.nit:128 */
  ATTR_global___cha_analysis___ChaVisitor____builder(fra.me.REG[2]) = fra.me.REG[1];
  stack_frame_head = fra.me.prev;
  init_table[itpos2] = 1;
  return;
}
