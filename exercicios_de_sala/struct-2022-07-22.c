#include <stdio.h>
struct pessoa{
	char nome[20];
	int idade;
};
int main(){
	struct pessoa var1;
	printf("Escreva seu nome:\n");
	scanf("%s", var1.nome);
	printf("Escreva sua idade:\n");
	scanf("%d", &var1.idade);
	printf("Nome:%s\nIdade:%d\n", var1.nome, var1.idade);
}
