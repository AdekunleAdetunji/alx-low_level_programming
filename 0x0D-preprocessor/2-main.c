#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the dir from which a program is running from
 * Return: Returns 0 on success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
