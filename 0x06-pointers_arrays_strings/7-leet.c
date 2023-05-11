#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @m: input value
 * Return: m value
 */
char *leet(char *m)
{
	int b, c;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (b = 0; m[b] != '\0'; b++)
	{
		for (c = 0; c < 10; c++)
		{
			if (m[b] == s1[c])
			{
				m[b] = s2[c];
			}
		}
	}
	return (m);
}
