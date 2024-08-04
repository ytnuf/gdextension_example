
#ifndef HPP_GDEXAMPLE_REGISTER_TYPES_
#define HPP_GDEXAMPLE_REGISTER_TYPES_

#include <godot_cpp/core/class_db.hpp>

extern "C" GDExtensionBool GDE_EXPORT example_library_init(
        GDExtensionInterfaceGetProcAddress p_get_proc_address,
        GDExtensionClassLibraryPtr p_library,
        GDExtensionInitialization* r_initialization);

#endif // ifndef HPP_GDEXAMPLE_REGISTER_TYPES_
