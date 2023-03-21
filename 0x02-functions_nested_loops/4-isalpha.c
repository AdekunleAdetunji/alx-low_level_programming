#include "main.h"

/**
 * _isalpha - returns either 0 or 1 if input values is a lowercase character
 * @c: argument to check function against
 * Return: Returns either 0 if the alphabet is upper and 1 if it is lower
 */
int _isalpha(int c)
{
        if (((c >= 97) && (c <= 122)) || ((c >=65) && (c <= 90)))
                return (1);
        else
                return (0);
}
