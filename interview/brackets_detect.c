/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{ 
    int cir_flag = 0;
    int rec_flag = 0;
    int big_flag = 0;
    
    int length = 0;
    scanf("%d", &length);
    char input[length];
    scanf("%s", input);
    
    printf("%ld\n", sizeof(input));
    for(int i = 0; i < sizeof(input); i++){
        // L case
        if(input[i] == '('){
            cir_flag += 1;
        }
        if(input[i] == '['){
            rec_flag += 1;
        }
        if(input[i] == '{'){
            big_flag += 1;
        }
        // R case
        if(input[i] == ')'){
            // error case
            if(rec_flag >= 1 || big_flag >= 1){
                printf("false\n");
                break;
            }
            cir_flag -= 1;
        }
        if(input[i] == ']'){
            // error case
            if(cir_flag >= 1 || big_flag >= 1){
                printf("false\n");
                break;
            }
            rec_flag -= 1;
        }
        if(input[i] == '}'){
            // error case
            if(rec_flag >= 1 || cir_flag >= 1){
                printf("false\n");
                break;
            }
            big_flag -= 1;
        }
    }
    
    if(cir_flag == 0)
        if(rec_flag == 0)
            if(big_flag == 0)
                printf("true\n");
    
    return 0;
}
