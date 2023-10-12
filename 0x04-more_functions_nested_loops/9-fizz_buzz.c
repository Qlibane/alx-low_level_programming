#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description: prints numbers 1 to 100
 *
 * Fizz: multiples of 3 and buzz for multiples of 5
 *
 * FizzBuzz for multiples of bothe 3 and 5
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
