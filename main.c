#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"
#define val_ADC 0



int main(void)
{
	
	init_port();
        Init_ADC_init();
	Init_PWM();
	Init_USART();
	
while (1)
    {
        uint16_t var = 0;
        char temperature;

        //Activity-1
        sensor(); 

        //Activity-2, 3 & 4
        if (sensor() == 1)
        {
            var = Read_ADC(val_ADC);           //READS PWM OUTPUT
            temperature = InitPWM(var); //CALCULATES TEMPERATURE VALUE
            displayOUTPUT(temperature);     //DISPLAYS TEMPERATURE OUTPUT
        }
    }
    return 0;
}

	
