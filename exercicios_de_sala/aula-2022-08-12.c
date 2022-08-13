#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imp(char vet[10], int pos){
	if (vet[pos] == '\0'){
		printf("\n");
	}else{
		printf("%c", vet[pos]);
		imp(vet, pos+1);
		}
}
int main(){
	char v[10];
	strcpy(v, "jacson");
	imp(v,0);
}

------------------------------------------------------------------------------------------------------
  #include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imp(char vet[15], int pos){
	if (vet[pos] == '\0'){
		printf("\n");
	}else{
		imp(vet, pos+1);
		printf("%c", vet[pos]);
		}
}
int main(){
	char v[15];
	strcpy(v, "Erik Feitosa");
	imp(v,0);
}
------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void binario(int num){
	if (num/2 == 0){
		printf("Binário:%d", num%2);
	}else{
		binario(num/2);
		printf("%d", num%2);
		}
}
int main(){
	int num;
	printf("Escreva um número:");
	scanf("%d", &num);
	binario(num);
	printf("\n");
}
----------------------------------------------------------------------------------------------------------------------------------  
  #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fatorial(int num){
	if(num==1)
		return 1;
	else
		return num*fatorial(num-1);
}
int main(){
	int num;
	printf("Digite um número:");
	scanf("%d", &num);
	printf("%d\n",fatorial(num));
}

  
  
  
  
  
  
  
