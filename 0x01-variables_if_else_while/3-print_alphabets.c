#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{
		/* your code goes there*/

		char ch = 'a';

		char zh = 'A';

		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		while (zh <= 'Z')
		{
			putchar(zh);
			zh++;

		}
		putchar('\n');
		return (0);
}
