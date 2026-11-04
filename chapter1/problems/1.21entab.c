#include <stdio.h>

int checkspaces(int pos, int spaces);

int main(){
    int c;
    int spaces = 0;
    int pos = 0;
    while ((c = getchar()) != EOF)
    {
        if(c == '\n'){
            int moved = checkspaces(pos, spaces);
            pos += moved;
            int n = spaces - moved;
            
            for (int i = 0; i < n; i++){
                putchar(' ');
                pos++;
            }
            spaces = 0;
            pos = 0;
            putchar(c);
        }
        else if (c == ' '){
            spaces++;
        }

        else {
            int moved = checkspaces(pos, spaces);
            pos += moved;
            int n = spaces - moved;
            for (int i = 0; i < n; i++){
                putchar(' ');
                pos++;
            }
            spaces = 0;
            putchar(c);
            pos++;
        }
    }
    
}

int checkspaces(int pos, int spaces){
    int m = 0;
    int moved = 0;
    while (spaces > moved)
    {
        int dist = 8 - (pos % 8);
        if (spaces < moved + dist){
           break;
        }
        
        moved += 8 - (pos % 8);
        pos += 8 - (pos % 8);
        m++;
    }

    for (int i = 0; i < m; i++){
        putchar('\t');
    }
    
    return moved;
}