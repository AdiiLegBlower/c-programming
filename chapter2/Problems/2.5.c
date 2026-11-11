#include <stdio.h>

int any(char arr1[], char arr2[]){
    for (int i = 0; arr1[i] != '\0'; i++){
        int c = arr1[i];
        for (int j = 0; arr2[j] != '\0'; j++){
            if (arr2[j] == c){
                return i;
            }
        }
        
    }
    return -1;
}

int main(){
    char s1[] = "abcdefgh";
    char s2[] = "xyzdef";
    printf("%d\n", any(s1, s2));
}