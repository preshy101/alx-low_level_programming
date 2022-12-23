#include "main.h"
/*
 * factorial - gets factorial of n
 *
 * @n: integer
 *
 * Return: 1 if successful
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
