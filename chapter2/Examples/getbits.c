#include <stdio.h>
int getBits( unsigned int x, int p, int n);

int main(){
    printf("Your bits are: %d", getBits(277, 5, 3));
}

int getBits(unsigned int x, int p, int n){
    return (x >> (p - n + 1)) & ~(~0 << n);
}