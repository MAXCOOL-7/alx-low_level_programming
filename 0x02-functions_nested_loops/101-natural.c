#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or 
 * 5 below 1024 (excluded), followed by a new line.
 * Return: 0
 */
int main(void)
{
	int p = 0;
	int sum = 0;

	while (p < 1024)
	{

		if (p % 3 == 0 || p % 5 == 0)
		{
			sum += p;
		}

		p++;
	}
	printf("%i\n", sum);
	return (0);
}
