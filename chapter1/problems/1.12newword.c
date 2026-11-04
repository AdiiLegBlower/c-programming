#include <stdio.h>

int main(){
    int c, nw = 0;
    int isWord = 0;
    while ((c = getchar()) != EOF)
    {


        if (c == ' ' || c == '\t' || c == '\n'){
            if (isWord == 1) {
                ++nw;
                putchar('\n');
            }
            isWord = 0;
            continue;
        }
        else isWord = 1;
        putchar(c);

    }
    
}