#include "main.h"
/**
 *swap_int - taking in two variables and swapping them
 *
 *@a: swaps and stores adress for b
 *
 *@b: swaps and stores adress for a
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
