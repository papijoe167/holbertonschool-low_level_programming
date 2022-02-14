#include "main.h"
#include <studio.h>

/**
* print_array - prints elements of an array of integers.
* @a: array
* @n: n element
* Return: void
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
