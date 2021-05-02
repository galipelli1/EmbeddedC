/**
 * @file main.c
 * @author galipelli1 (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"
#define val_ADC 0



int main(void)
{
	
	init_port();
        ADC_init();
	InitPWM();
	InitUART(103);
	
while (1)
    {
        uint16_t var = 0;
        char temperature;

        //Activity-1
        sensor(); 

        //Activity-2, 3 & 4
        if (sensor() == 1)
        {
            var = ReadADC(val_ADC);           //reads output of PWM 
            temperature = OutputPWM(var); //calculates temperature output
            output(temperature);     //displays output
        }
    }
    return 0;
}

	
