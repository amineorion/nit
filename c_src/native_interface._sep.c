/* This C file is generated by NIT to compile module native_interface. */
#include "native_interface._sep.h"
static const char LOCATE_native_interface___MMSrcModule___compile_separate_module[] = "native_interface::MMSrcModule::(compiling::MMModule::compile_separate_module)";
void native_interface___MMSrcModule___compile_separate_module(val_t p0, val_t p1){
  struct {struct stack_frame_t me; val_t MORE_REG[6];} fra;
  val_t REGB0;
  val_t tmp;
    static val_t once_value_1; /* Once value */
    static val_t once_value_2; /* Once value */
    static val_t once_value_3; /* Once value */
  fra.me.prev = stack_frame_head; stack_frame_head = &fra.me;
  fra.me.file = LOCATE_native_interface;
  fra.me.line = 24;
  fra.me.meth = LOCATE_native_interface___MMSrcModule___compile_separate_module;
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
  /* native_interface/native_interface.nit:24 */
  fra.me.REG[2] = fra.me.REG[0];
  fra.me.REG[3] = fra.me.REG[1];
  /* native_interface/native_interface.nit:26 */
  REGB0 = CALL_metamodel___abstractmetamodel___MMModule___is_extern_hybrid(fra.me.REG[2])(fra.me.REG[2]);
  if (UNTAG_Bool(REGB0)) {
    /* native_interface/native_interface.nit:27 */
    fra.me.REG[4] = NEW_FrontierVisitor_native_interface___frontier___FrontierVisitor___init(fra.me.REG[2], fra.me.REG[3]);
    /* native_interface/native_interface.nit:28 */
    CALL_native_interface___frontier___MMSrcModule___compile_frontier(fra.me.REG[2])(fra.me.REG[2], fra.me.REG[4]);
    /* native_interface/native_interface.nit:30 */
    REGB0 = TAG_Int(5);
    fra.me.REG[5] = NEW_Array_standard___collection___array___Array___with_capacity(REGB0);
    if (!once_value_1) {
      fra.me.REG[6] = BOX_NativeString("");
      REGB0 = TAG_Int(0);
      fra.me.REG[6] = NEW_String_standard___string___String___with_native(fra.me.REG[6], REGB0);
      once_value_1 = fra.me.REG[6];
      register_static_object(&once_value_1);
    } else fra.me.REG[6] = once_value_1;
    fra.me.REG[6] = fra.me.REG[6];
    CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[5])(fra.me.REG[5], fra.me.REG[6]);
    fra.me.REG[3] = CALL_compiling___compiling_base___CProgram___compdir(fra.me.REG[3])(fra.me.REG[3]);
    CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[5])(fra.me.REG[5], fra.me.REG[3]);
    if (!once_value_2) {
      fra.me.REG[3] = BOX_NativeString("/");
      REGB0 = TAG_Int(1);
      fra.me.REG[3] = NEW_String_standard___string___String___with_native(fra.me.REG[3], REGB0);
      once_value_2 = fra.me.REG[3];
      register_static_object(&once_value_2);
    } else fra.me.REG[3] = once_value_2;
    fra.me.REG[3] = fra.me.REG[3];
    CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[5])(fra.me.REG[5], fra.me.REG[3]);
    fra.me.REG[2] = CALL_metamodel___abstractmetamodel___MMModule___name(fra.me.REG[2])(fra.me.REG[2]);
    fra.me.REG[2] = CALL_standard___string___Object___to_s(fra.me.REG[2])(fra.me.REG[2]);
    CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[5])(fra.me.REG[5], fra.me.REG[2]);
    if (!once_value_3) {
      fra.me.REG[2] = BOX_NativeString("");
      REGB0 = TAG_Int(0);
      fra.me.REG[2] = NEW_String_standard___string___String___with_native(fra.me.REG[2], REGB0);
      once_value_3 = fra.me.REG[2];
      register_static_object(&once_value_3);
    } else fra.me.REG[2] = once_value_3;
    fra.me.REG[2] = fra.me.REG[2];
    CALL_standard___collection___abstract_collection___SimpleCollection___add(fra.me.REG[5])(fra.me.REG[5], fra.me.REG[2]);
    fra.me.REG[5] = CALL_standard___string___Object___to_s(fra.me.REG[5])(fra.me.REG[5]);
    /* native_interface/native_interface.nit:31 */
    CALL_native_interface___frontier___FrontierVisitor___write_to_files(fra.me.REG[4])(fra.me.REG[4], fra.me.REG[5]);
  }
  /* native_interface/native_interface.nit:34 */
  CALL_SUPER_native_interface___MMSrcModule___compile_separate_module(fra.me.REG[0])(fra.me.REG[0], fra.me.REG[1]);
  stack_frame_head = fra.me.prev;
  return;
}
