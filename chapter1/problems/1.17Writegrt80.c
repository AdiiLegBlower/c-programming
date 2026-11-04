#include <stdio.h>

#define MAXLINE 1000

int fetchline(char s[], int lim);
void copy(char to[], char from[]);

int main(){
    char line[MAXLINE];
    char longest[MAXLINE];
    int max = 0;
    int len;

    while ((len = fetchline(line, MAXLINE)) > 0)
    {
        if (len >= 80){
            printf("%s", line);
        }
        if (len > max){
            max = len;
            copy(longest, line);
        }
    }
    
    printf("The longest line: %s\n The max length: %d", longest, max);
}

int fetchline(char s[], int lim){
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }

    if (c == '\n'){
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]){
    int i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        i++;
    }
    
}
