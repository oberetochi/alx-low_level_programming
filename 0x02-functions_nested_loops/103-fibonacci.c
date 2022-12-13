#include <stdio.h>
/**
 * main - main block
 * Description: finds and prints the first 98 Fibonacci numbers starting with 1 and 2, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int c = 0, d = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = c + d;
		c = d;
		d = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
