#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns factorial of a given number
 * @n: integer factorial
 *
 * Return: factorial number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
