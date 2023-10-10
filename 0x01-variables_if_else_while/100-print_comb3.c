#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		putchar(i);
		j = '0';
		i++;
	}
	while (j <= '9')
	{
		putchar(j);
		j++;
	}
	if (!(i > j) || (i == j))
	{
		putchar(i);
		putchar(j);
	}
	if (i == 8 && j == 9)
	{
		putchar('\n');
	}
	else
	{
		putchar(',');
		putchar(' ');
	}
	return (0);
}
