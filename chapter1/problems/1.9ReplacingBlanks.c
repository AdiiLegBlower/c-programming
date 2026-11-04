#include <stdio.h>

int main(){
    int c;
    int isSpaced = 0;

    while((c = getchar()) != EOF){
        if (c == ' ' && isSpaced == 0){
            isSpaced = 1;
        }
        else if (c == ' ' && isSpaced == 1) {
            continue;
        }
        else isSpaced = 0;

        if (c == '\t'){
            putchar('\\');
            putchar('t');
            continue;
        }
            
        else if (c == '\b'){
            putchar('\\');
            putchar('b');
            continue;
        }

        else if (c == '\\'){
            putchar('\\');
            putchar('\\');
            continue;
        }
            
        putchar(c);
    }

}