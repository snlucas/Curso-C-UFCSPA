#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;

    printf("\nDigite o valor de a: \n");
    scanf("%f", &a);

    printf("\nDigite o valor de b: \n");
    scanf("%f", &b);

    printf("\nDigite o valor de c: \n");
    scanf("%f", &c);

    float D = ((b * b) - 4 * a * c);

    if(D >= 0){
        float x1, x2;

        x1 = (-b+sqrt(D))/2*a;
        x2 = (-b-sqrt(D))/2*a;

        printf("\nValor de X1: %.2f", x1);
        printf("\nValor de X2: %.2f", x2);
    } else {
        printf("\nRaizes Imaginarias.");
    }

    return 0;
}