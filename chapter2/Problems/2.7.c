#include <stdio.h>
#include <limits.h>

int invert(unsigned int x, int p, int n){
    int length = sizeof(x) * CHAR_BIT;
    x = (x  ^ ((~0U << (p + 1 - n)) & (~0U >> (length - p))));
    return x;
}

int main(){
    printf("%d\n", invert(182,5, 3));
}