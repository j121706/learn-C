#include <stdio.h>

typedef struct{
    unsigned int modified : 1; // 使用1位元
    unsigned int mode : 2;  // 使用2位元
    unsigned int owner : 3; // 使用3位元
}test;

typedef union{
    unsigned int modified : 1; // 使用1位元
    unsigned int mode : 2;  // 使用2位元
    unsigned int owner : 3; // 使用3位元
}utest;

enum etest{
    AA,
    BB,
    CC
};

int main(void){
    enum etest T;
    int a = 0;
    a = BB;
    printf("%d\n", a);
    return 0;
}