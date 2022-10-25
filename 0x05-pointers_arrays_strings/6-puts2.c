#include "main.h"

/**
*put2- prints one char out of 2 of a string to stdout.
*@str: string to print
*Return:no return
*/

void puts2(char *str)
{
int i = 0;

while (*(str + i))
{
_putchar(*(str + i));
i = i + 2;

}
_putchar('\n');
}
