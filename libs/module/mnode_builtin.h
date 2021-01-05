#ifndef MNODE_BUILTIN_H
#define MNODE_BUILTIN_H

#include "jerryscript.h"
#include "mnode_gpio_port.h"
typedef jerry_value_t (*module_register_fn)();

typedef struct
{
  const char* name;
  module_register_fn register_handlder;
} mnode_builtin_module_t;

/* buildin modules list */
extern jerry_value_t mnode_init_gpio();

const mnode_builtin_module_t mnode_builtin_module[] = {
  { "gpio", mnode_init_gpio }
};

typedef struct
{
  jerry_value_t jmodule;
} mnode_builtin_objects_t;

/* *** */

const int mnode_builtin_modules_count = sizeof(mnode_builtin_module) / sizeof(mnode_builtin_module_t);

mnode_builtin_objects_t mnode_module_objects[sizeof(mnode_builtin_module) / sizeof(mnode_builtin_module_t)];


jerry_value_t mnode_get_native_module(const char* name);

#endif
