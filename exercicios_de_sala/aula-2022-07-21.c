#include <stdio.h>
#include <stdlib.h>
int main (){

	int matriz[10][10], lin, col;
	int num_impar[10]= {0,0,0,0,0,0,0,0,0,0};
	
	for(lin=0; lin<10; lin++){
		for(col=0; col<10; col++){
			matriz[lin][col]= rand()%1000;
	   }
	}
	for(lin=0; lin<10; lin++){
		for(col=0; col<10; col++){
			printf("%3d  ", matriz[lin][col]);
	  }
	printf("\n");  
	}  				
	for(lin=0; lin<10; lin++){
		for(col=0; col<10; col++){
			if(matriz[lin][col]%2==1)
			num_impar[col]++;
	   }
	}   				
	for(lin=0; lin<10; lin++){
		printf("coluna %d: ", lin);
		printf("%d\n", num_impar[lin]);
}
}
