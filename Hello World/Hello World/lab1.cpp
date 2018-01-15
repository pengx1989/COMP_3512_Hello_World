#include "lab1.h"


// Greatest Common Denominator
// PRE: a is a positive integer
// PRE: b is a positive integer
// POST: a and b are unchanged
// RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b)
{
	for (int i = (a<b) ? a:b; i >= 1; i--)
		if (a % i == 0 && b % i == 0) {
			return i;
		}
	// Replace this line with your code (have fun!).
}

// Fibonacci
// PRE: n is a positive int greater than 0
// POST: n is not changed
// RETURN: the nth positive integer in the Fibonacci sequence.
long long fibonacci(const int n)
{
	if (n <= 2)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);

	// Replace this line with your code (challenge: do this with recursion!).
}
