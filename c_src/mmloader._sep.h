/* This C header file is generated by NIT to compile modules and programs that requires ./mmloader. */
#ifndef mmloader_sep
#define mmloader_sep
#include "metamodel._sep.h"
#include "toolcontext._sep.h"
#include <nit_common.h>

extern const classtable_elt_t VFT_mmloader___ModuleLoader[];
extern const char LOCATE_mmloader[];
extern const int SFT_mmloader[];
#define ATTR_mmloader___ToolContext____paths(recv) ATTR(recv, (SFT_mmloader[0] + 0))
#define ATTR_mmloader___ToolContext____loaders(recv) ATTR(recv, (SFT_mmloader[0] + 1))
#define ATTR_mmloader___ToolContext____opt_path(recv) ATTR(recv, (SFT_mmloader[0] + 2))
#define ATTR_mmloader___ToolContext____opt_only_metamodel(recv) ATTR(recv, (SFT_mmloader[0] + 3))
#define ATTR_mmloader___ToolContext____opt_only_parse(recv) ATTR(recv, (SFT_mmloader[0] + 4))
#define ATTR_mmloader___ToolContext____processing_modules(recv) ATTR(recv, (SFT_mmloader[0] + 5))
#define ATTR_mmloader___ToolContext____path_dirs(recv) ATTR(recv, (SFT_mmloader[0] + 6))
#define CALL_mmloader___ToolContext___paths(recv) ((mmloader___ToolContext___paths_t)CALL((recv), (SFT_mmloader[1] + 0)))
#define CALL_mmloader___ToolContext___opt_path(recv) ((mmloader___ToolContext___opt_path_t)CALL((recv), (SFT_mmloader[1] + 1)))
#define CALL_mmloader___ToolContext___opt_only_metamodel(recv) ((mmloader___ToolContext___opt_only_metamodel_t)CALL((recv), (SFT_mmloader[1] + 2)))
#define CALL_mmloader___ToolContext___opt_only_parse(recv) ((mmloader___ToolContext___opt_only_parse_t)CALL((recv), (SFT_mmloader[1] + 3)))
#define CALL_SUPER_mmloader___ToolContext___init(recv) ((mmloader___ToolContext___init_t)CALL((recv), (SFT_mmloader[1] + 4)))
#define CALL_SUPER_mmloader___ToolContext___process_options(recv) ((mmloader___ToolContext___process_options_t)CALL((recv), (SFT_mmloader[1] + 5)))
#define CALL_mmloader___ToolContext___try_to_load(recv) ((mmloader___ToolContext___try_to_load_t)CALL((recv), (SFT_mmloader[1] + 6)))
#define CALL_mmloader___ToolContext___get_module_from_filename(recv) ((mmloader___ToolContext___get_module_from_filename_t)CALL((recv), (SFT_mmloader[1] + 7)))
#define CALL_mmloader___ToolContext___get_module(recv) ((mmloader___ToolContext___get_module_t)CALL((recv), (SFT_mmloader[1] + 8)))
#define CALL_mmloader___ToolContext___directory_for(recv) ((mmloader___ToolContext___directory_for_t)CALL((recv), (SFT_mmloader[1] + 9)))
#define CALL_mmloader___ToolContext___register_loader(recv) ((mmloader___ToolContext___register_loader_t)CALL((recv), (SFT_mmloader[1] + 10)))
#define ID_mmloader___ModuleLoader (SFT_mmloader[2])
#define COLOR_mmloader___ModuleLoader (SFT_mmloader[3])
#define INIT_TABLE_POS_mmloader___ModuleLoader (SFT_mmloader[4] + 0)
#define VTID_mmloader___ModuleLoader___MODULE(recv) (VAL2VFT(recv)[SFT_mmloader[4] + 1].i)
#define VTCOLOR_mmloader___ModuleLoader___MODULE(recv) (VAL2VFT(recv)[SFT_mmloader[4] + 2].i)
#define CALL_mmloader___ModuleLoader___file_type(recv) ((mmloader___ModuleLoader___file_type_t)CALL((recv), (SFT_mmloader[4] + 3)))
#define CALL_mmloader___ModuleLoader___try_to_load_dir(recv) ((mmloader___ModuleLoader___try_to_load_dir_t)CALL((recv), (SFT_mmloader[4] + 4)))
#define CALL_mmloader___ModuleLoader___can_handle(recv) ((mmloader___ModuleLoader___can_handle_t)CALL((recv), (SFT_mmloader[4] + 5)))
#define CALL_mmloader___ModuleLoader___load_and_process_module(recv) ((mmloader___ModuleLoader___load_and_process_module_t)CALL((recv), (SFT_mmloader[4] + 6)))
#define CALL_mmloader___ModuleLoader___load_module(recv) ((mmloader___ModuleLoader___load_module_t)CALL((recv), (SFT_mmloader[4] + 7)))
#define CALL_mmloader___ModuleLoader___parse_file(recv) ((mmloader___ModuleLoader___parse_file_t)CALL((recv), (SFT_mmloader[4] + 8)))
#define CALL_mmloader___ModuleLoader___process_metamodel(recv) ((mmloader___ModuleLoader___process_metamodel_t)CALL((recv), (SFT_mmloader[4] + 9)))
val_t mmloader___ToolContext___paths(val_t p0);
typedef val_t (*mmloader___ToolContext___paths_t)(val_t p0);
val_t mmloader___ToolContext___opt_path(val_t p0);
typedef val_t (*mmloader___ToolContext___opt_path_t)(val_t p0);
val_t mmloader___ToolContext___opt_only_metamodel(val_t p0);
typedef val_t (*mmloader___ToolContext___opt_only_metamodel_t)(val_t p0);
val_t mmloader___ToolContext___opt_only_parse(val_t p0);
typedef val_t (*mmloader___ToolContext___opt_only_parse_t)(val_t p0);
void mmloader___ToolContext___init(val_t p0, int* init_table);
typedef void (*mmloader___ToolContext___init_t)(val_t p0, int* init_table);
val_t NEW_ToolContext_toolcontext___ToolContext___init();
void mmloader___ToolContext___process_options(val_t p0);
typedef void (*mmloader___ToolContext___process_options_t)(val_t p0);
val_t mmloader___ToolContext___try_to_load(val_t p0, val_t p1, val_t p2);
typedef val_t (*mmloader___ToolContext___try_to_load_t)(val_t p0, val_t p1, val_t p2);
  typedef void (*CLOS_OC_mmloader___ToolContext___try_to_load_1_0)(struct stack_frame_t *);
  void OC_mmloader___ToolContext___try_to_load_1(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
  typedef void (*OC_mmloader___ToolContext___try_to_load_1_t)(struct stack_frame_t *closctx, val_t p0, struct stack_frame_t *closctx_param, fun_t clos_fun0);
val_t mmloader___ToolContext___get_module_from_filename(val_t p0, val_t p1);
typedef val_t (*mmloader___ToolContext___get_module_from_filename_t)(val_t p0, val_t p1);
val_t mmloader___ToolContext___get_module(val_t p0, val_t p1, val_t p2);
typedef val_t (*mmloader___ToolContext___get_module_t)(val_t p0, val_t p1, val_t p2);
val_t mmloader___ToolContext___directory_for(val_t p0, val_t p1);
typedef val_t (*mmloader___ToolContext___directory_for_t)(val_t p0, val_t p1);
void mmloader___ToolContext___register_loader(val_t p0, val_t p1);
typedef void (*mmloader___ToolContext___register_loader_t)(val_t p0, val_t p1);
val_t mmloader___ModuleLoader___file_type(val_t p0);
typedef val_t (*mmloader___ModuleLoader___file_type_t)(val_t p0);
val_t mmloader___ModuleLoader___try_to_load_dir(val_t p0, val_t p1, val_t p2);
typedef val_t (*mmloader___ModuleLoader___try_to_load_dir_t)(val_t p0, val_t p1, val_t p2);
val_t mmloader___ModuleLoader___can_handle(val_t p0, val_t p1, val_t p2);
typedef val_t (*mmloader___ModuleLoader___can_handle_t)(val_t p0, val_t p1, val_t p2);
val_t mmloader___ModuleLoader___load_and_process_module(val_t p0, val_t p1, val_t p2, val_t p3);
typedef val_t (*mmloader___ModuleLoader___load_and_process_module_t)(val_t p0, val_t p1, val_t p2, val_t p3);
val_t mmloader___ModuleLoader___load_module(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4);
typedef val_t (*mmloader___ModuleLoader___load_module_t)(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4);
val_t mmloader___ModuleLoader___parse_file(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4, val_t p5);
typedef val_t (*mmloader___ModuleLoader___parse_file_t)(val_t p0, val_t p1, val_t p2, val_t p3, val_t p4, val_t p5);
void mmloader___ModuleLoader___process_metamodel(val_t p0, val_t p1, val_t p2);
typedef void (*mmloader___ModuleLoader___process_metamodel_t)(val_t p0, val_t p1, val_t p2);
#endif
