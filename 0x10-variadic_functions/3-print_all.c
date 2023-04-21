#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all the arguments it is supplied
 * @type_list: The list of argument types supplied to the function
 * Return: Void
 */
void print_all(const char * const type_list, ...)
{
	int x = 0, y = 0, flag = 0;
	char *s;
	va_list arg_list;

	va_start(arg_list, type_list);
	while (type_list && type_list[y] != '\0')
	{
		switch (type_list[y])
		{
		case 'c':
			printf("%c", (char) va_arg(arg_list, int));
			flag = 1;
			break;
		case 'i':
			printf("%i", va_arg(arg_list, int));
			flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(arg_list, double));
			flag = 1;
			break;
		case 's':
			s = va_arg(arg_list, char *);
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			flag = 1;
			break;
		}
		x++;
		if (flag == 1 && type_list[y + 1] != '\0')
			printf(", ");
		flag = 0;
		y++;
	}
	printf("\n");
}
