#include "main.h"

/**
 * is_prime - detects if an input num is a prime number
 * @n: input num
 * @i: iterator
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, i + 1));
}

/**
 * is_prime_number - detects if an input num is a prime number
 * @n: input num
 * Return: 1 is n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
