#include <stdio.h>

struct Stest{
    int a;
    char b;
    short c;
}V;

union Utest{
    int x;
    short y;
    double z;
};

union u
{
    double a;
    int b;
};

union u2
{
    char a[13];
    int b;
};

union u3
{
    char a[13];
    char b;
};

union ex{
    short i;
    char x[2];
};

int main(void){
    union Utest U;
    // union u E;
    // union u2 R;
    // union u3 T;
    union ex T;
    // U.x = 9;
    // U.y = 4;
    // U.x = 77;
    // printf("%d\n", U.x);
    // printf("%f\n", U.y);
    // printf("size: %d\n", sizeof(U));
    // printf("size: %d\n", sizeof(E));
    // printf("size2: %d\n", sizeof(R));

    T.x[0] = 10;
    T.x[1] = 1;
    printf("%d\n", T.i);
    return 0;
}