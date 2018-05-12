#include <stdio.h>
#include <stdlib.h>

int main() {

    int age;
    int birthYear;
    int currentYear;

    birthYear = 1999;
    currentYear = 2018;

    age = currentYear - birthYear;

    printf("Maria is %d years old\n", age);

    return 0;
}