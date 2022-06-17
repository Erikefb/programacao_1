#include <stdio.h>
#include <stdlib.h>

int main() {
float saldo;
printf("Insira seu saldo médio:\n");
scanf("%f", &saldo);

switch (abs(saldo)){

case 0 ... 500:
printf("Você possui um saldo médio de:%.2f\n",saldo);
printf("Nenhum crédito!!!\n");
break;
    
case 501 ... 1000:
printf("Você possui um saldo médio de:%.2f\n", saldo);
printf("Você possui um crédito de:%.2f\n", saldo*0.3);
break;

case 1001 ... 3000:
printf("Você possui um saldo médio de:%.2f\n", saldo);
printf("Você possui um crédito de:%.2f\n", saldo*0.4);
break;

default:
printf("Você possui um saldo médio de:%.2f\n", saldo);
printf("Você possui um crédito de:%.2f\n", saldo*0.5);
}

}
