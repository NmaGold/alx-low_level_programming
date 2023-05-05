#include "main.h"

/**
 * _atoi - function that converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, b, n, len, c, digit;

	i = 0;
	b = 0;
	n = 0;
	len = 0;
	c = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && c == 0)
	{
		if (s[i] == '-')
			++b;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (b % 2)
				digit = -digit;
			n = n * 10 + digit;
			c = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			c = 0;
		}
		i++;
	}

	if (c == 0)
		return (0);

	return (n);
}
