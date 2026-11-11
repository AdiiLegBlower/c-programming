#include <stdio.h>

int countBits( unsigned int x){
    int b;
    for (b = 0; x != 0; x >>=1 ){
        if (x & 1){
            b++;
        }
    }
    return b;
}

int main (){
    printf("Number of bits: %d\n", countBits(255));
}