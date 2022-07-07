correção da avaliação-1

1-a)variáveis:
amg1, amg2, jogada: inteiro
INÍCIO
amg1==0
amg2==0
jogada==1
enquanto jogada == 1
imprima 'amg1, qual face tirou?'
leia jogada
se jogada == 1
amg1++
jogada == 1
enquanto jogada == 1
imprima 'amg2, qual face tirou?'
leia jogada
if jogada == 1
amg2++
imprima amigo1: amg1
imprima amigo2: amg2
se amg1 > amg2
imprima vencedor: amigo1
senão se amg2 > amg1
imprima vencedor: amigo2
else 
imprima empate

------------------------------------
1-b)programa:

int main(){
	int amg1=0, amg2=0, jogada=1;
	
	while(jogada==1){
	printf("amg1, qual face?");
	scanf("%d", &jogada);
	if(jogada==1)
	amg1++;
}
	jogada=1;
	while(jogada==1){
	printf("amg2, qual face?");
	scanf("%d", &jogada);
	if(jogada==1)
	amg2++
}
 	printf("Amigo1: %d\n", amg1);
 	printf("Amigo2:%d\n", amg2);
 	
 	if(amg1 > amg2)
 	printf("vencedor: amigo1\n");
 	else if (amg2 > amg1)
 	printf("vencedor: amigo2\n");
 	else
 	printf("Empate\n"); 	
}
