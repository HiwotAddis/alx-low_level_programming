#include "main.h"
/**
 * _isalpha - function
 * Return: 0
 * @c: parameter
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
