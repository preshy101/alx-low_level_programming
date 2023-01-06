#include "main.h"
#include <stdlib.h>
/*
 * DESCRIPTION : Returns a pointer to the allocated memory
 * malloc_checked - allocate memory.
 *
 * @b: size of the memory to be allocated.
 *
 * Return: pointer;
 */
void *malloc_checked(unsigned int b)
{
	char *ip;

	ip = malloc(b);
	if (ip == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (ip);
}
