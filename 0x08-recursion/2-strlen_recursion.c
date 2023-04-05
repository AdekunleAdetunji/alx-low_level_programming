#include "main.h"
/**
 * _strlen_recursion - prints the lenght of a string using recursion
 * @s: The string whose length is to be printed
 * Return: Returns a null value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
