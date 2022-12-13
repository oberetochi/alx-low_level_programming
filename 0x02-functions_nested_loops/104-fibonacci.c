#include <stdio.h>
/**
 * main - main block
 * Description: inds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0 if successful
 */
	int main(void)
{
	int num;
	unsigned long ui1 = 0, ui2 = 1, sum;
	unsigned long ui1_alf1, ui1_alf2, ui2_alf1, ui2_alf2;
	unsigned long alf1, alf2;

	for (num = 0; num < 92; num++)
	{
		sum = ui1 + ui2;
		printf("%lu, ", sum);

		ui1 = ui2;
		ui2 = sum;
	}

	ui1_alf1 = ui1 / 10000000000;
	ui2_alf1 = ui2 / 10000000000;
	ui1_alf2 = ui1 % 10000000000;
	ui2_alf2 = ui2 % 10000000000;

	for (num = 93; num < 99; num++)
	{
		alf1 = ui1_alf1 + ui2_alf1;
		alf2 = ui1_alf2 + ui2_alf2;
		if (ui1_alf2 + ui2_alf2 > 9999999999)
		{
			alf1 += 1;
			alf2 %= 10000000000;
		}

		printf("%lu%lu", alf1, alf2);
		if (num != 98)
			printf(", ");

		ui1_alf1 = ui2_alf1;
		ui1_alf2 = ui2_alf2;
		ui2_alf1 = alf1;
		ui2_alf2 = alf2;
	}
	printf("\n");
	return (0);
}
