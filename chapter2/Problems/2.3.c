#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>

unsigned long int htoi(char arr[]){
    unsigned long int value = 0;
    int size = strlen(arr);
    unsigned long int power = 1;
    for (int i = size - 1;  i >= 0; i--){
        if (power > ULONG_MAX / 16){
            printf ("Overflow detected\n");
            return 0;
        }



        if ((arr[i] == 'x' || arr[i] == 'X')) {
            if (i != 1){
                printf("Invalid prefix\n");
                return 0;
            }

            if (arr[i - 1] != '0'){
                printf("Invalid prefix\n");
                return 0;
            }

                continue;
        }

        if (isdigit(arr[i])){
            int n = arr[i] - '0';
            if (ULONG_MAX - value >= n * power)
                value = value + n * power;
            else {
                printf ("Overflow detected\n");
                return 0;
            }
            power = power * 16;
        }
        else if (arr[i] >= 'A' && arr[i] <= 'F'){
            int n = arr[i] - 'A' + 10;
            if (ULONG_MAX - value >= n * power)
                value = value + n * power;
            else {
                printf ("Overflow detected\n");
                return 0;
            }
            power = power * 16;
        }
        else if (arr[i] >= 'a' && arr[i] <= 'f'){
            int n = arr[i] - 'a' + 10;
            if (ULONG_MAX - value >= n * power)
                value = value + n * power;
            else {
                printf ("Overflow detected\n");
                return 0;
            }
            power = power * 16;
        }
        else {
            printf("Invalid number\n");
            return 0;
        }
    }

    return value;
}

int main (){    
    printf("Your value: %lu\n", htoi("0x2F"));
    printf("Your value: %lu\n", htoi("2F"));
    printf("Your value: %lu\n", htoi("0F"));
    printf("Your value: %lu\n", htoi("0XABC"));
    printf("Your value: %lu\n", htoi("2G"));
    printf("Your value: %lu\n", htoi("2xF"));
    printf("Your value: %lu\n", htoi("FFFFFFFFFFFFFFFF"));
    printf("Your value: %lu\n", htoi("1FFFFFFFFFFFFFFFF"));
    
}




