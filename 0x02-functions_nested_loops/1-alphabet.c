#include <unistd.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description: a-z
 * code: prints a-z
 *
 * Return: 0 = success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
