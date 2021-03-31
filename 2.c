#include <xc.h> 
__PROG_CONFIG(1,0x3FE4); 

void int_uC(void){
   TRISB = 0x00;
   TRISD = 0x00;
   ANSELB=0;
   ANSELD=0;
}
unsigned char a;
unsigned long y;
void main(void){
   PORTD=0;
    int_uC();
   while (1)
   {
      for(a=0x20;a<0x80;a<<=1)
      {
	 PORTB=a;
	 for(y=0; y<1000; y++); 
      }
      PORTB=a;
       for(y=0; y<1000; y++); 
      PORTB=0;
      
       
       
       for(a=0x04;a<0x80;a<<=1)
      {
	 if(a==0x10) a<<=1;
	  PORTD=a;
	  for(y=0; y<1000; y++); 
      }
      
      
      
      for(a=0x40;a>0x02;a>>=1)
	{
	  if(a==0x10) a>>=1;
	  PORTD=a;
	  for(y=0; y<1000; y++); 
	 }
	PORTD=0;
     
	 
	 for(a=0x80;a>0x10;a>>=1)
	{
	 PORTB=a;
	   for(y=0; y<1000; y++); 
	} 
     }
  }
