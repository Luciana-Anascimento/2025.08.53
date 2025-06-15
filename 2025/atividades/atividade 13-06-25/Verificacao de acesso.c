#include<stdio.h>

int main(){

    char nome[50];
    int idade, ingresso;

    // Informações do usuário
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Possui ingresso? (1 para Sim, 0 para Não): ");
    scanf("%d", &ingresso);

    // Condições de entrada
    if (idade >= 18 && ingresso == 1) {

        printf("Bem-vindo(a), %s! Você pode entrar.\n", nome);
    } else if (idade < 18) {

        printf("Entrada não permitida para menores de idade. \n");
    } else {
        printf("É necessário possuir ingresso para entrar.\n");
    }

    return 0;
}
