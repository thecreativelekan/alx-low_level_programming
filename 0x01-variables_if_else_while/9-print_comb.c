#include <stdio.h>

/**
 * main - This program prints all possible combinations of
 * single-digit numbers.
 * Numbers are separated by a comma, printed in ascending order,
 * and is printed with putchar only.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 28; i <= 37; i++)
	{
		putchar(i);
		if (i != 37)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
