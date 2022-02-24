#include "main.h"
/**
* factorial - return the factorial of a given name
* @n: integer
* Return: factorial
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
