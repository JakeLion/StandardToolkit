#include <stdio.h>
#include "../standard-toolkit/stdtoolkit.h"


//example of the tocel feature
int fahr_to_cel()
{
    int fahr_value = 104;

    int celval = tocel(fahr_value);
    printf("Celsius equivalent: %d\n\n", celval);
    return 0;
}
