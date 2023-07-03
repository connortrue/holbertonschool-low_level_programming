#include "3-calc.h"

/**
 * main - performs simple operations (+, -, *, /, %)
 *
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on success,
 *         98 if number of arguments is wrong,
 *         99 if operator is none of the above,
 *         100 if user tries to divide (/ or %) by 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	/* check number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	/* check if operator is valid */
	if (op_func == NULL || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	/* check for division by 0 */
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
