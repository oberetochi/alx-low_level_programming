#include <stdio.h>
/**
 * main - Entry point
 *
 * description: Prints all character except some
 * Return: 0 if successful
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
