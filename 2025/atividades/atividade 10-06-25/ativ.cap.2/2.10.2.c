#include<stdio.h>

int main(){

    char c1, c2, c3;

    printf("Informe o primeiro caractere: ");
    scanf(" %c", &c1);
    printf("Informe o segundo caractere: ");
    scanf(" %c", &c2);
    printf("Informe o terceiro caractere: ");
    scanf(" %c", &c3);

    printf("A palavra formada é: %c-%c-%c \n", c3, c2, c1);

    return 0;
}
