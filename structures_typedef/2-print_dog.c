#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the contents of a struct dog variable
 * @d: pointer to the struct dog variable to print
 *
 * This function takes in a pointer to a struct dog variable as its only
 * parameter. If the pointer is NULL, the function returns immediately without
 * printing anything. If the pointer is not NULL, the function prints the values
 * of the name, age, and owner fields of the struct dog var pointed to by d.
 * If any of them are NULL, it prints (nil) instead of the value.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	/* Print name or (nil) */
	printf("Name: %s\n",
	       d->name ? d->name : "(nil)");
	/* Print age */
	printf("Age: %f\n", d->age);
	/* Print owner or (nil) */
	printf("Owner: %s\n",
	       d->owner ? d->owner : "(nil)");
}

