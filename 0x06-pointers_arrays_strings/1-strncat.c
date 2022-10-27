#include "main.h"

/**
* _strncpy - copies a string
* @dest: destination.
* @src: source.
* @n: amount of bytes from src.
* Return: the pointer to dest.
*/

char *_strncpy(char *dest, char *src, int n)
{

	int i;
	int j;

	i = 0;
	while (dest[1] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';

	return (dest);

}


