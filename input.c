#include <stdio.h>
#include <stdlib.h>

int main() {

    char name[20];
    int age;

    printf("What's your name?\n");
    scanf("%s", name);

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("Your name is %s and you are %d years old\n", name, age);

    return 0;
}