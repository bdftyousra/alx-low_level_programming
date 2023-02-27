#include "main.h"
#include <stdio.h>

/**
 * print_arrays - prints n element
 * @a: parameter
 * @n: parameter
 */

void print_arrays(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
