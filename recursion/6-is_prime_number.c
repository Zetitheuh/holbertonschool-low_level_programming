#include <math.h>

/**
 * Checks if a given number is a prime number.
 *
 * @param n The integer to check.
 * @return 1 if n is a prime number, 0 otherwise.
 */
	int is_prime_number(int n) {
	int i;

    // Handle special cases
	if (n <= 1) 
	{
		return 0; // 0 and 1 are not prime numbers
	}
	if (n == 2) {
	return 1; // 2 is the only even prime number
	}
	if (n % 2 == 0)
	{
        return 0; // Other even numbers are not prime
	}

    // Check for divisibility from 3 up to sqrt(n)
	for (i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0)
		{
			return 0; // n is divisible by i, hence not prime
		}
	}

return 1; // n is a prime number
}

