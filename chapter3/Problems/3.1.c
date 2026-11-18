#include <stdio.h>

int binsearch(int x, int v[], int n);

int main(){
    int v[5] = {5,10, 35, 40, 96};
    printf("%d\n", binsearch(35, v, 5));
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;
    if (v[low] > x || v[high] < x )
    return -1;

    while (low < high) {
        mid = (low + high)/2;
    if (x <= v[mid]){
        high = mid;
    }
    else{
        low = mid + 1;
    } 
    }

    if (v[low] == x)
    return low;
    else
    return -1; /* no match */
}