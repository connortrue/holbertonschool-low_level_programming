#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value from a table
 * @ht: the table being searched
 * @key: the key of the value we need
 *
 * Return: the value stored by the key, or NULL of no matching key found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
