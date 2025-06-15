#include<stdio.h>

#define PI 3.1415

int main(){
  
    int opcao;
    float area;

    printf("Escolha uma figura para calcular a área: \n");
    printf("1 - Círculo \n");
    printf("2 - Retângulo \n");
    printf("Digite sua opção (1 ou 2): ");
    scanf("%d", &opcao);

    if (opcao == 1) { 
        float raio;
        printf("Digite o raio do círculo: ");
        scanf("%f", &raio);
        area = PI * raio * raio; // Área do círculo
    } else if (opcao == 2) {
        float base, altura;
        printf("Digite a base do retângulo: ");
        scanf("%f", &base);
        printf("Digite a altura do retângulo: ");
        scanf("%f", &altura);
        area = base * altura; // Área do retângulo
    } else {
        printf("Opção inválida! Por favor, escolha 1 ou 2. \n");
        return 1; // Retorna um código de erro
    }

    printf("A área é: %.2f\n", area);
    return 0;
}
