#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int a, r = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	bbb = malloc(sizeof(char) * (a + 1));

	if (bbb == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		bbb[r] = str[r];

	return (bbb);
}
