#include<stdio.h>

int main(){
    int numero;

    printf("Digite um número inteiro de 1 a 4: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            printf("Número 1 selecionado: Um em inglês é one! \n");
            break;
        case 2:
            printf("Número 2 selecionado: Dois em inglês é two. \n");
            break;
        case 3:
            printf("Número 3 selecionado: Três em inglês é three. \n");
            break;
        case 4:
            printf("Número 4 selecionado: Quatro em inglês é four. \n");
            break;
        default:
            printf("Número inválido! Por favor, digite um número de 1 a 4. \n");
            break;
    }

    return 0;
}
