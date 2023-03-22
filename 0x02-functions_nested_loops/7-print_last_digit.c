#include "main.h"
/**
 * print_last_digit - A function that prints the last digit of a number
 *
 * @n: parameter to be printed
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int res;

	res = n % 10;
	if (n < 0)
		res = -res;
	_putchar(res + '0');
	return (res);
}
