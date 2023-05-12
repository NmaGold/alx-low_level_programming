#include "main.h"
#include <stdio.h>

/**
 * _atoi - program that converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, e, m, len, c, digit;

	a = 0;
	e = 0;
	m = 0;
	len = 0;
	c = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && c == 0)
	{
		if (s[a] == '-')
			++e;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (e % 2)
				digit = -digit;
			m = m * 10 + digit;
			c = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			c = 0;
		}
		a++;
	}

	if (c == 0)
		return (0);

	return (m);
}

/**
 * main - program that multiplies two numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 if (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
