#include "main.h"

/**
 * _abs - prints the absolute value a argument
 * @i: integer argument function will be working on
 * Return: Returns the absolute value of the argument i
 */
int _abs(int i)
{
	int a;

	if (i < 0)
	{
		a = 0;
		while (i < 0)
		{
			a++;
			i++;
		}
		return (a);
	}
	else
		return (i);
}
