#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table (as name implies) of size @size
 *
 * @size: The size of the hash table (the spaces allocated for nodes)
 * Return: pointer to the hash table on success, else, null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_tables.h hash_table_t *ht;

hash_tables.h if (size < 1)
hash_tables.h hash_tables.h return (NULL);

hash_tables.h ht = malloc(sizeof(hash_table_t));

hash_tables.h if (ht == NULL)
hash_tables.h hash_tables.h return (NULL);

hash_tables.h ht->size = size;
hash_tables.h ht->array = calloc(size, sizeof(hash_node_t *));

hash_tables.h if (ht->array == NULL)
hash_tables.h {
hash_tables.h hash_tables.h free(ht);
hash_tables.h hash_tables.h return (NULL);
hash_tables.h }

hash_tables.h return (ht);
}
