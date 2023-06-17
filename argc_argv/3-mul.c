#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 if successful, 1 if the program does not receive two arguments
 *
 * This program takes in the argc and argv parameters in the main function.
 * If the program does not receive two arguments, it prints an error message
 * and returns 1. Otherwise, it converts the two arguments to integers,
 * multiplies them, and prints the result.
 */
int main(int argc, char **argv)
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);
	return (0);
}
