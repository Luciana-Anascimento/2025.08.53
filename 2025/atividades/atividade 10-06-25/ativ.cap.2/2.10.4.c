#include<stdio.h>

int main(){

    int a = 1, b = 3, aux;

    printf("Antes da troca: a = %d, b = %d \n", a, b);

    aux = a;
    a = b;
    b = aux;

    printf("Depois da troca: a = %d, b = %d\n", a, b);

    return 0;
    
}
