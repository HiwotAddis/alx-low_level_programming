#include "main.h"
/**
 * _abs - absolute value
 *Return: 0
 *@a: parametr
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
