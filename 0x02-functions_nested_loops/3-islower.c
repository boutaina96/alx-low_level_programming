#include "main.h"
/**
 * _islower -A function that checks for lowercase character
 *
 * @c: parameter to be printed
 *
 * Return: 0(false) or 1(true)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
