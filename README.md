# The Standard Toolkit
This is The Standard Toolkit, this libary is intended to be an extension to the standard library for C/C++.

The Standard Toolkit automates processes that are not usually automated, aswell as adding function that save developers some time.


## Docs

This is the basic documentation of each function from the Standard Toolkit

How to include:
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

#### repeat(char[], int)
Automates looping, the char is printed based on the size of the int

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
