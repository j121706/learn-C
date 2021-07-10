// Type your code here, or load an example.
#include <stdio.h>

// Q8
#define set(input, n) input = (input | (1 << n))
#define clear(input, n) input = (input & ~(1 << n))
#define inverse(input, n) input = (input ^ (1 << n))

// Q16
#define MIN(A, B) ((A < B)? A:B)

// Q17
#define SWAP(A, B)  \
    A = A + B,      \
    B = A - B,      \
    A = A - B       \

// Q18
#define square(a) a = a * a

void Q7(void){
    int a[5] = {1, 2, 3, 4, 5};
    int *p = (int*)(&a + 1);

    printf("*(a+1) = %d\n", *(a+1));
    printf("(*p-1) = %d", (*p-1));
}

int Q12(int N){
    return (N*(N + 1)) / 2;
}

void Q13(char *str){
    char tmp[sizeof(str)];
    int ind = 0;
    for(int i = sizeof(str) - 2; i >= 0; i--){
        tmp[ind] = *(str + i);
        printf("%d\n", *(str + i));
        ind++;
    }
    for(int i = 0; i <= sizeof(str) - 2; i++){
        *(str + i) = tmp[i];
    }    
}

int main(void) {
    // Q7();
    // int A = 0b0;
    // char str[7] = {1, 2, 3, 4, 5, 6, 7};
    // printf("%d\n", A);
    // inverse(A, 4);
    // printf("%d\n", A);


    // printf("%d\n", Q12(10));

    // Q13(str);
    // for(int i = 0; i <= sizeof(str) - 1; i++){
    //     printf("%d", str[i]);
    // }  

    // printf("%d\n", MIN(90, 9)); 

    // int A = 9;
    // int B = 2;
    // printf("A = %d, B = %d\n", A, B);
    // SWAP(A, B); 
    // printf("A = %d, B = %d\n", A, B); 

    int a = 4;
    printf("%d\n", a);
    square(a);
    printf("%d\n", a);

    return 0;
}