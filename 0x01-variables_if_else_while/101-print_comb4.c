#include <stdio.h>
/**
 * main -Main function
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;
	int l;

	for (n = 0; n <= 7; n++)
	{
		for (m = 1; m <= 8; m++)
		{
			for (l = 2; l <= 9; l++)
			{
				if (n < m && m < l)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(l + '0');
					if (n + m + l != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
