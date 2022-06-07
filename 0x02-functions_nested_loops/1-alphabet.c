#include <unistd.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description: print_alphabet function
 * code: prints a-z
 *
 * Return: 0 = success
 */
void print_alphabet(void)
{
/**
* Descroption: print_alphabet
*/
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
