#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;
	unsigned long int next;
	int i;

	printf("%lu, ", n1);
	for (i = 1 ; i < 50 ; i++)
	{
		printf("%lu", n2);
		next = n1 + n2;
		n1 = n2;
		n2 = next;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
