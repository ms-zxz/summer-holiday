#ifndef LED_H 
#define LED_H 
#include "sys.h"         //LED 端口定义

#define LED0 PBout(5)    // PA8 
#define LED1 PEout(5)    // PD2 
void LED_Init(void);     //初始化

#endif
