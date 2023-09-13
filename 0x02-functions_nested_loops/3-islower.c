#include "main.h"
/**
 * _islower - check lowercase char
 * Return: 0
 *@c: parameter
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
