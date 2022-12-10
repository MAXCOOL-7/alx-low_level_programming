#include <stdio.>

/**
 * main - prints all combination of single digits
 *
 * Return: 0
 */
int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
		if (j != 57)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
