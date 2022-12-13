#include <stdio.h>
/**
 * main - main block
 * Description: inds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int i = 0;
	unsigned long int c = 0, d = 1, next = 0;

	while (i < 98)
	{
		next = c + d;
		c = d;
		d = next;
		printf("%lu", next);

		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
