/*Algoritmo:
Variáveis:
int A, B, C, D
Início:
ler A, B, C, D
Se A== B+C+D e B+C== D e B== C:
Escreva: está equilibrado
senão
escreva: Não está equilibrado
*/

#include <stdio.h>
int main(){

float A, B, C, D;

printf("Escreva um valor para A:\n");
scanf("%f", &A);
printf("Escreva um valor para B:\n");
scanf("%f", &B);
printf("Escreva um valor para C:\n");
scanf("%f", &C);
printf("Escreva um valor para D:\n");
scanf("%f", &D);

if (A == B+C+D && D == B+C && B == C){
printf("Está equilibrado!\n");
}
else{
printf("Não está equilibrado!\n");}

}



/*Algorítmo:
Variáveis:
int N, M, vez = 0
Início:
Ler valor de N e M
Escrever o 'total N' na tela, enquanto N > 0:
Se vez == 0
escreve 'Paula -' 
vez <-- 1
Senão
escreve 'Carlos -'
vez <-- 0
FIM: SE

N-= M (N = N-M)
Se N < 0:
Imprime 0
Senão 
Imprime N
FIM: ENQUANTO

Se vez == 0:
imrpime Carlos ganhou
Senão
Imprime Paula ganhou
*/
#include <stdio.h>
int main(){

int N, M, vez = 0;

printf("Escreva o número de bolinhas de chocolate:\n");
scanf("%d", &N);
printf("Escreva o número de bolinhas de chocolate que irão comer:\n");
scanf("%d", &M);


	while ( N>0 ){
		if (vez == 0){
			printf("Paula  -  ");
			vez = 1;}
		else{
			printf("Carlos -  ");
			vez = 0;}
	
		N = N-M;
		if( N<0 ){
			printf("0\n");}
		else{
			printf("%d\n", N);}
}
		if( vez == 0)
			printf("Carlos ganhou\n");
		else
			printf("Paula ganhou\n");



}


/*Algorítmo:
variáveis
float T1 = 0, T2 = 0, volta, tv
Início: 
Para volta = 1 até volta = 5:
leio tempo da 'volta' em tv
T1 = T1 + tv
FIM: PARA
Para volta =1 até volta =5 
leio tempo da volta em tv 
T2 =T2 +tv
FIM: PARA
Se (T1 < T2): Estudante1 ganhou
Senão se (T1 == T2) : Empate 
senão: Estudante2 ganhou.
*/

#include <stdio.h>
int main(){

float T1=0, T2=0, volta, tv;

 for (volta=1; volta<=5; volta++){
scanf("%f", &tv);
T1 = T1+tv;
}
  for (volta=1; volta<=5; volta++){
scanf("%f", &tv);
T2 = T2+tv;
}
if (T1 < T2)
printf("O estudante 1 ganhou!");
else if (T1 == T2)
printf("Empate!");
else 
printf("O estudante 2 ganhou!");
}

