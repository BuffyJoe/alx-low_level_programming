#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all the alphabets in lower case
 *
 * Return: return all the alphabets
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int coma = 1;

	while (a <= b)
	{
		while (b <= 9)
		{
			if (a < b)
			{
				if (coma = 0)
				{
					putchar(',');
					putchar(32);
				}
				coma = 0;
				putchar(a + '0');
				putchar(b + '0');
			}
			b++
		}
		a++;
		b = 0;
	}
	putchar(10);
	return (0);
}
