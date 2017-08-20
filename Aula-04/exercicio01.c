#include <stdio.h>

int main(){

	float p1, p2, p3, t1, t2, mf, frequencia;

	printf("Digite a frequencia do aluno: ");
	scanf("%f", &frequencia);

	printf("p1: ");
	scanf("%f", &p1);

	printf("p2: ");
	scanf("%f", &p2);

	printf("p3: ");
	scanf("%f", &p3);

	printf("t1: ");
	scanf("%f", &t1);

	printf("t2: ");
	scanf("%f", &t2);

	mf = 2.5 * p1 + 2.5 * p2 + 3.5 * p3 + 0.75 * (t1 + t2);

        if(frequencia >= 0.75){
		
		if(((p1 < 3) || (p2 < 3)) || ((t1 == 0) || (t2 == 0) || (mf < 6))){
		        printf("Conceito D");
		} else if(mf >= 9){
		        printf("Conceito A");
		} else if(mf >= 7.5 && mf < 9){
		        printf("Conceito B");
		} else{
		printf("Conceito C");
		}
		
	} else{
	        printf("Conceito: FF");
	}
	
	return 0;
}
