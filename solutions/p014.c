/*
 * The following iterative sequence is defined for the set of positive integers:
 *		n → n/2 (n is even)
 *		n → 3n + 1 (n is odd)
 * Using the rule above and starting with 13, we generate the following sequence:
 *		13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
 * It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been
 * proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
 * Which starting number, under one million, produces the longest chain?
 * NOTE: Once the chain starts the terms are allowed to go above one million.
 */

#include <stdio.h>

int main()
{
    int x, number_longest_chain, chain = 1, biggest_chain;
    unsigned number;

    for (x = 13; x < 1000000; x++)
    {
        number = x;
        
        while(number != 1)
        {
            if(number % 2 == 0)
            {
                number = number / 2;
                chain++;
            }
            else
            {
                number = number * 3 + 1;
                chain++;
            }
        }
        
        if (chain > biggest_chain)
        {
            biggest_chain = chain;
            number_longest_chain = x;
        }
        
        chain = 1;
    }

    printf("Answer: %d\n", number_longest_chain);

    return 0;
}
