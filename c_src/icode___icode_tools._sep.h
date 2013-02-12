/* This C header file is generated by NIT to compile modules and programs that requires ./icode/icode_tools. */
#ifndef icode___icode_tools_sep
#define icode___icode_tools_sep
#include "icode___icode_builder._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_icode___icode_tools___ICodeVisitor[];

extern const classtable_elt_t VFT_icode___icode_tools___ICodeDupContext[];
extern const char LOCATE_icode___icode_tools[];
extern const int SFT_icode___icode_tools[];
#define ID_icode___icode_tools___ICodeVisitor (SFT_icode___icode_tools[0])
#define COLOR_icode___icode_tools___ICodeVisitor (SFT_icode___icode_tools[1])
#define ATTR_icode___icode_tools___ICodeVisitor____current_icode(recv) ATTR(recv, (SFT_icode___icode_tools[2] + 0))
#define INIT_TABLE_POS_icode___icode_tools___ICodeVisitor (SFT_icode___icode_tools[3] + 0)
#define CALL_icode___icode_tools___ICodeVisitor___visit_iregister_read(recv) ((icode___icode_tools___ICodeVisitor___visit_iregister_read_t)CALL((recv), (SFT_icode___icode_tools[3] + 1)))
#define CALL_icode___icode_tools___ICodeVisitor___visit_iregister_write(recv) ((icode___icode_tools___ICodeVisitor___visit_iregister_write_t)CALL((recv), (SFT_icode___icode_tools[3] + 2)))
#define CALL_icode___icode_tools___ICodeVisitor___current_icode(recv) ((icode___icode_tools___ICodeVisitor___current_icode_t)CALL((recv), (SFT_icode___icode_tools[3] + 3)))
#define CALL_icode___icode_tools___ICodeVisitor___visit_icode(recv) ((icode___icode_tools___ICodeVisitor___visit_icode_t)CALL((recv), (SFT_icode___icode_tools[3] + 4)))
#define CALL_icode___icode_tools___ICodeVisitor___visit_closure_defs(recv) ((icode___icode_tools___ICodeVisitor___visit_closure_defs_t)CALL((recv), (SFT_icode___icode_tools[3] + 5)))
#define CALL_icode___icode_tools___ICodeVisitor___visit_iroutine(recv) ((icode___icode_tools___ICodeVisitor___visit_iroutine_t)CALL((recv), (SFT_icode___icode_tools[3] + 6)))
#define CALL_icode___icode_tools___ICodeVisitor___init(recv) ((icode___icode_tools___ICodeVisitor___init_t)CALL((recv), (SFT_icode___icode_tools[3] + 7)))
#define CALL_icode___icode_tools___ICodeBuilder___inline_routine(recv) ((icode___icode_tools___ICodeBuilder___inline_routine_t)CALL((recv), (SFT_icode___icode_tools[4] + 0)))
#define ID_icode___icode_tools___ICodeDupContext (SFT_icode___icode_tools[5])
#define COLOR_icode___icode_tools___ICodeDupContext (SFT_icode___icode_tools[6])
#define ATTR_icode___icode_tools___ICodeDupContext____registers(recv) ATTR(recv, (SFT_icode___icode_tools[7] + 0))
#define ATTR_icode___icode_tools___ICodeDupContext____marks(recv) ATTR(recv, (SFT_icode___icode_tools[7] + 1))
#define ATTR_icode___icode_tools___ICodeDupContext____closures(recv) ATTR(recv, (SFT_icode___icode_tools[7] + 2))
#define ATTR_icode___icode_tools___ICodeDupContext____icb(recv) ATTR(recv, (SFT_icode___icode_tools[7] + 3))
#define INIT_TABLE_POS_icode___icode_tools___ICodeDupContext (SFT_icode___icode_tools[8] + 0)
#define CALL_icode___icode_tools___ICodeDupContext___dup_ireg(recv) ((icode___icode_tools___ICodeDupContext___dup_ireg_t)CALL((recv), (SFT_icode___icode_tools[8] + 1)))
#define CALL_icode___icode_tools___ICodeDupContext___dup_iregs(recv) ((icode___icode_tools___ICodeDupContext___dup_iregs_t)CALL((recv), (SFT_icode___icode_tools[8] + 2)))
#define CALL_icode___icode_tools___ICodeDupContext___dup_mark(recv) ((icode___icode_tools___ICodeDupContext___dup_mark_t)CALL((recv), (SFT_icode___icode_tools[8] + 3)))
#define CALL_icode___icode_tools___ICodeDupContext___init(recv) ((icode___icode_tools___ICodeDupContext___init_t)CALL((recv), (SFT_icode___icode_tools[8] + 4)))
#define CALL_icode___icode_tools___ICode___dup_with(recv) ((icode___icode_tools___ICode___dup_with_t)CALL((recv), (SFT_icode___icode_tools[9] + 0)))
#define CALL_icode___icode_tools___ICode___inner_dup_with(recv) ((icode___icode_tools___ICode___inner_dup_with_t)CALL((recv), (SFT_icode___icode_tools[9] + 1)))
#define CALL_icode___icode_tools___ISeq___dup_seq_to(recv) ((icode___icode_tools___ISeq___dup_seq_to_t)CALL((recv), (SFT_icode___icode_tools[10] + 0)))
#define CALL_SUPER_icode___icode_tools___IClosCall___dup_with(recv) ((icode___icode_tools___IClosCall___dup_with_t)CALL((recv), (SFT_icode___icode_tools[11] + 0)))
void icode___icode_tools___ICodeVisitor___visit_iregister_read(val_t p0, val_t p1, val_t p2);
typedef void (*icode___icode_tools___ICodeVisitor___visit_iregister_read_t)(val_t p0, val_t p1, val_t p2);
void icode___icode_tools___ICodeVisitor___visit_iregister_write(val_t p0, val_t p1, val_t p2);
typedef void (*icode___icode_tools___ICodeVisitor___visit_iregister_write_t)(val_t p0, val_t p1, val_t p2);
val_t icode___icode_tools___ICodeVisitor___current_icode(val_t p0);
typedef val_t (*icode___icode_tools___ICodeVisitor___current_icode_t)(val_t p0);
void icode___icode_tools___ICodeVisitor___visit_icode(val_t p0, val_t p1);
typedef void (*icode___icode_tools___ICodeVisitor___visit_icode_t)(val_t p0, val_t p1);
              typedef void (*CLOS_OC_icode___icode_tools___ICodeVisitor___visit_icode_3_0)(struct stack_frame_t *);
              void OC_icode___icode_tools___ICodeVisitor___visit_icode_3(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
              typedef void (*OC_icode___icode_tools___ICodeVisitor___visit_icode_3_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
void icode___icode_tools___ICodeVisitor___visit_closure_defs(val_t p0, val_t p1);
typedef void (*icode___icode_tools___ICodeVisitor___visit_closure_defs_t)(val_t p0, val_t p1);
  typedef void (*CLOS_OC_icode___icode_tools___ICodeVisitor___visit_closure_defs_1_0)(struct stack_frame_t *);
  void OC_icode___icode_tools___ICodeVisitor___visit_closure_defs_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_icode___icode_tools___ICodeVisitor___visit_closure_defs_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
void icode___icode_tools___ICodeVisitor___visit_iroutine(val_t p0, val_t p1);
typedef void (*icode___icode_tools___ICodeVisitor___visit_iroutine_t)(val_t p0, val_t p1);
void icode___icode_tools___ICodeVisitor___init(val_t p0, int* init_table);
typedef void (*icode___icode_tools___ICodeVisitor___init_t)(val_t p0, int* init_table);
val_t NEW_ICodeVisitor_icode___icode_tools___ICodeVisitor___init();
val_t icode___icode_tools___ICodeBuilder___inline_routine(val_t p0, val_t p1, val_t p2, val_t p3);
typedef val_t (*icode___icode_tools___ICodeBuilder___inline_routine_t)(val_t p0, val_t p1, val_t p2, val_t p3);
  typedef void (*CLOS_OC_icode___icode_tools___ICodeBuilder___inline_routine_1_0)(struct stack_frame_t *);
  void OC_icode___icode_tools___ICodeBuilder___inline_routine_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_icode___icode_tools___ICodeBuilder___inline_routine_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*CLOS_OC_icode___icode_tools___ICodeBuilder___inline_routine_3_0)(struct stack_frame_t *);
  void OC_icode___icode_tools___ICodeBuilder___inline_routine_3(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_icode___icode_tools___ICodeBuilder___inline_routine_3_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
val_t NEW_ICodeBuilder_icode___icode_builder___ICodeBuilder___init(val_t p0, val_t p1);
val_t icode___icode_tools___ICodeDupContext___dup_ireg(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___ICodeDupContext___dup_ireg_t)(val_t p0, val_t p1);
val_t icode___icode_tools___ICodeDupContext___dup_iregs(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___ICodeDupContext___dup_iregs_t)(val_t p0, val_t p1);
  typedef void (*CLOS_OC_icode___icode_tools___ICodeDupContext___dup_iregs_1_0)(struct stack_frame_t *);
  void OC_icode___icode_tools___ICodeDupContext___dup_iregs_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_icode___icode_tools___ICodeDupContext___dup_iregs_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
val_t icode___icode_tools___ICodeDupContext___dup_mark(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___ICodeDupContext___dup_mark_t)(val_t p0, val_t p1);
void icode___icode_tools___ICodeDupContext___init(val_t p0, val_t p1, int* init_table);
typedef void (*icode___icode_tools___ICodeDupContext___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_ICodeDupContext_icode___icode_tools___ICodeDupContext___init(val_t p0);
void icode___icode_tools___ICode___dup_with(val_t p0, val_t p1);
typedef void (*icode___icode_tools___ICode___dup_with_t)(val_t p0, val_t p1);
      typedef void (*CLOS_OC_icode___icode_tools___ICode___dup_with_1_0)(struct stack_frame_t *);
      void OC_icode___icode_tools___ICode___dup_with_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
      typedef void (*OC_icode___icode_tools___ICode___dup_with_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
val_t icode___icode_tools___ICode___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___ICode___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_ICode_icode___icode_base___ICode___init();
val_t icode___icode_tools___ISeq___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___ISeq___inner_dup_with_t)(val_t p0, val_t p1);
void icode___icode_tools___ISeq___dup_seq_to(val_t p0, val_t p1, val_t p2);
typedef void (*icode___icode_tools___ISeq___dup_seq_to_t)(val_t p0, val_t p1, val_t p2);
  typedef void (*CLOS_OC_icode___icode_tools___ISeq___dup_seq_to_1_0)(struct stack_frame_t *);
  void OC_icode___icode_tools___ISeq___dup_seq_to_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_icode___icode_tools___ISeq___dup_seq_to_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
val_t NEW_ISeq_icode___icode_base___ISeq___init();
val_t icode___icode_tools___ILoop___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___ILoop___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_ILoop_icode___icode_base___ILoop___init();
val_t icode___icode_tools___IIf___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IIf___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IIf_icode___icode_base___IIf___init(val_t p0);
val_t icode___icode_tools___IEscape___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IEscape___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IEscape_icode___icode_base___IEscape___init(val_t p0);
val_t icode___icode_tools___IAbort___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IAbort___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IAbort_icode___icode_base___IAbort___init(val_t p0, val_t p1);
val_t icode___icode_tools___ICall___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___ICall___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_ICall_icode___icode_base___ICall___init(val_t p0, val_t p1);
val_t icode___icode_tools___ISuper___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___ISuper___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_ISuper_icode___icode_base___ISuper___init(val_t p0, val_t p1);
val_t icode___icode_tools___INew___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___INew___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_INew_icode___icode_base___INew___init(val_t p0, val_t p1, val_t p2);
val_t icode___icode_tools___IAllocateInstance___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IAllocateInstance___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IAllocateInstance_icode___icode_base___IAllocateInstance___init(val_t p0);
val_t icode___icode_tools___IStaticCall___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IStaticCall___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IStaticCall_icode___icode_base___IStaticCall___init(val_t p0, val_t p1);
val_t icode___icode_tools___ICheckInstance___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___ICheckInstance___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_ICheckInstance_icode___icode_base___ICheckInstance___init(val_t p0, val_t p1);
val_t icode___icode_tools___IInitAttributes___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IInitAttributes___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IInitAttributes_icode___icode_base___IInitAttributes___init(val_t p0, val_t p1);
void icode___icode_tools___IClosCall___dup_with(val_t p0, val_t p1);
typedef void (*icode___icode_tools___IClosCall___dup_with_t)(val_t p0, val_t p1);
val_t icode___icode_tools___IClosCall___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IClosCall___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IClosCall_icode___icode_base___IClosCall___init(val_t p0, val_t p1);
val_t icode___icode_tools___INative___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___INative___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_INative_icode___icode_base___INative___init(val_t p0, val_t p1);
val_t icode___icode_tools___IIntValue___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IIntValue___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IIntValue_icode___icode_base___IIntValue___init(val_t p0);
val_t icode___icode_tools___IBoolValue___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IBoolValue___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IBoolValue_icode___icode_base___IBoolValue___init(val_t p0);
val_t icode___icode_tools___IStringValue___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IStringValue___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IStringValue_icode___icode_base___IStringValue___init(val_t p0);
val_t icode___icode_tools___IFloatValue___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IFloatValue___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IFloatValue_icode___icode_base___IFloatValue___init(val_t p0);
val_t icode___icode_tools___ICharValue___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___ICharValue___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_ICharValue_icode___icode_base___ICharValue___init(val_t p0);
val_t icode___icode_tools___IMove___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IMove___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IMove_icode___icode_base___IMove___init(val_t p0, val_t p1);
val_t icode___icode_tools___IAttrRead___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IAttrRead___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IAttrRead_icode___icode_base___IAttrRead___init(val_t p0, val_t p1);
val_t icode___icode_tools___IAttrWrite___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IAttrWrite___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IAttrWrite_icode___icode_base___IAttrWrite___init(val_t p0, val_t p1, val_t p2);
val_t icode___icode_tools___IAttrIsset___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IAttrIsset___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IAttrIsset_icode___icode_base___IAttrIsset___init(val_t p0, val_t p1);
val_t icode___icode_tools___ITypeCheck___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___ITypeCheck___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_ITypeCheck_icode___icode_base___ITypeCheck___init(val_t p0, val_t p1, val_t p2);
val_t icode___icode_tools___IIs___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IIs___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IIs_icode___icode_base___IIs___init(val_t p0, val_t p1);
val_t icode___icode_tools___INot___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___INot___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_INot_icode___icode_base___INot___init(val_t p0);
val_t icode___icode_tools___IOnce___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IOnce___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IOnce_icode___icode_base___IOnce___init();
val_t icode___icode_tools___IHasClos___inner_dup_with(val_t p0, val_t p1);
typedef val_t (*icode___icode_tools___IHasClos___inner_dup_with_t)(val_t p0, val_t p1);
val_t NEW_IHasClos_icode___icode_base___IHasClos___init(val_t p0);
#endif
