

#include "activity1.h

void peripheral_init(void)
{

    DDRB|=(1<<PB0); // SET B0=1 for pressing heater button
    DDRB|=(1<<PB1); // SET B1=1 if seat is occupied
    DDRB|=(1<<PB2); // SET B2=1 for heater
    DDRB|=(1<<PB3); // SET B3=1 for LED

    DDRB&=~(1<<PB0); // clear bit
    PORTD|=(1<<PB0); // SET bit
}
//Change the state of the LED Pin according to the value of state
 
void Sensor()
{
   while(1)
        {
            if(PORTB|=(1<<PB1))
            {
                if(!(PIND&=(1<<PD0))){
                    PORTB|=(1<<PB2);
                }
                if(PB2){
                    PORTB|=(1<<PB3);
                }

            }

    }


   
}

