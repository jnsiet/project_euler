/*
 * Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2,
 * the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 * By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int fibo_a = 0, fibo_b = 1, fibo_c, sum = 0;

	for (fibo_c = 1; fibo_c <= 4000000; fibo_c = fibo_a + fibo_b)
	{
		fibo_c = fibo_a + fibo_b;
		fibo_a = fibo_b;
		fibo_b = fibo_c;

		if (fibo_c % 2 == 0)
		{
			sum += fibo_c;
		}
	}

	printf("Answer: %d\n", sum);

	return 0;
}
