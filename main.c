#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"



int main(void)
{
	/* Initialize Peripherals */
	peripheral_init();
  Init_readADC();
	Init_PWM();
	Init_USART();

	
