/**
 * @file Activity2.h
 * @author galipelli1 (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef Activity2_H_INCLUDED
#define Activity2_H_INCLUDED
#define ADC_ENABLE (ADEN)

/**
 * @brief Checking for ADC interrupt occurrence
 * 
 */
#define ADC_INTERRUPT_NOT_OCCURRED !(ADCSRA & (1 << ADIF))

/**
 * @brief Setting ADC interrupt flag
 * 
 */
#define SET_ADC_INTERRUPT_FLAG ADCSRA |= (1 << ADIF);

void ADC_init();
uint16_t ReadADC(uint8_t ch);
#endif // Activity2_H_INCLUDED



