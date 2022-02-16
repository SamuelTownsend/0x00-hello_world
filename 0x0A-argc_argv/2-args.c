#include "main.h"

/**
* main - entry point
* @argc: number of arguments
* @argv: array of argument strings
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
