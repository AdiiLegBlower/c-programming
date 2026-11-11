#include <stdio.h>
#define LIM 1000

int main(){
    int c;
    char s[LIM];
    int i;
    for (i = 0; (c=getchar()) != '\n' ; ++i){
        if (c == EOF){
            break;
        }
        s[i] = c;
        if (i + 1 == LIM-1){
            break;
        }
    }

    s[i] = '\0';
}