#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns the natural squire root of a number
 * @n: integer
 *
 * Return: Squire root of a number
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
		return (check(1, n));
	}
}
/**
 * check - checks for the squire root
 * @a: interger
 * @b: interger
 *
 * Return: interger
 */

int check(int a, int b)
{
	if (a * a > b)
		return (-1);
	else if (a * a == b)
		return (a);
	else
		return (check(a + 1, b));
}
