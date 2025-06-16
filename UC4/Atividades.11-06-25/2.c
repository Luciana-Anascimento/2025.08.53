#include<stdio.h>

int main(){

    // Variaveis declaradas
    int idade = 20;
    float valorDoPgto = 12.42;
    double velParticula = 2.92817029837;
    char tipoHabMotor = 'A';

    // Instruções
    printf("Informe a idade: ");
    scanf("%d", &idade);
    printf("Informe o valor do Pagamento: ");
    scanf("%d", &valorDoPgto);
    printf("Informe a velocidade da partícula: ");
    scanf("%d", &velParticula);
    printf("Informe o tipo de habilitação: ");
    scanf("%d", &tipoHabMotor);

    printf("Dados Informados: %d, %f, %lf, %c \n", idade, valorDoPgto, velParticula, tipoHabMotor);

    return 0;

}