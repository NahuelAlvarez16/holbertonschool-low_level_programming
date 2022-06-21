#include "main.h"
/**
 * is_prime_number_int - the natural square root of a number.
 * @n: Number
 * @i: Iterator
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number_int(int n, int i)
{
	return (n > i ? (n % i == 0) ? (0) : is_prime_number_int(n, i + 1) : (1));
}

/**
 * is_prime_number - verify if is prime.
 * @n: Number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	return (is_prime_number_int(n, 1));
}
