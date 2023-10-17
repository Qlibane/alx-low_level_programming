#include "main.h"
/**
 * *_strcpy - copies the string pointed to
 *
 * @dest: char type string
 *
 * @src: char type string
 *
 * Description: copies the string from the pointer to the buffer
 *
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do
	{
		z++;
		dest [z] = src [z];
	}while (src[z] != '\0');

	return (dest);
}
