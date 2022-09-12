#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints alphabets in lower case and upper case
 *
 * Return: 0
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';
	/*Prints a-z*/
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	/*prints A-Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}
	return (0);
}
