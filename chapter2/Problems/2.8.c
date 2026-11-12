#include <stdio.h>
#include <limits.h>

int rightrot(unsigned int x, int n){
    int length = sizeof(x) * CHAR_BIT;
    unsigned int mask = (x & (~0U >> (length - n))) << (length - n);
    printf("%d\n", mask);
    x = x >> n;
    return x | mask;
}

int main (){
    printf("%u\n", rightrot(182, 2));
}