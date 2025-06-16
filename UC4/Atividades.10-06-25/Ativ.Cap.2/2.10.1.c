#include<stdio.h>

int main(){

    float distancia, tempo, velocidade;

    // Distância
    printf("Informe a distância (em metros): ");
    scanf("%f", &distancia);

    // Tempo
    printf("Informe o tempo (em segundos): ");
    scanf("%f", &tempo);

    if (tempo != 0) {
        // Calcula a velocidade
        velocidade = distancia / tempo;

        printf("A velocidade do objeto é: %.2f m/s\n", velocidade);
    } else {
        printf("O tempo não pode ser zero.\n");
    }

    return 0;
}
