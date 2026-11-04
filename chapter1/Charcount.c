#include <stdio.h>

int main(){
    int c, nc = 0, nl = 0, nb = 0, nt = 0;

    while((c = getchar()) != EOF){
        ++nc;
        putchar(c);
        if (c == '\n') ++nl;
        if (c == '\t') ++nt;
        if (c == ' ') ++nb;
    }

    printf("The value of EOF: %d", c);
    printf("\nTotal Characters: %d\n", nc);
    printf("Total lines: %d\n", nl);
}