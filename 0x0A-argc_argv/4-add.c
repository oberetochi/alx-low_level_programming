#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - checks if a string contains only digits
 * @str: string to check
 * Return: 1 if str contains only digits, return 0 if successful
 */

int is_digit(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (!isdigit(str[i]))
{
return (0);
}
}

return (1);
}

/**
 * main - entry point
 *
 * Description: program that adds positive numbers
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0,
 * followed by a new line
 * If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 * You can assume that numbers and the addition of
 * all the numbers can be stored in an int
 *
 * @argc: argument counter
 * @argv: argument vector
 * Return: return 0 if successful
 */

int main(int argc, char *argv[])
{
int i;
int sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (is_digit(argv[i]))
{
sum += atoi(argv[i]);
/* atoi is used to convert a string to an integer */
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);

return (0);
}
