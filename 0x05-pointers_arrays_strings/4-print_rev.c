#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *  @s: the string to be printed in rev
 */
void print_rev(char *s)
{
	int i, n;

	while (s[n] != '\0')
		n++;
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
