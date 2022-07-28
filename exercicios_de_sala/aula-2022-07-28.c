#include <stdio.h>
void fibo(int n){
	int n1=1, n2=1, i, p;
	if(n<1) return;
	printf("%d ", n1);
		for( i=0; i<n-1; i++){
		printf("%d ", n2);
		p=n1+n2;
		n1=n2;
		n2=p;
	}
	printf("\n");	
	}

int main(){
int num;
printf("Digite a quandidade de números que você quer da sequência de FIBONACCI:");
scanf("%d", &num);
fibo(num);

}

-------------------------------------------------------------------------------------------------------------------------------
 #include <stdio.h>
int fat(int n){
	int prod=1, i;
	if(n==0) 
		return 1;
	else if(n<0)
		return -1;

	for(i=n; i>0; i--){
		prod = prod*i;
	}
	return prod;
}
int main(){
	int num, prod;
	printf("Escreva um número pra ser calculado o seu fatorial:");
	scanf("%d", &num);
	prod = fat(num);
	printf("%d\n",prod);
}

