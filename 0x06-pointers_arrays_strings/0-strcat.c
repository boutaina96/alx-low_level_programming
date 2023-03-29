#include "main.h"
/**
 * _strcat -a function thats concatenates two strings
 *
 * @dest : first parameter
 * @src : second parameter
 * Return: string (dest + src)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
