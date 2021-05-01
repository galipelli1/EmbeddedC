#include "activity1.h"
#include <avr/io.h>
#include<util/delay.h>

/**
 * @brief Function to check whether heater sensing is on or off
 * 
 */

/**
 * @brief Function for port initialization
 * 
 */

void init_port(void)
{

    DDRB|=(1<<PB0); // SET B0=1 for pressing heater button
    DDRB&=~(1<<PB0); // clear bit
    PORTD|=(1<<PB6); // SET bit
    DDRB&=~(1<<PB7);//clear bit
    PORTB|=(1<<PB7);//set the bit
}

//Change the state of the LED Pin according to the value of sensor
void sensor()
{
   while(1)
        {
           if(!(PINB&(1<<PB7)))
            {
                if(!(PINB&(1<<PB6)))
                   {

                       PORTB|=(1<<PB0);//Indication that seat and heater both on
                       _delay_ms(20);

                   }
                   else
                    {
                        PORTB&=~(1<<PB0);
                       _delay_ms(20);
                    }
            }


        }

    return 0;
   
}
