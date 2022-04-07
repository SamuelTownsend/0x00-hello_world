#include "hash_tables.h"
/*
*/char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *site;
unsigned long int find;
if (!key || !ht)
{
return (NULL);
}
find = key_index((const unsigned char *)key, ht->size);
site = ht->array[find];
while (site)
{
if (strcmp((site->key), key) == 0)
{
return (site->value);
}
site = site->next;
}
return (NULL);
}
