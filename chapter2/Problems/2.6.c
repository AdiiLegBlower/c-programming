#include <stdio.h>
#include <limits.h>

int setbits(unsigned int x, unsigned int y, int p, int n){
    int length = sizeof(x) * CHAR_BIT;
    x = x & ~((~0U << (p + 1 - n)) & (~0U >> (length - p)));
    y = (y & ~(~0U << n)) << (p + 1 - n);
    x = x | y;  
    return x;
}

int main(){
    
    int x;
    printf("%d\n", setbits(240, 5, 5, 3));

}