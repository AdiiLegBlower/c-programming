#include <stdio.h>
int main(){
    int arr[20] = {0}, wl = 0, c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n'){
            ++arr[wl];
            wl = 0;
        }
        else {
            ++wl;
        }
    }

    if (wl != 0){
        ++arr[wl];
        wl = 0;
    }

    for (int i = 0; i < 20; i++){
        printf ("\n%d: ", i);
        for (int j = arr[i]; j > 0; j--){
            printf("*");
        }
    }
    
}