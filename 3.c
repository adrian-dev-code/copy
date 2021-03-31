#include <xc.h> 
__PROG_CONFIG(1,0x3FE4); 
__PROG_CONFIG(2,0x1EFF); 

#define _XTAL_FREQ 16000000 
#define LED_scurt RB1 
#define LED_mediu RB2 
#define LED_lung RB3  
#define BUTTON RB0 

void init_uC (void); 
void main(void)
{
   init_uC(); 
   while (1) 
   { 
      
       if(BUTTON==0) 
      {  
	__delay_ms(800);
	if(BUTTON==1) LED_scurt = 1; 
	else
	{
	   __delay_ms(1000);
	   if(BUTTON==1) LED_mediu = 1;
	   else
	       LED_lung = 1;
	}
	__delay_ms(2000);
	PORTB= 0b00000000;
	}
	
   }
}
void init_uC (void)
{
    OSCCON = 0x7B;
    TRISB = 0b00000001; 
    ANSELB = 0b00000000; 
    PORTB=0b00000000;
}
