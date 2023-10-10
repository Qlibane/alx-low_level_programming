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
	int k = '0';

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					
					putchar(i);
					putchar(j);
					putchar(k);
					if (! (i == '7' && j == '8' && k == '9'))
					{
						putchar(',');
						putchar(' ');
					}
                                }
                         	k++;
			}
			j++;
			k = '0';
		}
		i++;
		j = '0';
	}
	putchar('\n');
	return (0);
}
