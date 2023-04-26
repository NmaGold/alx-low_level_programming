#include <stdio.h>

/**
 * main - function that finds and prints the sum
 * of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int m, k, next, sum;

	m = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (m < 4000000 && (m % 2) == 0)
		{
			sum = sum + m;
		}
		next = m + k;
		m = k;
		k = next;
	}

	printf("%lu\n", sum);

	return (0);
}
