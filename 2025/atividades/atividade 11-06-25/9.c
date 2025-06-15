#include<stdio.h>

int main(){

    int array[5] = {1,2,3,4,5};
    int *ponteiro1 = &array[2];
    int *ponteiro2 = &array[0];

    printf("A diferença de ponteiro é %d \n", ponteiro1 - ponteiro2);

    return 0;
    
}