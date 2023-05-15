#include "main.h"

/**
 * _memset - function that fills the block of memory with a specific value
 * @s: the starting address of memory to fill
 * @b: the value desired
 * @n: the number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
