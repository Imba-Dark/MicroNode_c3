#ifndef MNODE_DEBUG_H
#define MNODE_DEBUG_H

#include "mnode_utils.h"
#include "freertos/FreeRTOS.h"
//RE_DEBUG is the debug control flag
#define RE_DEBUG
#define HTTP_DEBUG
void c_debug(int no, bool flag);

#endif