#include <stdio.h> 

int main() {
    double valorCompra; 
    double somaTotal = 0.0; 

    printf("Digite os valores das compras (digite 0 para encerrar e ver o total):\n");

    do {
        printf("Valor da compra: ");
        scanf("%lf", &valorCompra); 

        if (valorCompra < 0) {
            printf("Valor invalido! Por favor, digite um valor nao negativo.\n");
        } else {
            somaTotal += valorCompra; 
        }

    } while (valorCompra != 0); 

    printf("\n--- Total das Compras ---\n");
    printf("A soma total das compras e: R$ %.2f\n", somaTotal);

    return 0; 
    
}
