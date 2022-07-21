#include "main.h"

/**
*_this_is_prime - recursively if a number is prime
*@n: Integer
*@divisor: Checker number
*
*Return: 1 if number is prime,else 0
*/
int _this_is_prime(int n, int divisor)
{
	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (_this_is_prime(n, divisor + 1));
{
/**
*_is_prime_number - calls @_this_is_prime
*@m:given number
*Return: 1 if prime number,else 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (this_is_prime(n, 2));
{
