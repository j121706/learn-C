#include <stdio.h>

int main(void){
    char *a = "ABCD";

    printf("%c\n", a);
    printf("%c\n", *a);
    printf("%c\n", *++a);
    // printf("%c\n", *a++);
    printf("%c\n", *a);
    printf("%s\n", a);
    // printf("%s\n", *a);
    return 0;
}