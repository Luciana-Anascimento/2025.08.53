#include <stdio.h> 
#include <limits.h> 

int main() {
    int idade;              
    char sexo;              
    float salario;          

    int maiorIdade = INT_MIN; 
    float somaSalarios = 0.0; 
    int totalMoradores = 0;   
    int quantidadeMulheres = 0; 
    int salarioAbaixo500 = 0; 

    printf("--- Coleta de Dados dos Moradores do Bairro ---\n");
    printf("Digite 0 para a idade quando quiser encerrar a pesquisa.\n\n");

    while (1) { 
        printf("Digite a idade do morador: ");
        scanf("%d", &idade);

        if (idade == 0) {
            break; 
        }

        if (idade < 0) {
            printf("Idade inválida! Por favor, digite uma idade não negativa.\n");
            continue; 
        }

        printf("Digite o sexo do morador ('m' para masculino, 'f' para feminino): ");
        
        scanf(" %c", &sexo);

        if (sexo != 'm' && sexo != 'f' && sexo != 'M' && sexo != 'F') {
            printf("Sexo inválido! Por favor, digite 'm' ou 'f'.\n");
            continue; 
        }

        printf("Digite o salário do morador: ");
        scanf("%f", &salario);

        
        if (salario < 0) {
            printf("Salário inválido! Por favor, digite um salário não negativo.\n");
            continue; 
        }

        totalMoradores++; 

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        somaSalarios += salario;

        if (sexo == 'f' || sexo == 'F') {
            quantidadeMulheres++;
        }

        if (salario < 500.0) {
            salarioAbaixo500 = 1; 
        }

        printf("-- Dados registrados com sucesso! --\n\n");
    }

    printf("\n--- Análise dos Dados Coletados ---\n");

    if (totalMoradores == 0) {
        printf("Nenhum dado foi inserido. Pesquisa encerrada sem informações.\n");
    } else {
        printf("a. A maior idade encontrada: %d anos\n", maiorIdade);

        if (totalMoradores > 0) {
            printf("b. A média salarial: R$ %.2f\n", somaSalarios / totalMoradores);
        } else {
            printf("b. Não foi possível calcular a média salarial (nenhum morador com dados válidos).\n");
        }

        printf("c. A quantidade de mulheres: %d\n", quantidadeMulheres);

        printf("d. Existe salário abaixo de R$ 500? %s\n", (salarioAbaixo500 ? "Sim" : "Não"));
    }

    return 0; 
}
