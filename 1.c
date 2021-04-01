#include <xc.h>
#define LED1 RB2
#define LED2 RE2
unsigned long y;

void main(void)
 {
    TRISB=0x00;
   TRISE=0x00;
   ANSELB=0x00;
   ANSELE=0x00;
    LED1=1;
    LED2=0;
    
    while(~0)
    {
	LED1=~LED1;
	LED2=~LED2;
       for(y=0;y<20000;y++);
     }
 }
