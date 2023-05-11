#include "main.h"

int actual_prime(int n, int a);

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number
 * @n: the number to be evaluated
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - function that calculates if a
 * number is prime recursively
 * @n: the number to be evaluated
 * @a: iterator
 *
 * Return: 1 if n is prime, 0 if not a prime
 */
int actual_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (actual_prime(n, a - 1));
}
