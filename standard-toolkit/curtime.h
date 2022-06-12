#include <stdio.h>
#include <time.h>

//This is part of the Standard Toolkit by Jacob Cornelison

void curtime()
{
    time_t t;
    time(&t);
    printf("%s", ctime(&t));
}

void cltime()
{
    time_t seconds;
    struct tm *timeStruct;
    seconds = time(NULL);
    timeStruct = localtime(&seconds);
    printf("%d:%d:%d\n", timeStruct->tm_hour, timeStruct->tm_min, timeStruct->tm_sec);
}

void caldate()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("%d-%02d-%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
}
