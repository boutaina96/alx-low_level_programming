#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * positive_or_negative - This program will assign a number to the variable n
 *@n: parameter to be assigned
 *
 * Return: 0 (success)
 */
void positive_or_negative(int n)
{
	/* your code goes there */
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	printf("\n");
}
