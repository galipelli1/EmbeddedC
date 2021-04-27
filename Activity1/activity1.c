/**
 * @file main.c
 * @author galipelli1 (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>

int main(void)
{

    int var;
    DDRB|=(1<<PB0); // SET B0=1 for pressing heater button
    DDRB|=(1<<PB1); // SET B1=1 if seat is occupied
    DDRB|=(1<<PB2); // SET B2=1 for heater
    DDRB|=(1<<PB3); // SET b3=1 for LED

    DDRB&=~(1<<PB0); // clear bit
    PORTD|=(1<<PB0); // SET bit

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


    return 0;
}

