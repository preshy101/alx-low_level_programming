#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{
	int myNumbers[] = {15, 312, 7, 11, 159, 102, 197, 21};

	int i = 0;

	while (i < 8)
	{
		putchar(myNumbers[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
