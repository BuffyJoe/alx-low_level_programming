#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all the alphabets in lower case
 *
 * Return: return all the alphabets
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; ++c)
	{
		putchar((c) + '0');
		if (c == 9)
		{
			putchar(' ');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
