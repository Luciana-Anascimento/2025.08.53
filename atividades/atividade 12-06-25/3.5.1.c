#include<stdio.h>

int main(){
    int numero;

        printf("Digite um número inteiro: ");
        scanf("%d", &numero);
    
    if(numero > 0){
       printf("O número %d é positivo.\n", numero);
    } else if (numero < 0) {
        printf("O número %d é negativo.\n", numero);
    } else {
        printf("O número é nulo.\n");
    }

    return 0;
}
