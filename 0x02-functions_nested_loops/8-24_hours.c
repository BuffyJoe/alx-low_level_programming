#include "main.h"
/**
* jack_bauer - function to ptint last digit
* @n: parameter
*
* Return: return the last digit
*/
void jack_bauer(void);
{
	int a = 0;
	int b = 0;

	while (a <= 23)
	{
		while (b <= 59)
		{
      _putchar(a + '0');
      ++b;
		}
		++a;
		b = 0;
	}
  return (0);
}
