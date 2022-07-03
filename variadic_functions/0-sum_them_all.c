#include <stdarg.h>
/**
 * sum_them_all - the sum of all its parameters
 * @n: length of the parameters
 * Return: the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int result = 0;
	va_list arg;

	va_start(arg, n);
	while (i < n)
	{
		result += va_arg(arg, int);
		i++;
	}
	va_end(arg);
	return (result);
}
