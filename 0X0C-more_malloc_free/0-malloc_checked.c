#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
		int *tor;
		
		tor = malloc(b);

		if (!tor)
		{
			exit(98);
		}
		return (tor);
}
