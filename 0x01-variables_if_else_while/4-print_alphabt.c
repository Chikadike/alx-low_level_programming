#include <stdio.h>

/**
*main-program entry point
*Return:0 no error,non zero for error.
*/
int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
if (i == 'e' || i == 'q')
continue;
putchar(i);
}
putchar('\n');
return (0);
}


