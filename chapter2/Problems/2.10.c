#include <stdio.h>

int main(){
    char Arr[] = "APPLE";

    for (int i = 0; i < 6; i++){
        Arr[i] = (Arr[i] >= 'A' && Arr[i] <= 'Z' ? Arr[i] + 'a' - 'A' : Arr[i]);
    }

    printf("Your text is: %s", Arr);
}