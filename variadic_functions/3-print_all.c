#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints all parameters with separator
 * @format: print by format
 */
void print_all(const char * const format, ...)
{
	int x = 0, i = 0;
	va_list arg;
	char *tmp;

	while (format[i])
		i++;
	va_start(arg, format);
	while (x < i)
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
					x++;
					continue;
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
		if (x < i - 1 && (format[x] == 's' || format[x] == 'c' ||
					format[x] == 'f' || format[x] == 'i'))
			printf(", ");
		x++;
	}
	printf("\n");
}
