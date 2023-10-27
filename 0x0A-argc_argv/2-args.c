#include <stdio.h>
/**
 * main - prints the number of arguments paased
 *
 * @argc: int
 *
 * @argv: list
 *
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int i;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
