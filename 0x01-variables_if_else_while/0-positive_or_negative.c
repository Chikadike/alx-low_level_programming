#include <stdio.h>
#include <stdio.h>
#include <time.h>
/**
* main-program entry point.
*Return:0-no error,non zero value if error.
**/
int main(void)
{
int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
	printf("is positive\n");
}
	else if (n < 0)
{
	printf(is negative\n");

}
	else if (n == 0)
	printf("is zero\n");
	return (0);

