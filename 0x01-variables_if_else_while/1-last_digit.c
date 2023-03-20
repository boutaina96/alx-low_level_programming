#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main -A program that print the last digit of the number stored in a variable
 * Return: 0(sucess)
 */
int main(void)
{
	int n;
	int res;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	res = n % 10;
	if (res > 5)
		printf("Last digit of %d is %d and is greater than 5", n, res);
	else if (res == 0)
		printf("Last digit of %d is %d and is zero", n, res);
	if (res < 6 && res != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, res);
	printf("\n");
	return (0);
}
