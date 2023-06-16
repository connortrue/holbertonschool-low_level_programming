#include "main.h"
/**
 * _abs - takes a number and retunrs it's absolute value
 *
 * @n: the number to be tested
 *
 * Return: returns the absolute value of the number passed
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
