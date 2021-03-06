#include <stdio.h>
#include <time.h>
#include <math.h>

//This is part of the Standard Toolkit by Jacob Cornelison

void randstr(int num_of_char)
{
    int i = 0;
    int randomizer = 0;

    srand((unsigned int)(time(NULL)));

    char numbers[] = "0123456789";
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    char symbols[] = "!@#$^&*?-_+=";
    char password[num_of_char];

    randomizer = rand() % 4;

    for (i = 0; i < num_of_char; i++) {

        if (randomizer == 1) {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 2) {
            password[i] = symbols[rand() % 12];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 3) {
            password[i] = LETTER[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else {
            password[i] = letter[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
    }
}
