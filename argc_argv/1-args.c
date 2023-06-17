#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, non-zero otherwise
 *
 * This program takes in the argc and argv parameters in the main function.
 * argc represents the number of arguments passed to the program,
 * including the program name itself. The program then prints the
 * value of argc - 1, which is the number of arguments passed to
 * the program, excluding the program name.
 */
int main(int argc, char **argv)
{
	(void)argv; /* Suppress unused variable warning for argv */
	/* Print the number of arguments passed to the program */
	printf("%d\n", argc - 1);
	return (0);
}
