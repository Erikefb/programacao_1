#include <stdio.h>
int main(){

int i;
 for (i=3; i<40; i+=3){
 printf("O número é:%d\n",i);
 }


}

#include <stdio.h>
int main(){

char opcao;
while (opcao != 'a' && opcao != 'b' && opcao != 'c'){ 
printf("Escolha uma opção: \n");
printf(" a) 10\n");
printf(" b) 20\n");
printf(" c) 30\n");
scanf( "%c", &opcao);
}
printf("Sua opção é: %c\n", opcao);

 }


#include <stdio.h>
int main(){

char opcao;
do { 
printf("Escolha uma opção: \n");
printf(" a) 10\n");
printf(" b) 20\n");
printf(" c) 30\n");
scanf( "%c", &opcao);
} while (opcao != 'a' && opcao != 'b' && opcao != 'c');
printf("Sua opção é: %c\n", opcao);

 }
