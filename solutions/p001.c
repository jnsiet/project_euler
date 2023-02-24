/*
 * If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int result = 0, multiple_three, multiple_five;

	for (multiple_three = 0; multiple_three * 3 < 1000; multiple_three++)
	{
		if (multiple_three % 5 != 0)
			result += multiple_three * 3;
	}

	for (multiple_five = 0; multiple_five * 5 < 1000; multiple_five++)
	{
		result += multiple_five * 5;
	}

	printf("Answer: %d\n", result);

	return 0;
}
