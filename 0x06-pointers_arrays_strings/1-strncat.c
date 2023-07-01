#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return:void
*/
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i]; != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}
