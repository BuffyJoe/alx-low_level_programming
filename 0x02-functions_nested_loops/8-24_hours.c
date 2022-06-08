#include "main.h"
/**
* jack_bauer - function to ptint last digit
*
* Return: return Nothing
*/
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar(a + '0');
			_putchar(':');
			_putchar(b + '0');
			_putchar('\n');
		}
	}
}
