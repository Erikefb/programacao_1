#include <stdio.h>

int main(){
int result1, result2, rest1, rest2, num, div3, div7;
div3 = 3;
div7 = 7;

printf ("Insira um número:\n");
scanf ("%d", &num);
result1 = num/div3;
result2 = num/div7;
rest1 = num - result1*div3;
rest2 = num - result2*div7;

if( rest1 == 0 && rest2 == 0){
printf("Seu número é divisível por 3 e por 7!!!");
  }
else if ( rest2 == 0){
printf("Seu número é divisível por 7!!!");
  }
else if( rest1 == 0){
printf("Seu número é divisível por 3!!!\n");
  }
else {
printf("seu número não é divisível nem por 3 e nem por 7!!!");}

}
