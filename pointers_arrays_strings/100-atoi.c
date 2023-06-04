#include "main.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s: pointer to string
 *
 * Return: integer value of string
 */
int _atoi(char *s)
{
    int sign = 1;
    int res = 0;
    int i = 0;

    while (s[i] == ' ')
        i++;

    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
        i++;

    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
            res = res * 10 + s[i] - '0';
        else
            break;

        i++;
    }

    return (res * sign);
}
