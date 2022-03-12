#include "main.h"

/**
* clear_bit - check the code
* @n:pointer 
* @index: interger variable
* Return: 0
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (0);
}