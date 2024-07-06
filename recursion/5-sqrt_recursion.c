#include "main.h"

int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - Helper function to find the natural square root.
 * @n: The number to find the square root of.
 * @i: The current number to test as the square root.
 *
 * Return: The natural square root, or -1 if not found.
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (find_sqrt(n, i + 1));
}

