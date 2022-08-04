#include <stdio.h>
#include <stdlib.h>
int main(){
	int *p;
	printf("Estou apontando para %p\n", p);
	p= malloc(sizeof(int));
	printf("Estou apontando para %p\n", p);
	*p=10;
	printf("Valor de *p: %d\n", *p);
	
}
------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main(){
	int *n1, *n2, *s;
	n1 = malloc(sizeof(int));
	printf("Escreva um número:\n");
	scanf("%d", n1);
	
	n2 = malloc(sizeof(int));
	printf("Escreva um número:\n");
	scanf("%d", n2);
	
	s = malloc(sizeof(int));
	*s = *n1+*n2;
	printf("A soma é: %d\n", *s);
}
--------------------------------------------------------------------------------------------------------------------
  #include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[3], i;
	float soma=0;
	for(i=0; i<3; i++){
		printf("Digite um valor:");
		scanf("%d", &vet[i]);
}
	for(i=0; i<3; i++){
		soma = soma+vet[i];
}
	printf("Média: %.2f\n", soma/3);

}
--------------------------------------------------------------------------------------------------------------------------
  #include <stdio.h>
#include <stdlib.h>

int main(){
int *vet, i;
float soma=0;
vet = malloc(sizeof(int) *3);
	for(i=0; i<3; i++){
		printf("Digite um valor:");
		scanf("%d", &vet[i]);
}
	for(i=0; i<3; i++){
		soma = soma+vet[i];
}
	printf("Média: %.2f\n", soma/3);
}
------------------------------------------------------------------------------------------------------------------------------
  #include <stdio.h>
#include <stdlib.h>

int main(){
int *vet, *i;
float *soma;
vet = malloc(sizeof(int) *3);
soma = malloc(sizeof(float));
i = malloc(sizeof(int));
*soma = 0;
	for(*i=0; *i<3; (*i)++){
		printf("Digite um valor:");
		scanf("%d", &vet[*i]);
}
	for(*i=0; *i<3; (*i)++){
		*soma = *soma+vet[*i];
}
	printf("Média: %.2f\n", *soma/3);
}

----------------------------------------------------------------------------------------------------------------------------------
  #include <stdio.h>
#include <stdlib.h>

float media_notas(int n){
	float *notas, media;
	int i;
	notas = malloc (n*sizeof(float));
	for (i=0; i<n; i++){
		printf("ALUNO %d:", i);
		scanf("%f", &notas[i]);
}
	media = 1;
	for(i=0; i<n; i++){
		media = media + notas[i];
}
	media = media/n;
	return media;
}


int main(){
	float m;
	m = media_notas(3);
	printf("Média: %.2f\n", m);
}
