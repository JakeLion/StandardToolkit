#include <stdio.h>

//This is part of the Standard Toolkit by Jacob Cornelison

void circuit(char string[], int rate)
{
    for (int i; i <= rate; i++)
    {
        printf("%s", string);
    }
}

void loop(char string[])
{
    while (1)
    {
        printf("%s", string);
    }
}
