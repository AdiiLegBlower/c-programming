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
    printf ("\n");
    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 20; j++){
            if (arr[j] >= i)
                printf ("*\t");
            else printf("\t");
        }
        printf ("\n");
    }
    
    for (int j = 0; j < 20; j++){
            printf ("%d\t", j);
        }
}