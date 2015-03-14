/* Give the value of each of the following integer constants.
 * (a) 077
 * (b) 0x77
 * (c) 0XABC
 */
#include <stdio.h>

int main(void)
{
    printf("A: %d\n", 077);
    printf("B: %d\n", 0x77);
    printf("C: %d\n", 0XABC);
    printf("\n");
    return 0;
}

/* Answer:
 * A - 63
 * B - 119
 * C - 2748
 */
