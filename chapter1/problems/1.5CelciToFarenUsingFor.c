#include <stdio.h>
int main(){
    for (int celci = 300; celci >= 0; celci = celci - 20){
        printf("%3d : %6.2f\n", celci, (9.0/5.0)*celci + 32);
    }
}