#include <stdio.h>
int main(){
	float nota[5];
	int i;
	for (i=0; i<5; i++) {
	
	printf ("digite a nota do aluno %d: ", i);
	scanf("%f", &nota[i]);
	}
	for (i=0; i<5; i++){
	printf("A nota do aluno %d: %.1f\n",i ,nota[i]);

}

}
