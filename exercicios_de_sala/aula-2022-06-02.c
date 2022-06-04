/*Aluno: Érik Feitosa Barbosa.
*matrícula: 2021100625
*algorítmo: 
*variáveis:
*float: segunda, segundas, caixas, terca, tercas, caixat, quarta, quartas, caixaq, quinta, quintas, caixaqi, sexta, sextas, caixasx;
*
*início: pedir os valores de entrada da segunda-feira e ler o valor em "segunda"
*pedir os valores de saída da segunda-feira e ler o valor em "segundas"
*caixas = segunda - segundas
*se caixas > 2000: saldo positivo
*senão se caixas < -500: saldo negativo
*
*pedir os valores de entrada da terça-feira e ler o valor em "terca"
*pedir os valores de saída da terça-feira e ler o valor em "tercas"
*caixat = terca - tercas
*se caixat > 2000: saldo positivo
*senão se caixat < -500: saldo negativo
*
*pedir os valores de entrada da quarta-feira e ler o valor em "quarta"
*pedir os valores de saída da quarta-feira e ler o valor em "quartas"
*caixaq = quarta - quartas
*se caixaq > 2000: saldo positivo
*senão se caixaq < -500: saldo negativo
*
*pedir os valores de entrada da quinta-feira e ler o valor em "quinta"
*pedir os valores de saída da quinta-feira e ler o valor em "quintas"
*caixaqi = quinta - quintas
*se caixaq > 2000: saldo positivo
*senão se caixaq < -500: saldo negativo
*
*pedir os valores de entrada da sexta-feira e ler o valor em "sexta"
*pedir os valores de saída da sexta-feira e ler o valor em "sextas"
*caixasx = sexta - sextas
*se caixaq > 2000: saldo positivo
*senão se caixaq < -500: saldo negativo
*/
#include <stdio.h>
int main(){

float segunda, segundas, caixas, terca, tercas, caixat, quarta, quartas, caixaq, quinta, quintas, caixaqi, sexta, sextas, caixasx;

//segunda-feira
printf("Escreva suas entradas de segunda-feira:\n");
scanf("%f", &segunda);
printf("Escreva suas saídas de segunda-feira:\n");
scanf("%f", &segundas);
caixas=segunda-segundas;
printf("Você tem um saldo de:%f\n", caixas);

if (caixas > 2000){
printf("O valor total recebido foi de:%f\n", segunda);
printf("O total de gastos é igual a:%f\n", segundas);
printf("Você possui um saldo positivo de:%f\n", caixas);
}
else if(caixas < -500){
printf("O valor total recebido foi de:%f\n", segunda);
printf("O total de gastos é igual a:%f\n", segundas);
printf("Você possui um saldo negativo de:%f\n", caixas);
}

//terça-feira
printf("Escreva suas entradas de terça-feira:\n");
scanf("%f", &terca);
printf("Escreva suas saídas de terça-feira:\n");
scanf("%f", &tercas);
caixat=terca-tercas;
printf("Você tem um saldo de:%f\n", caixat);

if (caixat > 2000){
printf("O valor total recebido foi de:%f\n", terca);
printf("O total de gastos é igual a:%f\n", tercas);
printf("Você possui um saldo positivo de:%f\n", caixat);
}
else if(caixat < -500){
printf("O valor total recebido foi de:%f\n", terca);
printf("O total de gastos é igual a:%f\n", tercas);
printf("Você possui um saldo negativo de:%f\n", caixat);
}

//quarta-feira
printf("Escreva suas entradas de quarta-feira:\n");
scanf("%f", &quarta);
printf("Escreva suas saídas de quarta-feira:\n");
scanf("%f", &quartas);
caixaq=quarta-quartas;
printf("Você tem um saldo de:%f\n", caixaq);

if (caixaq > 2000){
printf("O valor total recebido foi de:%f\n", quarta);
printf("O total de gastos é igual a:%f\n", quartas);
printf("Você possui um saldo positivo de:%f\n", caixaq);
}
else if(caixaq < -500){
printf("O valor total recebido foi de:%f\n", quarta);
printf("O total de gastos é igual a:%f\n", quartas);
printf("Você possui um saldo negativo de:%f\n", caixaq);
}

//quinta-feira
printf("Escreva suas entradas de quinta-feira:\n");
scanf("%f", &quinta);
printf("Escreva suas saídas de quinta-feira:\n");
scanf("%f", &quintas);
caixaqi=quinta-quintas;
printf("Você tem um saldo de:%f\n", caixaqi);

if (caixaqi > 2000){
printf("O valor total recebido foi de:%f\n", quinta);
printf("O total de gastos é igual a:%f\n", quintas);
printf("Você possui um saldo positivo de:%f\n", caixaqi);
}
else if(caixaqi < -500){
printf("O valor total recebido foi de:%f\n", quinta);
printf("O total de gastos é igual a:%f\n", quintas);
printf("Você possui um saldo negativo de:%f\n", caixaqi);
}

//sexta-feira
printf("Escreva suas entradas de sexta-feira:\n");
scanf("%f", &sexta);
printf("Escreva suas saídas de sexta-feira:\n");
scanf("%f", &sextas);
caixasx=sexta-sextas;
printf("Você tem um saldo de:%f\n", caixasx);

if (caixasx > 2000){
printf("O valor total recebido foi de:%f\n", sexta);
printf("O total de gastos é igual a:%f\n", sextas);
printf("Você possui um saldo positivo de:%f\n", caixasx);
}
else if(caixasx < -500){
printf("O valor total recebido foi de:%f\n", sexta);
printf("O total de gastos é igual a:%f\n", sextas);
printf("Você possui um saldo negativo de:%f\n", caixasx);
}




}
