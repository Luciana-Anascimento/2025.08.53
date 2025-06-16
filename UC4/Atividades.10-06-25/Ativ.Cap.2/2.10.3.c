#include<stdio.h>
#include<math.h>

int main(){

    float a, b, c, delta, raiz1, raiz2;

    printf("Informe o coeficiente a: ");
    scanf("%f", &a);
    printf("Informe o coeficiente b: ");
    scanf("%f", &b);
    printf("Informe o coeficiente c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (delta >= 0) {
        
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);

        printf("As raízes da equação são: %.2f e %.2f \n", raiz1, raiz2);
    } else {
        printf("A equação não possui raízes reais. \n");
    }

    return 0;
}
