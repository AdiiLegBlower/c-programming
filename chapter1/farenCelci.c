#include <stdio.h>

int main(){
    int lower, upper, step;
    float faren, celci;

    lower = 0, upper = 300;
    faren = lower;
    step = 20;
    printf("Farenhite to Celcius converter\n");
    while (faren < upper)
    {
        celci = 5.0/9.0 * (faren - 32);
        printf("%3.0f : \t %6.2f\n", faren, celci);
        faren += step;
    }
}