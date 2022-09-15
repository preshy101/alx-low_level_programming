#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Description:  print_last_digit - function that prints the last digit of a number.
 * @n: single letter input
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int pld;

	pld = (n % 10);
	if (pld < 0)
	{
		pld = (-1 * pld);
	}
		_putchar(pld + '0');
		return (pld);
}
