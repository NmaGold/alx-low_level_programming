#include "main.h"

/**
 * char *_strcpy - function that copy the string pointed to by src
 * @dest: where it will be copied to
 * @src: where it will be copied from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; x < i ; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
