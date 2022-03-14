#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float a[8], b[8], c, d;
	char e;
	int i, j, flag;
	
	for(i=0; i<8; ++i) {
		printf("Digite um número: ");
		scanf("%f", &a[i]);
		b[i]=a[i]*5;
	}
	
	for(i=0; i<7; ++i) {
		for(j=i+1; j<8; ++j) {
			if(b[i]>b[j]) {
				c=b[i];
				b[i]=b[j];
				b[j]=c;
			}
		}	
	}
	printf("\n\nNúmeros digitados multiplicados por 5 em ordem crescente:\n");
	for(i=0; i<8; ++i) printf("%.2f \n", b[i]);
	
	printf("\n\n\nCaso deseje saber se um número está nesta lista, digite-o. Se desejar encerrar o prorgama, digite \"0\"");
	printf("\nDigite: ");
	scanf("%f", &d); 
	
	while(d != 0) {
		flag=0;
		for(i=0; i<8; ++i) {
			if(b[i] == d) {
				flag=1;
				printf("Número encontrado na posição %d do vetor", i);
			}
		}
		
		if(flag != 1) printf("Número não encontrado :(");
		
		printf("\n\nDigite: ");
		scanf("%f", &d);
	}
	
	printf("\nEncerrando...");
	 
	getch();
	return 0;
}
