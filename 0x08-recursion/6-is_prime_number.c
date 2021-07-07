#include "holberton.h"
/**
 * prime_checker - check if number is prime.
 * @n: integer.
 * @num: prime number we check.
 *
 * Return: prime checker.
*/

int prime_checker(int n, int num)
{
	if (num == 1)
	{
		return (1);
	}
	if (n % num == 0)
	{
		return (0);
	}
	return (prime_checker(n, num - 1));
}
/**
 * is_prime_number - returns 1 to prime numbers.
 * @n: integer.
 *
 * Return: 1 if its prime, otherqwise 0.
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_checker(n, n - 1));
}
