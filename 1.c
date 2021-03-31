#include <xc.h>
#define LED1 RE2
#define LED2 RB2
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
	LED1=1;
        LED2=0;
       for(y=0;y<20000;y++);
	LED1=0;
         LED2=1;
       for(y=0;y<20000;y++);
     }
 }
