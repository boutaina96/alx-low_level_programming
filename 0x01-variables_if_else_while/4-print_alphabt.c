#include <stdio.h>
/**
 * main -A program that prints the alphabets except q and e
 * Return: 0(success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch); 
	}	
	putchar('\n');
	return (0);
}
