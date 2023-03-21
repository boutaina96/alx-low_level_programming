#include <stdio.h>
/**
 * main -A program that prints numbers from 0 to 9
 * Return: 0(success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
