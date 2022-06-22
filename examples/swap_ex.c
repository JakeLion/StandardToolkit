#include <stdio.h>
#include ".standard-toolkit/stdtoolkit.h"

//example of the swapF feature
int float_swapper()
{
    float big = 3.25;
    float small = 2.25;

    swapF(&big, &small);

    printf("Big: %3.2f, Small: %3.2f", big, small);
    return 0;
}

//example of the swapI feature
int int_swaper()
{
    int b = 5;
    int s = 2;

    swapI(&b, &s);

    printf("Big: %d, Small: %d\n\n", b, s);
    return 0;
}
