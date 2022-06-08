#include "main.h"
/**
* jack_bauer - function to ptint last digit
* @n: parameter
*
* Return: return Nothing
*/
void jack_bauer(void)
{
	float a = 00;
	float b = 00;

	while (a <= 23)
	{
		while (b <= 59)
		{
			_putchar(a + '0');
			_putchar(':');
			_putchar('\n');
			++b;
		}
		++a;
		b = 0;
	}
}
