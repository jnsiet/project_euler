/*
 * 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
 * What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */

#include <stdio.h>

int main()
{
	int dividend, divisor;

	for (dividend = 2520; ; dividend += 10)
	{
		for (divisor = 3; divisor <= 20; divisor++)
		{
			if (dividend % divisor != 0)
			{
				goto not_divisible;
			}
		}
		
		printf("Answer: %d\n", dividend);
		break;

		not_divisible:
	}

	return 0;
}