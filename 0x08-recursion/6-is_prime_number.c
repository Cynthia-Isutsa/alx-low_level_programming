#include "main.h"

/**
 * prime - function that checks for a prime number
 *
 * @num: interger
 * @i: integer
 *
 * Return: 0 or 1
 */

int prime(int num, int i)
{
	if (num < i)
	{
		if (i % num == 0)
		{
			return (0);
		}
	}
	if (i == num)
	{
		return (1);
	}
	else
	{
		return (prime(num + 1, i));
	}
}
/**
 * is_prime_number - function that checks a prime number
 *
 * @n: interger
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		return (prime(2, n));
}
