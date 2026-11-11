#include <stdio.h>
#include <limits.h>

int invert(unsigned int x, int p, int n){
    int length = sizeof(x) * CHAR_BIT;
    int temp = x & ~((~0U << (p + 1 - n)) & (~0U >> (length - p)));
    x = ~(x & ((~0U << (p + 1 - n)) & (~0U >> (length - p))));
    x = temp | x;
    return x;
}