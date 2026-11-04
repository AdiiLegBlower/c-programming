#include <stdio.h>
int main(){
    int c = 0;
    int pos = 0;
    int inword = 0;
    char word[1000];
    int i = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t'){
            int m = 8 - (i % 8);
            for (int j = 0; j < m; j++){
                word[i] = ' ';
                i++;
            }
            
        }
        else {
            word[i] = c;
            i++;
        }
        
    }
    word[i] = '\0';
    int j = 0;
    int lastBlank = 0;
    while (j < i){

        if (word[j] == ' '){
            lastBlank = j;
            inword = 0;
            pos++;
            j++;
        }
        else if (word[j] == '\n'){
            putchar(word[j]);
            pos = 0;
            break;
        }
        
        if((pos % 20) == 0 && inword == 1){
            pos = 0;
            putchar('\n');
            j = lastBlank;
        }
        else {
            putchar(word[j]);
            j++;
            pos++;
            inword = 1;
        }
    }
}