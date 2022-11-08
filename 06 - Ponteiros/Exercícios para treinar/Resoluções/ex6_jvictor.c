/* Resolução do Ex6 pelo J. Victor :D */

#include <stdio.h>

void memorytest(int* inters, float* floaters, char* charters){
	for(int i=0;i<3;i++){
		inters[i]=2014;
	}
	for(int f=0;f<3;f++){
		floaters[f]=9.99;
	}
	for(int c=0;c<3;c++){
		charters[c]='Y';
	}
}
int main(){
	printf("TESTE DE MEMÓRIA DO SISTEMA DE BOLINHAS DO GOOGLE\n------------------------------------------\n");
	int inters[3];
	float floaters[3];
	char charters[3];
	for(int j=0;j<3;j++){
		printf("Digite o %dº valor inteiro: ",j+1);
		scanf("%d", &inters[j]);
		printf("Digite o %dº valor decimal: ",j+1);
		scanf("%f", &floaters[j]);
		printf("Digite o %dº caractere: ",j+1);
		scanf(" %c", &charters[j]);
		}
	for(int p=0;p<3;p++){
		printf("%d\t", inters[p]);	
		printf("%.1f\t",floaters[p]);
		printf("%c\t",charters[p]);
	}
	printf("\nAPLICANDO TRANSFORMAÇÃO...\n--------------------\n");
	memorytest(inters, floaters, charters);
	for(int t=0;t<3;t++){
				printf("%d\t", inters[t]);	
		printf("%.2f\t",floaters[t]);
		printf("%c\t",charters[t]);
	}
}