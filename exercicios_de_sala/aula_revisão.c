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
