#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * description: A program that prints a-z
 * Return: 0 is successful
 */
int main(void)
{
	char ch;

	for (ch = 'a';  ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
