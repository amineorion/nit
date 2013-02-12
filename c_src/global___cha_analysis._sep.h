/* This C header file is generated by NIT to compile modules and programs that requires ./global/cha_analysis. */
#ifndef global___cha_analysis_sep
#define global___cha_analysis_sep
#include "global___reachable_method_analysis._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_global___cha_analysis___ChaContext[];

extern const classtable_elt_t VFT_global___cha_analysis___ChaBuilder[];

extern const classtable_elt_t VFT_global___cha_analysis___ChaVisitor[];
extern const char LOCATE_global___cha_analysis[];
extern const int SFT_global___cha_analysis[];
#define ID_global___cha_analysis___ChaContext (SFT_global___cha_analysis[0])
#define COLOR_global___cha_analysis___ChaContext (SFT_global___cha_analysis[1])
#define ATTR_global___cha_analysis___ChaContext____reachable_iroutines(recv) ATTR(recv, (SFT_global___cha_analysis[2] + 0))
#define INIT_TABLE_POS_global___cha_analysis___ChaContext (SFT_global___cha_analysis[3] + 0)
#define CALL_global___cha_analysis___ChaContext___reachable_iroutines(recv) ((global___cha_analysis___ChaContext___reachable_iroutines_t)CALL((recv), (SFT_global___cha_analysis[3] + 1)))
#define CALL_global___cha_analysis___ChaContext___init(recv) ((global___cha_analysis___ChaContext___init_t)CALL((recv), (SFT_global___cha_analysis[3] + 2)))
#define ID_global___cha_analysis___ChaBuilder (SFT_global___cha_analysis[4])
#define COLOR_global___cha_analysis___ChaBuilder (SFT_global___cha_analysis[5])
#define ATTR_global___cha_analysis___ChaBuilder____iroutine_to_search(recv) ATTR(recv, (SFT_global___cha_analysis[6] + 0))
#define ATTR_global___cha_analysis___ChaBuilder____context(recv) ATTR(recv, (SFT_global___cha_analysis[6] + 1))
#define ATTR_global___cha_analysis___ChaBuilder____program(recv) ATTR(recv, (SFT_global___cha_analysis[6] + 2))
#define INIT_TABLE_POS_global___cha_analysis___ChaBuilder (SFT_global___cha_analysis[7] + 0)
#define CALL_global___cha_analysis___ChaBuilder___iroutine_to_search(recv) ((global___cha_analysis___ChaBuilder___iroutine_to_search_t)CALL((recv), (SFT_global___cha_analysis[7] + 1)))
#define CALL_global___cha_analysis___ChaBuilder___context(recv) ((global___cha_analysis___ChaBuilder___context_t)CALL((recv), (SFT_global___cha_analysis[7] + 2)))
#define CALL_global___cha_analysis___ChaBuilder___program(recv) ((global___cha_analysis___ChaBuilder___program_t)CALL((recv), (SFT_global___cha_analysis[7] + 3)))
#define CALL_global___cha_analysis___ChaBuilder___init(recv) ((global___cha_analysis___ChaBuilder___init_t)CALL((recv), (SFT_global___cha_analysis[7] + 4)))
#define CALL_global___cha_analysis___ChaBuilder___add_search(recv) ((global___cha_analysis___ChaBuilder___add_search_t)CALL((recv), (SFT_global___cha_analysis[7] + 5)))
#define CALL_global___cha_analysis___ChaBuilder___work(recv) ((global___cha_analysis___ChaBuilder___work_t)CALL((recv), (SFT_global___cha_analysis[7] + 6)))
#define ID_global___cha_analysis___ChaVisitor (SFT_global___cha_analysis[8])
#define COLOR_global___cha_analysis___ChaVisitor (SFT_global___cha_analysis[9])
#define ATTR_global___cha_analysis___ChaVisitor____builder(recv) ATTR(recv, (SFT_global___cha_analysis[10] + 0))
#define INIT_TABLE_POS_global___cha_analysis___ChaVisitor (SFT_global___cha_analysis[11] + 0)
#define CALL_global___cha_analysis___ChaVisitor___builder(recv) ((global___cha_analysis___ChaVisitor___builder_t)CALL((recv), (SFT_global___cha_analysis[11] + 1)))
#define CALL_SUPER_global___cha_analysis___ChaVisitor___visit_icode(recv) ((global___cha_analysis___ChaVisitor___visit_icode_t)CALL((recv), (SFT_global___cha_analysis[11] + 2)))
#define CALL_global___cha_analysis___ChaVisitor___init(recv) ((global___cha_analysis___ChaVisitor___init_t)CALL((recv), (SFT_global___cha_analysis[11] + 3)))
val_t global___cha_analysis___ChaContext___reachable_iroutines(val_t p0);
typedef val_t (*global___cha_analysis___ChaContext___reachable_iroutines_t)(val_t p0);
val_t global___cha_analysis___ChaContext___is_iroutine_reachable(val_t p0, val_t p1);
typedef val_t (*global___cha_analysis___ChaContext___is_iroutine_reachable_t)(val_t p0, val_t p1);
val_t global___cha_analysis___ChaContext___is_method_reachable(val_t p0, val_t p1);
typedef val_t (*global___cha_analysis___ChaContext___is_method_reachable_t)(val_t p0, val_t p1);
void global___cha_analysis___ChaContext___init(val_t p0, int* init_table);
typedef void (*global___cha_analysis___ChaContext___init_t)(val_t p0, int* init_table);
val_t NEW_ChaContext_global___cha_analysis___ChaContext___init();
val_t global___cha_analysis___ChaBuilder___iroutine_to_search(val_t p0);
typedef val_t (*global___cha_analysis___ChaBuilder___iroutine_to_search_t)(val_t p0);
val_t global___cha_analysis___ChaBuilder___context(val_t p0);
typedef val_t (*global___cha_analysis___ChaBuilder___context_t)(val_t p0);
val_t global___cha_analysis___ChaBuilder___program(val_t p0);
typedef val_t (*global___cha_analysis___ChaBuilder___program_t)(val_t p0);
void global___cha_analysis___ChaBuilder___init(val_t p0, val_t p1, int* init_table);
typedef void (*global___cha_analysis___ChaBuilder___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_ChaBuilder_global___cha_analysis___ChaBuilder___init(val_t p0);
void global___cha_analysis___ChaBuilder___add_search(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4);
typedef void (*global___cha_analysis___ChaBuilder___add_search_t)(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4);
      typedef void (*CLOS_OC_global___cha_analysis___ChaBuilder___add_search_1_0)(struct stack_frame_t *);
      void OC_global___cha_analysis___ChaBuilder___add_search_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
      typedef void (*OC_global___cha_analysis___ChaBuilder___add_search_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
      typedef void (*CLOS_OC_global___cha_analysis___ChaBuilder___add_search_2_0)(struct stack_frame_t *);
      void OC_global___cha_analysis___ChaBuilder___add_search_2(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
      typedef void (*OC_global___cha_analysis___ChaBuilder___add_search_2_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
void global___cha_analysis___ChaBuilder___work(val_t p0);
typedef void (*global___cha_analysis___ChaBuilder___work_t)(val_t p0);
val_t global___cha_analysis___ChaVisitor___builder(val_t p0);
typedef val_t (*global___cha_analysis___ChaVisitor___builder_t)(val_t p0);
void global___cha_analysis___ChaVisitor___visit_icode(val_t p0, val_t p1);
typedef void (*global___cha_analysis___ChaVisitor___visit_icode_t)(val_t p0, val_t p1);
void global___cha_analysis___ChaVisitor___init(val_t p0, val_t p1, int* init_table);
typedef void (*global___cha_analysis___ChaVisitor___init_t)(val_t p0, val_t p1, int* init_table);
val_t NEW_ChaVisitor_global___cha_analysis___ChaVisitor___init(val_t p0);
#endif
