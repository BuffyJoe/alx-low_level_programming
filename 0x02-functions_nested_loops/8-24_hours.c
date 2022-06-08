#include "main.h"
/**
* jack_bauer - function to ptint last digit
*
* Return: return Nothing
*/
void jack_bauer(void)
{
	float a = 00;
	float b = 00;

	for (a <= 23)
	{
		for (b <= 59)
		{
			_putchar(a + '0');
			_putchar(':');
			_putchar(b + '0');
			_putchar('\n');
			++b;
		}
		++a;
		b = 0;
	}
}
