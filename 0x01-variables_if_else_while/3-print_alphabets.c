#include <stdio.h>
/**
 * main - Entry point
 *
 * description: Prints ALPHABETICALLY
 * Return: 0 if successful
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
