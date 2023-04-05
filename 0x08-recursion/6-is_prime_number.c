/**
 * prime_checker - divides the prime number by all numbers half to find a
 * factor
 * @n: The prime number we are checking against
 * @a: The value we are dividing by
 * Return: Returns an integer value of 1 if it is a prime and 0 otherwise
 */
int prime_checker(int n, int a)
{
	if (n == a)
		return (1);
	if (n % a == 0)
		return (1);
	return (prime_checker(n, a++));
}
/**
 * _is_prime_number - checks wether a value is a prime number
 * @n: The value we are to check
 * Return: Returns 1 if n is a prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_checker(n, 2));
}
