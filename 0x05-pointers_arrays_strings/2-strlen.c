#include "main.h"
/**
 * _strlen - finds length of string
 * @s: parameter
 * Return: len
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
