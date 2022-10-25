#include "main.h"

/**
*_strcpy - copies the string pointed to by src,:to buffer pointed to by dest.
*@src: source to copy.
*dest: destination to copy
*Return: pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
int i  = 0;
while (*(src + i))
{
*(dest + 1) = *(src + 1);
i++;
}
*(dest + i) = '\0';
return (dest);
}

