#include "main.h"
/**
 * main - Program runs and counts for multiples of 3 and 5
 *
 * Return: 0
 */

int main(void)
{
	int i;
	
	for (i = 1; i <=100; i++)
		{
			if (i % 15 == 0)
				printf("FizzBuzz \n");
			else if (i % 3 == 0)
				printf("Fizz \n");
			else if (i % 5 == 0)
				printf("Buzz \n");
			else
				printf("%d\n", i);
		}
	return (0);
}