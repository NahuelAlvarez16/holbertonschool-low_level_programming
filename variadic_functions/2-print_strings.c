#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints all parameters with separator
 * @separator: char separator
 * @n: length of the parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg;

	if (n)
	{
		va_start(arg, n);
		while (i < n - 1)
		{
			char *tmp = va_arg(arg, char *);

			printf("%s%s", tmp != NULL ? tmp :  "(nil)", separator ? separator : "");
			i++;
		}
		printf("%s", va_arg(arg, char *));
		va_end(arg);
	}
	printf("\n");
}
