#include "main.h"
/**
 * swap_int -A function that swaps the values of two integers
 *
 * @a: first pointer
 * @b: second pointer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
