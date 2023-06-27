#include "main.h"
#include <stdio.h>
/**
 *print_array - update value.
 *@a: value to be evaluate.
 *@n: value to be evaluate.
 *Return: not.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n; x++)
	{
		printf("%d", a[x]);
	}
	printf("\n");
}
