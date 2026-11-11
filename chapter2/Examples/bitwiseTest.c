#include <stdio.h>

int main(){
    int n = 776; // 1100001000
    int m = 894; // 1101111110
    int p = 0;   // 0000000000

    p = m | n;
    printf("m | n = %d\n", p);

    p = m & n;
    printf("m & n = %d\n", p);
}