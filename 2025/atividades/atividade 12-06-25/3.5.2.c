#include<stdio.h>

int main(){
    
    float n1, n2, n3;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    printf("Digite o terceiro número: ");
    scanf("%f", &n3);

   float maior = n1;

   if (n2 > maior) {
        maior = n2;
    }

    if (n3 > maior) {
        maior = n3;
    }

    printf("O maior número digitado é: %.2f\n", maior);

    return 0;
}
