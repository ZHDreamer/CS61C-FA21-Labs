#include <stdio.h>

#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
    /* YOUR CODE HERE */
    unsigned bit = 1 & (x >> n);
    return bit; /* UPDATE WITH THE CORRECT RETURN VALUE*/
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1
 */
void set_bit(unsigned *x, unsigned n, unsigned v) {
    /* YOUR CODE HERE */
    // A = A*B+A*^B
    // unsigned mask = ~(v << n) ^ (1 << n);
    // *x = (*x & mask) | ((*x ^ (1 << n)) & mask);
    // A = (A+B)*(A+^B)
    unsigned mask = v << n;
    *x = (*x | mask) & ((*x ^ (1 << n)) | mask);
}

/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n) {
    /* YOUR CODE HERE */
    *x ^= (1 << n);
}
