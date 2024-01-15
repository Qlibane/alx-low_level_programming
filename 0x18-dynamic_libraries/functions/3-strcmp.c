#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: pointer to the first string
 *
 * @s2: pointer to the second string
 *
 *Return: values less than 0 if string is less and
 *
 * greater than 0 if string is more
 */
int _strcmp(char *s1, char *s2)
{
	int counter, compare_value;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	compare_value = s1[counter] - s2[counter];
	return (compare_value);
}
