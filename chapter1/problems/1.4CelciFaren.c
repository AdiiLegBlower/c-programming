#include <stdio.h>
int main (){
    float celci, faren;
    int step, low, high;

    low = 0, step = 20, high = 300;
    celci = low;

    while (celci < high)
    {
        faren = (celci * (9.0/5.0)) + 32;
        printf("%3.0f : \t %6.2f\n", celci, faren);
        celci += step;
    }
    

}