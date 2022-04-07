#include "hash_tables.h"
/*
*/hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
if (!size)
return (NULL);
table = malloc(sizeof(hash_table_t));
if (!table)
free(table);
return (NULL);
table->size = size;
table->array = calloc((size_t)table->size, sizeof(hash_node_t *));
if (table->array == NULL)
return (NULL);
return (table);
}
