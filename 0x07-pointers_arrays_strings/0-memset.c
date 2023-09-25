#include "main.h"
/**
 * _memset - fill memory
 * @s: starting address
 * @b: desired value
 * @n: num of bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
