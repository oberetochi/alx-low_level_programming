#include <stdio.h>
/**
 * main - main block
 * Description: prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int c = 0, d = 1, next;

	while (i < 50)
	{
		next = c + d;
		c = d;
		d = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
