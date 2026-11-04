#include <stdio.h>

#define MAXLINE 1000

int fetchline(char s[], int lim);
void copy(char to[], char from[]);
void reverseSent(char from[], int len);

int main(){
    char line[MAXLINE];
    char longest[MAXLINE];
    
    int max = 0;
    int len;

    while ((len = fetchline(line, MAXLINE)) > 0)
    {

        reverseSent(line, len);
        if (len > max){
            max = len;
            copy(longest, line);
        }
    }
    
    printf("The longest line: %s\n The max length: %d", longest, max);
    
}

int fetchline(char s[], int lim){
    int c, i;
    int  nw = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i){
        if (nw < lim - 1) {
            s[nw] = c;
            nw++;
        }
    }

    if (c == '\n' && nw < lim - 1){
        s[nw] = c;
        ++nw;
        ++i;
    }

    s[nw] = '\0';

    return i;
}

void copy(char to[], char from[]){
    int i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        i++;
    }
    
}

void reverseSent(char from[],int len){
    char reversed[MAXLINE];
    int i = len - 2;
    int j = 0;
    while (i >= 0)
    {
        reversed[j] = from[i];
        j++;
        i--;
    }

    reversed[j] = '\0';
    printf("\nReversed: %s\n", reversed);
}