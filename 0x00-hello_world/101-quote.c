#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print a quote using a function
 *
 * Return: return 1
 */
int main(void)
{
	char quote[] = "and that place of are is useful\" - Dore Korpar, 2015-10-19\n";
	write(1, quote, 59);
	return (1);
}
