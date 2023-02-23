#include "main.h"
/**
 * print_number - prints a number
 * @n: Input number
 */

void print_number(int n)
{
	long len, res, i, temp, result;

	res = n;
	result = len =  1;
/*Check negatives*/
	if (res < 0)
	{
		res *= -1;
		_putchar('-');
	}

/**/
	temp = res;
	while (temp >= 10)
	{
		len++;
		temp /= 10;
	}

/*Create result*/
	for (i = 1; i < len; i++)
		result *= 10;
/*Main */
	while (result > 1)
	{
		_putchar((res / result) % 10 + '0');
		result /= 10;
	}
	_putchar(res % 10 + '0');
}
