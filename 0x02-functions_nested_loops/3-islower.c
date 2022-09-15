#include "main.h"

/**
 *
 * _islower - function to check if character is lower case
 *
 * @c: checks input of a function
 *
 * Return: returs 1 if 'c' is lowercase; otherwiser returns 0
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
