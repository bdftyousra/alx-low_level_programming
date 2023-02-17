#include <stdlib.h>
#include <time.h>
/**
 * main - random number to the variable n each time it is executed
 * Description: if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* if condition */
if (n > 0)
{
	printf(n, "%d is positive\n");
}
else if (n < 0)
{
	printf(n, "%d is negative\n");
}
else
{
	printf(n, "%d is zero\n");
}
return (0);
}
