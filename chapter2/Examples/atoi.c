#include <stdio.h>

int main(){
    char num[] = "1234";
    int n = 0;

    for (int i = 0; i < 5 && num[i] >= '0' && num[i] <= '9' ; i++){
        n = n * 10 + (num[i] - '0');
    }

    printf("Your number: %d\n", n);
}