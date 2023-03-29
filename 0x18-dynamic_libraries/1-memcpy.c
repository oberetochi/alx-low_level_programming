#include "main.h"

/**
 * _memcpy - Copies n bytes of memory from src to dest
 * @dest: location in memory for bytes to be copied to
 * @src: location in memory for bytes to be copied from
 * @n: number of bytes to be copied
 *
 * Return: Location of memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)

dest[i] = src[i];

return (dest);
}
