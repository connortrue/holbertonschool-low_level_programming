#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char *comma = "";

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			printf("%s'%s': '%s'", comma, temp->key, temp->value);
			comma = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
