#include "main.h"
/**
 * _puts -A function that prints a string
 *
 * @str: a parameter
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
