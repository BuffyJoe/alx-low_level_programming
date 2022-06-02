#include <unistd.h>
/**
* main - Entry point
*
* Description: print a quote using a function
*
* Return: return 1
*/
int main(void)
{
	char quo[] = "and that place of are is useful\" - Dore Korpar, 2015-10-19";
	write(1, quo, 59);
	return (1);
}
