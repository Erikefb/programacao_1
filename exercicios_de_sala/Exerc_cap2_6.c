#include <stdio.h>

int main() {
  float salario, prestacao, num;
  printf("Insira seu salário: \n");
  scanf("%f", &salario);
  printf("Insira o valor da prestação: \n");
  scanf("%f", &prestacao);
  num = 0.3*salario;

  if (prestacao > num)
    printf("Você não pode fazer um empréstimo");
  else
    printf("Você pode fazer um empréstimo ");

}
