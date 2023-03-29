#include "main.h"
/**
 * _strncat -concatenates two strings using at most n bytes from src
 *
 * @dest : first input
 * @src : second input
 * @n : third input
 *
 * Return: string value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
