/* Library includes */
#include "stm32F10x.h"



int main()
{
	LCD_init();
	LCD_clear_screen();
	LCD_send_text("Delcho Argirov");
	
	while(1)
	{
	}
	
	return 0;
}