#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	float peso, altura;	
}tipoIMC;

void cal_imc(tipoIMC imc){
	float resultado;
	resultado = imc.peso/pow(imc.altura,2);
	printf("IMC: %.1f\n", resultado);
	
}


int main() {
	tipoIMC *imc;
	imc = malloc(sizeof(tipoIMC));
	printf("Escreva seu peso:");
	scanf("%f", &imc->peso);
	printf("Escreva sua altura:");
	scanf("%f", &imc->altura);
	cal_imc(*imc);
}
-------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	float peso, altura;	
}tipoIMC;

float cal_imc(tipoIMC imc){
	float resultado;
	resultado = imc.peso/pow(imc.altura,2);
	return resultado;
}
int main() {
	tipoIMC *imc;
	float resultado;
	imc = malloc(sizeof(tipoIMC));
	printf("Escreva seu peso:");
	scanf("%f", &imc->peso);
	printf("Escreva sua altura:");
	scanf("%f", &imc->altura);
	resultado= cal_imc(*imc);
	printf("%.1f\n", resultado);
}
---------------------------------------------------------------------------------------------------------------------------
  #include <stdio.h>
#include <stdlib.h>
#include <math.h>

float soma(float *v, int tam){
	int i;
	float r=0;
	for(i=0; i<tam; i++)
	r = r + v[i];
	return r;
}
	
int main() {

float *vet;
int t;
int i;
	printf("Digite o tamanho do seu vetor:");
	scanf("%d", &t);
	vet = malloc(t*sizeof(float));
	
	for(i=0; i<t; i++)
		vet[i] = i*i+3;
	printf("%.1f\n", soma(vet,t));
	
	for(i=0; i<t; i++)
		vet[i] = i*i;
	printf("A soma dos vetores é: %.1f\n", soma(vet,t));
}
