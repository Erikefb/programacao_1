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

----------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
typedef struct{
	char nome[20];
	int idade;
}pessoa;
int main(){
	pessoa var1;
	printf("Escreva seu nome:\n");
	scanf("%s", var1.nome);
	printf("Escreva sua idade:\n");
	scanf("%d", &var1.idade);
	printf("Nome:%s\nIdade:%d\n", var1.nome, var1.idade);
}

--------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
typedef struct{
	char nome[20];
	int idade;
	float nota;
}tipo_aluno;

int main(){
	tipo_aluno aluno[3];
	int i;
	
	for (i=0;i<3;i++){
	printf("Escreva o nome do aluno:\n");
	scanf("%s", aluno[i].nome);
	printf("Escreva a idade do aluno:\n");
	scanf("%d", &aluno[i].idade);
	printf("Escreva a nota do aluno:\n");
	scanf("%f", &aluno[i].nota);
	printf("\n");
}

	for (i=0;i<3;i++){
	printf("Nome:%s\nIdade:%d\nNota:%.2f\n\n\n", aluno[i].nome, aluno[i].idade, aluno[i].nota);

}



}
