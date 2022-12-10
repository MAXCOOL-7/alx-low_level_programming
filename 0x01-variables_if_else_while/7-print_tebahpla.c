#include <stdio.h>

/**
 * main -print alphabets in a reverse format
 *
 * Return: 0
 */
int main(void)
{
	char le;

	for (le = 'z'; le <= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
