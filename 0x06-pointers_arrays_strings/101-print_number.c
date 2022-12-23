#include "main.h"

/**
 * print_number - Prints any integer with putchar
 *  @n: Number to prints
 * Return: 0
 */
void print_number(int n)
{
unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	a = n;

	if (a / 10)
		print_number(a / 10);

	_putchar(a % 10 + '0');
}
