#include <stdio.h> 

int main() {
    int numero; 

    printf("Digite diversos numeros inteiros. O programa sera encerrado quando digitar um numero negativo.\n");

    do {
        printf("Digite um numero: "); 
        scanf("%d", &numero);         

        if (numero >= 0) {
            printf("Voce digitou: %d\n", numero);
        }

    } while (numero >= 0);

    printf("Voce digitou um numero negativo. O programa foi encerrado.\n"); 

    return 0; 
