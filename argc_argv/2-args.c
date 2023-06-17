#include <stdio.h>

/*
 * main - prints all arguments it receives
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 if successful, non-zero otherwise
 *
 * This program takes in the argc and argv parameters in the main function.
 * It uses a loop to iterate over each element of the argv array and prints
 * each argument on a separate line using the printf function.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		/* Print each argument on a seperate line. */
		printf("%s\n", argv[i]);
	}

	return (0);
}
