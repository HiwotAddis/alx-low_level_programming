#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: stored memory
 * @src: copied memory
 * @n: num of bytes
 * Return: n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i ; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
