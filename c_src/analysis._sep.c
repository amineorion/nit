/* This C file is generated by NIT to compile module analysis. */
#include "analysis._sep.h"
static const char LOCATE_analysis___IRoutine___optimize[] = "analysis::IRoutine::optimize";
void analysis___IRoutine___optimize(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[1];} fra;
  val_t tmp;
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_analysis;
  fra.me.line = 31;
  fra.me.meth = LOCATE_analysis___IRoutine___optimize;
  fra.me.has_broke = 0;
  fra.me.REG_size = 2;
  fra.me.nitni_local_ref_head = NULL;
  fra.me.REG[0] = NIT_NULL;
  fra.me.REG[1] = NIT_NULL;
  fra.me.REG[0] = p0;
  fra.me.REG[1] = p1;
  /* analysis/analysis.nit:34 */
  CALL_analysis___inline_methods___IRoutine___inline_methods(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1]);
  /* analysis/analysis.nit:35 */
  CALL_analysis___allocate_iregister_slots___IRoutine___allocate_iregister_slots(fra.me.REG[0])(fra.me.REG[0]);
  stack_frame_head = fra.me.prev;
  return;
}
