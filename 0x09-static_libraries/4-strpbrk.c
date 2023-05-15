#include "main.h"

/**
 * _strpbrk - the entry point of the program
 * @s: the input value
 * @accept: the input value
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int q;

	while (*s)
	{
		for (q = 0; accept[q]; q++)
		{
		if (*s == accept[q])
		return (s);
		}
	s++;
	}

return ('\0');
}
