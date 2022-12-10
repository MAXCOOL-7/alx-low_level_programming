#include <stdio.h>

/**
 * main -print the numbers in base 16
 *
 * Return: 0
 */
int  main(void)
{
	int num;
	char ma;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');

	for (ma = 'a'; ma <= 'f';  ma++)
		putchar(ma);

	putchar('\n');

	return (0);
}
