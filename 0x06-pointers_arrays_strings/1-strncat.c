#include "main.h"

/**
 * _strcat - concatenates two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n);
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';
	while (j < n && src[j] != '\0')
	return (dest);
}
