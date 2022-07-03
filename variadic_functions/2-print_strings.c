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
	char *tmp;

	if (n)
	{
		va_start(arg, n);
		while (i < n - 1)
		{
			tmp = va_arg(arg, char *);

			printf("%s%s", tmp != NULL ? tmp :  "(nil)", separator ? separator : "");
			i++;
		}
		tmp = va_arg(arg, char *);
		printf("%s", tmp ? tmp : "(nil)");
		va_end(arg);
	}
	printf("\n");
}
