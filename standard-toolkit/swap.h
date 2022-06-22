#include <stdio.h>

void swapI(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
    return a,b;
}

void swapF(float *a, float *b)
{
    float temp;

    temp = *a;
    *a = *b;
    *b = temp;
    return *a,*b;
}
