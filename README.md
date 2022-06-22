# The Standard Toolkit
This is The Standard Toolkit, this libary is intended to be an extension to the standard library for C/C++.

The Standard Toolkit automates processes that are not usually automated, aswell as adding function that save developers some time.


## Docs

This is the basic documentation of each function from the Standard Toolkit

To include this library in your project, simply do:
```
#include "standard-toolkit/stdtoolkit.h"
```
Ensure the library is in the project folder, if you put the library with standard headers, user <> instead of ""

### Arithmatic (arithmatic.h)

#### add(int, int)
returns the sum of two integers

#### subtract(int, int)
returns the product of two integers after subtraction

#### multiply(int, int)
returns the product of two integers after multiplication

#### division(int, int)
returns the product of two integers after division

### Current Time (curtime.h)

#### curtime()
Outputs the current time and date when executed

#### cltime()
Outputs the current Hour, Minute and second when executed

#### caldate()
Outputs the current calender date (yy/mm/dd) when executed

### Temperature Conversion (tempconv.h)

#### tofahr(int)
Outputs the fahrenheit value of the integer passed (assumes integer passed is a celsius value)

#### tocel()
Outputs the celsius value of the integer passed (assumes integer passed is a fahrenheit value)

### Repeat (repeat.h)

#### circuit(char[], int)
Automates looping, the char is printed based on the size of the int

#### loop(char[])
Similar to repeat, will repeat until process is broken

Ex:
```
repeat("Hello, World! ", 5);
```
Output:
```
Hello, World! Hello, World! Hello, World! Hello, World! Hello, World! 
```

### Random String (randstring.h)

#### randstr(int)
Generates a random string, string length is based on size of the integer

### Swap Value (swap.h)
Currently only supports floats and integers

#### swapI(int &a, int &b)
Swaps integer values

#### swapF(float &a, float &b)
Swaps float values

Ex:
```
//swapI example
int big = 5;
int small = 2;

swapI(&big, &small);

printf("Big: %d, Small: %d\n\n", big, small);
```

```
//swapF example
float big = 3.25;
float small = 2.25;

swapF(&big, &small);

printf("Big: %3.2f, Small: %3.2f", big, small);
```
