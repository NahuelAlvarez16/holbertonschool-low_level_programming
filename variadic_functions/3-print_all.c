#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints all parameters with separator
 * @format: print by format
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	va_list arg;
	char *tmp;

	va_start(arg, format);
	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 's':
				tmp = va_arg(arg, char *);
				if (tmp)
				{
					printf("%s", tmp);
					break;
				}
				printf("(nil)");
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
		}
		if (format[x + 1] && (format[x] == 's' || format[x] == 'c' ||
				format[x] == 'f' || format[x] == 'i'))
			printf(", ");
		x++;
	}
	printf("\n");
}
