#include <stdio.h>

int bitcount(int n){
    int b;
    for(b = 0; n != 0; n &= (n - 1)){
        b++;
    }

    return b;
}

int main(){
    printf("Number of digits: %d\n", bitcount(15));
}