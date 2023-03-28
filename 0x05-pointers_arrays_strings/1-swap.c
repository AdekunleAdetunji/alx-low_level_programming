/**
 * swap_int - swaps the values between two different addresses
 * @a: The first address
 * @b: The second address
 *
 * Return: Returns a null value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
