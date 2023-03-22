#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 *
 * @c: parameter to be checked
 * Return: the absolute value of an integer
 */
int _abs(int c)
{
	if (c < 0)
		c = -(c);
	else if (c >= 0)
		c = c;
	return (c);
}

