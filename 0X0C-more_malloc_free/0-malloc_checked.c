#include "main.h"

/**
* malloc_checked - allocates memory with malloc
* @b: amount of space allocated
* 
*/

void *malloc_checked(unsigned int b)

{
int *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
