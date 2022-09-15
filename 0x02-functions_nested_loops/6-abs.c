#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
	/**
	 * _abs - function that computes the absolute value of an integer
	 * @n: single letter input
	 * Return: Always 0 (Success)
	 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (n);
	}
}
