#include <stdio.h>

void squeeze(char arr1[], char arr2[]){
    for (int i = 0; arr2[i] != '\0'; i++){
        int c = arr2[i];
        int j, k;
        for (j = k = 0; arr1[j] != '\0'; j++){
            if (arr1[j] != c){
                arr1[k++] = arr1[j];
            }
        }
         arr1[k] = '\0';
    }
   
    printf("%s\n", arr1);
}

int main(){
    char s1[] = "programming";
    char s2[] = "gaming";
    squeeze(s1, s2);
}

