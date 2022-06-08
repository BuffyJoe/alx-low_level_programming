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

	while (a <= 23)
	{
		while (b <= 59)
		{
			if (a < 9)
			{
				_putchar('0);
			}
			if (a > 9 && a < 19)
			{
				_putchar('1');
			}
			else
			{
				_putchar('2');
			}
			_putchar(a + '00');
			_putchar(':');
			_putchar(b + '00');
			_putchar('\n');
			++b;
		}
		++a;
		b = 0;
	}
}
