#include "main.h"

/**
* print_square - function that prints square
* @size: number of # in the square
* Return: Void
*/

void print_square(int size)
{
	int x;
	int y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
