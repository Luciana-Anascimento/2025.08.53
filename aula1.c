#include<stdio.h>

int main(){
    //Variaveis
    int  idade = 20;
    float valorDoPgto = 12.42;
    double velParticula = 2.92817029837;
    char tipoHabMotor = 'A';

    //instrucoes
    printf("Informe a idade ");
    scanf("%d" , &idade);
    printf("Informe o valor do Pagamento ");
    scanf("%f" , &valorDoPgto);
    printf("Informe a velocidade da particula ");
    scanf("%lf" , &velParticula);
    printf("Informe o tipo de habilitacao ");
    scanf("%c" , &tipoHabMotor);

    printf("Dados Informados: %d, %f, %lf, %c", idade, valorDoPgto, velParticula, tipoHabMotor);

    return 0;

}   