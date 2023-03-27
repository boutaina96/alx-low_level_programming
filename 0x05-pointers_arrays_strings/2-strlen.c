#include "main.h"
/**
 * _strlen -A function that returns the size of string
 *
 * @s : a parameter
 * Return: size of s
 */
int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	return (size);
}
