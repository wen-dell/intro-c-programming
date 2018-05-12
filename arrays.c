#include <stdio.h>
#include <stdlib.h>

int main() {

    char food[5] = "tuna";

    printf("The best food is %s\n", food);

    food[0] = 'y';
    food[1] = 'i';

    return 0;
}