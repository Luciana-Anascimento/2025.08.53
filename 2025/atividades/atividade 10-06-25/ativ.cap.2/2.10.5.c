#include<stdio.h>

int main(){
    // a)Não pode declarar variaveis diferentes na mesma linha.
  int a = 1;
  float b = 3;

  printf("a = %d, b = %.1f\n", a, b);

  return 0;
}

#include<stdio.h>

int main(){ 
    // b)O scanf não estava recebendo o endereço onde deve guardar o dado.
  int a = 1;

  printf("Digite o valor:");
  scanf("%d", &a); 

  printf("a = %d\n", a);

  return 0;
}

#include<stdio.h>

int main(){
    // Em C a variavel não pode iniciar com um número.
  int a1 = 5, b2 = -2; 

  printf("Valores a1 e b2: %d %d\n", a1, b2);

  return 0;
}