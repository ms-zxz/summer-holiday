#ifndef LED_H 
#define LED_H 
#include "sys.h"         //LED �˿ڶ���

#define LED0 PBout(5)    // PA8 
#define LED1 PEout(5)    // PD2 
void LED_Init(void);     //��ʼ��

#endif
