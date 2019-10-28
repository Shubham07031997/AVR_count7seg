#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
int x,units,tens;
void main()
{
   DDRA=0X00;
   DDRC=0Xff;
   PORTA=(1<<PA7);
   while(1)
      {   
	         
			       for(x=0;x<20;)
				     {    
					 if((PINA & 0b10000000)==0)
			 {    
					     x++;
						 units=x%10;
						 tens=x/10;
						 PORTC=tens;
						 PORTC |=(units<<4);
						 _delay_ms(100);
						   
						 }
						 }
						 }
						 }

