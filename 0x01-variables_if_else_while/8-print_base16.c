#include <stdio.h>
/**
 * main - Entry point
 *
 * description: Base 16 in lowercase
 * Return: 0 if successful
 */
int main(void)
{
	int n;
	char letter;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	return (0);
}
