#include <stdlib.h>
#include <limits.h>
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

    while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign *= -1;

        i++;
    }

    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
            {
                if (sign == 1)
                    return (INT_MAX);
                else
                    return (INT_MIN);
            }

            res = res * 10 + s[i] - '0';
        }
        else
            break;

        i++;
    }

    return (res * sign);
}
