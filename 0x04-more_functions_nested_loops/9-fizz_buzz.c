#include <stdio.h>

/**
 * main - prints the values between 1-100, for values divisible by three
 * the word fizz is printed, for those divisible by 5 buzz is returned
 * and if it is divisible by both, fizzbuzz is printed.
 * Return: Returns an integer value of zero
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 5 == 0 && n % 3 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
