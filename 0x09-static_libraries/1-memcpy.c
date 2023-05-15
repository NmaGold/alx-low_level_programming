#include "main.h"
/**
 *_memcpy - function that copies memory area
 *@dest:where memory is stored
 *@src: where memory is copied
 *@n: the number of bytes
 *
 *Return: the copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0;
	int a = n;

	for (; s < a; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
