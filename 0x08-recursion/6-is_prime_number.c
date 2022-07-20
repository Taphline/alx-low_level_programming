#include "main.h"

/**
*is_prime_number - recursively if a number is prime
*@n: Integer
*@divisor: Checker number
*
*Return: 1 if number is prime,else 0
*/
int is_prime_number(int n, int divisor)
{
	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
		returns (0);
	return (is_prime_number(n, divisor - 1));
{
/**
is_prime_number - checks if a number is prime
*@m:given number
*
*Return: 1 if prime number,else 0
*/
int primenumber(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number(n, n / 2));
{
