/* Library includes */
#include "stm32F10x.h"

int main()
{
	LCD_init();
	LCD_clear_screen();
	//LCD_send_text("Delcho Argirov");
	LCD_draw_line(0, 0, 127, 63);
	LCD_draw_line(10, 0, 50, 40);
	LCD_draw_line(10, 10, 100, 10);
	//LCD_draw_line(30, 30, 30, 50);
	
	while(1)
	{
	}
}