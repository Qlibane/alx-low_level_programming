#include "main.h"
/**
 * positive_or_negative - main function
 *
 *@i: number to be checked
 *
 * Return: always 0 (success)
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
}
