//Funções C - Tipos de Retorno e Parametros
#include<stdio.h>
//Funções sem parametros e sem retorno
void saudacao(){
    printf("Olá! Bem-vindo à nossa aplicação.∖n");
  }
  //Função com parametro e sem retorno
  void exibirMensagem(char mensagem[]{
    printf("Mensagem Recebida:%s∖n",mensagem);
  }  
int soma(int a, int b);{
    return a + b;
}
int main(){
    saudacao();
    exibirMensagem("Isso e um exemplo de funcao com parametros");
    
    int x = 5, y = 3;
    //Chamada da função
    int resultado = soma(x,y);
    printf("A soma de %d e %d e: %d∖n" , x, y, resultado);
    return 0;
}
// Definição da função
int soma(int a, int b){
return a + b;
}  
    