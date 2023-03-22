#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -A function that prints all natural numbers from n to 98
 *
 * @n: parameter to start with
 *
 * Return
 */
void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ",i);
			else
				printf("%d",i);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d", n);
}
