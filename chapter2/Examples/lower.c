#include <stdio.h>

int main(){
    char Arr[] = "APPLE";

    for (int i = 0; i < 6; i++){
        if (Arr[i] >= 'A' || Arr[i] <= 'Z'){
            Arr[i] = Arr[i] + 'a' - 'A';
        }
    }

    printf("Your text is: %s", Arr);
}