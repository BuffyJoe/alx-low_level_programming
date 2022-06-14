#include "main.h"
/**
* *_strcpy - function
* @dest: parameter
* @src: parameter
*
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
