#include <stdio.h>
/**
 *  main-print the alphabet in lowercase,
 *  followed by a new line, except q and e
 *  Return: 0 if successful
 * */
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'e' &&  ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
