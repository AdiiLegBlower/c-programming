#include <stdio.h>

int main(){
    int c;
    int inComment = 0;
    int startComment = 0;  
    int commentType;
    int endComment = 0;

    while ((c = getchar()) != EOF)
    {
        
        if (c == '/' && startComment == 0){
            startComment = 1;
        }
        else if (startComment == 1 && (c == '/' || c == '*')){
            inComment = 1;
            startComment = 0;
            if(c == '/') commentType = 0;
            else commentType = 1;
        }

        else if (startComment == 1 && (c != '/' && c != '*')){
            startComment = 0;
            putchar('/');
        }

        if (inComment == 1 && commentType == 0 && c == '\n'){
            inComment = 0;
            startComment = 0;
        }
        else if (inComment == 1 && commentType == 1 && c == '*'){
            endComment = 1;
        }
        else if (endComment == 1 && c == '/'){
            endComment = 0;
            inComment = 0;
            startComment = 0;
        }
        else if (endComment == 1 && c != '/') endComment = 0;

        if (inComment == 1 || startComment == 1){
            continue;
        }
        else {
            putchar(c);
        }
    }

    if (startComment == 1) {
        putchar('/');
    }
}