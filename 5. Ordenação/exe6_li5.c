#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float a[30], b[30], n, flag;
	int i;
	
	for(i=0; i<30; ++i) {
		printf("Digite um n�mero: ");
		scanf("%f", &a[i]);
	}
	
	for(i=0; i<30; ++i) b[i]=a[i]*a[i];
	
	printf("\n\nDigite um n�mero para ser pesquisado ou \'0\' para encerrar o programa: ");
	scanf("%f", &n);
	
	while(n != 0) {
		flag=0;
		for(i=0; i<30; ++i) {
			if(n==b[i]) {
				flag=1;
				printf("N�mero encontrado na posi��o %d do vetor\n", i);
			}
		}
		
		if(flag != 1) printf("N�mero n�o encontrado :(\n");
		
		printf("\n\nDigite: ");
		scanf("%f", &n);
	}
	
	printf("\n\nEncerrando...\n\n");
	
	getch();
	return 0;
}
