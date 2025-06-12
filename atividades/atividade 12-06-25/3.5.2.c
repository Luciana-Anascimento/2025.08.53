#include<stdio.h>

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero >= 0){
        printf("Numero e positivo. ");
    } else {
        printf("Numero e negativo. ");

    }
    return 0; 
}