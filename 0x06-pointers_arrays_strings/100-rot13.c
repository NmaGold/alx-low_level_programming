#include "main.h"

#include <stdio.h>

/**
 * rot13 - function that encodes a string
 * using rot13
 * @p: pointer to string params
 *
 * Return: *p
 */

char *rot13(char *p)
{
	int a;
	int b;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; p[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (p[a] == data1[b])
			{
				p[a] = datarot[b];
				break;
			}
		}
	}
	return (p);
}
