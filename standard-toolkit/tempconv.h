#include <stdio.h>

//This is part of the Standard Toolkit by Jacob Cornelison

int fahrenheit, celsius;

int tofahr(int temp)
{
    fahrenheit = (temp * 1.8) + 32;
    return fahrenheit;
}

int tocel(int temp)
{
    celsius = 5 * (temp-32) / 9;
    return celsius;
}


