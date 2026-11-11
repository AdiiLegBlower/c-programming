#include <stdio.h>

void squeeze(char arr[], int c){
    int i, j;
    for (i = j = 0; arr[i] != '\0'; i++){
        if (arr[i] != c){
            arr[j++] = arr[i];
        }
    }
    arr[j] = '\0';
    printf("%s", arr);
}

int main(){
    char s[] = "hello, world";
    squeeze(s, 'l');
}