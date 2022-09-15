#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * _islower - function that checks for lowercase character using c
 @c: single letter input
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
