/*matrícula: 2021100625
*algorítmo: 
*variáveis:
*float: segunda, segundas, terca, tercas, quarta, quartas, quinta, quintas, sexta, sextas, despesas, recebidos, caixa;
*
*declarar as variaveis reais de entrada e despesas para cada dia.
*
*
*
*/
#include <stdio.h>
int main(){

float segunda, segundas,caixas, terca, tercas,caixat, quarta, quartas, caixaq, quinta, quintas, caixaqi, sexta, sextas, caixasx;

//segunda-feira
printf("Escreva suas entradas de segunda-feira:\n");
scanf("%f", &segunda);
printf("Escreva suas saídas de segunda-feira:\n");
scanf("%f", &segundas);
caixas=segunda-segundas;
printf("Você tem um saldo de:\n", caixas);

if (caixas > 2000){
printf("O valor total recebido foi de:\n", segunda);
printf("O total de gastos é igual a:\n", segundas);
printf("Você possui um saldo de:\n", caixas);
}
else if(caixas < -500){
printf("O valor total recebido foi de:\n", segunda);
printf("O total de gastos é igual a:\n", segundas);
printf("Você possui um saldo de:\n", caixas);
}

//terça-feira
printf("Escreva suas entradas de terça-feira:\n");
scanf("%f", &terca);
printf("Escreva suas saídas de terça-feira:\n");
scanf("%f", &tercas);
caixat=terca-tercas;
printf("Você tem um saldo de:\n", caixat);

if (caixat > 2000){
printf("O valor total recebido foi de:\n", terca);
printf("O total de gastos é igual a:\n", tercas);
printf("Você possui um saldo de:\n", caixat);
}
else if(caixat < -500){
printf("O valor total recebido foi de:\n", terca);
printf("O total de gastos é igual a:\n", tercas);
printf("Você possui um saldo de:\n", caixat);
}

//quarta-feira
printf("Escreva suas entradas de quarta-feira:\n");
scanf("%f", &quarta);
printf("Escreva suas saídas de quarta-feira:\n");
scanf("%f", &quartas);
caixaq=quarta-quartas;
printf("Você tem um saldo de:\n", caixaq);

if (caixaq > 2000){
printf("O valor total recebido foi de:\n", quarta);
printf("O total de gastos é igual a:\n", quartas);
printf("Você possui um saldo de:\n", caixaq);
}
else if(caixaq < -500){
printf("O valor total recebido foi de:\n", quarta);
printf("O total de gastos é igual a:\n", quartas);
printf("Você possui um saldo de:\n", caixaq);
}

//quinta-feira
printf("Escreva suas entradas de quinta-feira:\n");
scanf("%f", &quinta);
printf("Escreva suas saídas de quinta-feira:\n");
scanf("%f", &quintas);
caixaqi=quinta-quintas;
printf("Você tem um saldo de:\n", caixaqi);

if (caixaqi > 2000){
printf("O valor total recebido foi de:\n", quinta);
printf("O total de gastos é igual a:\n", quintas);
printf("Você possui um saldo de:\n", caixaqi);
}
else if(caixaqi < -500){
printf("O valor total recebido foi de:\n", quinta);
printf("O total de gastos é igual a:\n", quintas);
printf("Você possui um saldo de:\n", caixaqi);
}

//sexta-feira
printf("Escreva suas entradas de sexta-feira:\n");
scanf("%f", &sexta);
printf("Escreva suas saídas de sexta-feira:\n");
scanf("%f", &sextas);
caixasx=sexta-sextas;
printf("Você tem um saldo de:\n", caixasx);

if (caixasx > 2000){
printf("O valor total recebido foi de:\n", sexta);
printf("O total de gastos é igual a:\n", sextas);
printf("Você possui um saldo de:\n", caixasx);
}
else if(caixasx < -500){
printf("O valor total recebido foi de:\n", sexta);
printf("O total de gastos é igual a:\n", sextas);
printf("Você possui um saldo de:\n", caixasx);
}




}
