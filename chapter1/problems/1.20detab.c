#include <stdio.h>

int main(){
    int c;
    int pos = 0;

    while ((c = getchar()) != EOF)
    {
        if(c == '\n'){
            pos = 0;
            putchar(c);
        }
        else if (c == '\t'){
            int n = 8 - pos % 8;
            for (int i = 0; i < n; i++){
                putchar(' ');
                pos++;
            }
        }
        else {
            putchar(c);
            pos++;
        }
    }
    
}