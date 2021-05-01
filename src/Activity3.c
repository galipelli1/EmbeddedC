#include <avr/io.h>
#include<util/delay.h>
#include "Activity3.h"

/**
 * @brief Function to calculate temperature value
 * 
 * @param temp_value 
 * 
 */

void InitPWM(void)
{
    //initialization of timer
    TCCR1A |= (1 << COM1A1) | (1 << WGM10) | (1 << WGM11);
    TCCR1B |= (1 << CS11) | (1 << CS10) | (1 << WGM12);
    DDRB |= (1 << PORTB1);
}
char OutputPWM(uint16_t temp_value)
{
    char temperature = 20;
    if ((temp_value >= 0) && (temp_value <= 200))
    {
        OCR1A = 205;
        temperature= 20;
        _delay_ms(30);
    }
    else if ((temp_value >= 201) && (temp_value <= 500))
    {
        OCR1A = 410;
        temperature= 25;
        _delay_ms(30);
    }
    else if ((temp_value >= 501) && (temp_value <= 700))
    {
        OCR1A = 717;
        temperature= 29;
        _delay_ms(30);
    }
    else if ((temp_value >= 701) && (temp_value <= 1024))
    {
        OCR1A = 973;
        temperature= 33;
        _delay_ms(30);
    }
    return temperature;
}
