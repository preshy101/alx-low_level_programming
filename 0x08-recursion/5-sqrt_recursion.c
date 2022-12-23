#include "main.h"

/*
 * sqrt2 - Makes possible to evaluate from 1 to n
 *
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: 1 if successful.
 * On error, return -1, and errno is set appropriately.
 */

int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/*
 * _sqrt_recursion - returns the natural square root of n
 *
 * @n: Number Integer
 *
 * Return: 1 if successful.
 * On error, return -1, and errno is set appropriately.
 */

int _sqrt_recursion(int m)
{
	return (sqrt2(m, 1));
}
