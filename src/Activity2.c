#include <avr/io.h>
#include "Activity2.h"

/**
 * @brief Function for ADC initialization
 * 
 */
void ADC_init()
{
    ADMUX = (1 << REFS0);
    ADCSRA = (1 << ADC_ENABLE) | (7 << ADPS0);
}

/**
 * @brief Function to obtain ADC output
 * 
 * @param n 
 * @return uint16_t 
 */
uint16_t Read_ADC(uint8_t ch)
{
    init_ADC();
    ADMUX &= 0XF8;
    ch = ch & 0b00000111;
    ADMUX |= ch;
    ADCSRA |= (1 << ADSC);
    while (ADC_INTERRUPT_NOT_OCCURRED)
        ;
    SET_ADC_INTERRUPT_FLAG;
    return (ADC);
}
