#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: computes and display sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0 if successful
 */
int main(void)
{
	int num = 0;
	int sum = 0;

	while (num < 1024)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}

		num++;
	}
	printf("%i\n", sum);
	return (0);
}
