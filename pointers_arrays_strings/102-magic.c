#include <stdio.h>
/**
 * main - sets the value of a[2] to 98 and prints it
 *
 * Description: This program sets the value of a[2] to 98 using pointer
 * arithmetic and then prints it.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
