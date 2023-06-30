#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	int i;
	va_list ap;
	char *str;

	va_start(ap, format);

	i = 0;
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
