#include "main.h"

/**
 * _islower - returns either 0 or 1 if input values is a lowercase character
 * @c - argument to check function against
 * Return: Returns either 0 if the alphabet is upper and 1 if it is lower
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
