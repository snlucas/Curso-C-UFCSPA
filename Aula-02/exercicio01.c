#include <stdio.h>

int main(){
	float raio, perimetro, circunscrito;

	printf("Digite o raio do circulo:\n");
	scanf("%f", &raio);
	
	circunscrito = raio*raio;
	perimetro = 4 * raio;

	printf("O valor do perimetro e: %.2f\n", perimetro);	
	printf("O valor da area do maior quadrado circunscrito e: %.2f\n", circunscrito);

	return 0;
}
