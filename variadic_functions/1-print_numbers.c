#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints all parameters with separator
 * @separator: char separator
 * @n: length of the parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg;

	if (n)
	{
		va_start(arg, n);
		while (i < n - 1)
		{
			printf("%d%s", va_arg(arg, int), separator ? separator : "");
			i++;
		}
		printf("%d", va_arg(arg, int));
		va_end(arg);
	}
	printf("\n");
}
