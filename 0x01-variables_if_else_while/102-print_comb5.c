#include <stdio.h>
/**
 * main - Entry point
 *
 * description:  a program that prints all possible combinations
 * of two two-digit numbers
 *
 *Return: 0 if successful
 */
int main(void)
{
	int numba1, numba2;

	for (numba1 = 0; numba1 <= 98; numba1++)
	{
		for (numba2 = numba1 + 1; numba2 <= 99; numba2++)
		{
			putchar((numba1 / 10) + '0');
			putchar((numba1 % 10) + '0');
			putchar(' ');
			putchar((numba2 / 10) + '0');
			putchar((numba2 % 10) + '0');
			if (numba1 == 9 && numba2 == 9)
			{
				continue;
			}
			else if (numba1 == 98 && numba2 == 99)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
