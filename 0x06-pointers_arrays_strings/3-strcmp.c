#include "main.h"
/**
 * _strcmp -A function taht compares two strings
 *
 * @s1: 1st input
 * @s2: 2nd input
 *
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
