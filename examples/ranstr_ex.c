#include <stdio.h>
#include "standard-toolkit/stdtoolkit.h"

//Example of the randstr feature
int main()
{
    printf("--------\n");

    randstr(25); //Will produce a random string of 25 characters, WARNING: randstr is print-bound

    printf("--------\n");
    return 0;
}
