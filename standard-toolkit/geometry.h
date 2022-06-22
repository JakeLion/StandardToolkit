#include <stdio.h>

//This is part of the Standard Toolkit by Jacob Cornelison

const float pi = 3.1415926;

float spherevol(int radius)
{
    float volume = (4*pi*radius*radius*radius) / 3.0;
    return volume;
}

int cubevol(int length, int width, int height)
{
    int volume = length*width*height;
    return volume;
}

int pyramidvol(int length, int width, int height)
{
    int prefinder = length*width*height;
    int volume = prefinder / 3;
    return volume;
}

float cylindervol(int radius, int height)
{
    float volume = pi * radius*radius*height;
    return volume;
}

float circlecircum(int radius)
{
    float circ = 2*pi*radius;
    return circ;
}


float circlearea(int radius)
{
    float area = pi*radius*radius;
    return area;
}
