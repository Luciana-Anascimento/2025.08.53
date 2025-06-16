#include<stdio.h>

int main(){
    float valor_compra, valor_total;
    int tipo_produto;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    printf("Digite o tipo do produto (0 para taxa de 10%% ou qualquer outro número para taxa de 20%%): ");
    scanf("%d", &tipo_produto);

    if (tipo_produto == 0) {
        valor_total = valor_compra + (valor_compra * 0.10); // 10% de taxa
    } else {
        valor_total = valor_compra + (valor_compra * 0.20); // 20% de taxa
    }

    printf("O valor total a ser pago é: %.2f \n", valor_total);

    return 0;
}
