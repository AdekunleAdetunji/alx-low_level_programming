/**
 * print_name - prints name supplied to its function pointer argument
 * @f: The function pointer used to format how the name is to be printed
 * @name: The character array we are to print
 * Return: Returns a void data type
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
