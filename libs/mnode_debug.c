#include "freertos/FreeRTOS.h"
#include "freertos/timers.h"
#include "clist.h"
#include "mnode_debug.h"

#include "jerryscript.h"
#include "jerryscript-ext/handler.h"

#include "mnode_utils.h"


void c_debug(int no,bool flag)
{
 if(flag==true){
     printf("Arrive at check point %d\n",no);
 }   
}
