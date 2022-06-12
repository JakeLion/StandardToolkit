#include <stdio.h>

//This is part of the Standard Toolkit by Jacob Cornelison

void repeat(char string[], int rate)
{
    for (int i; i <= rate; i++)
    {
        printf("%s", string);
    }
}
