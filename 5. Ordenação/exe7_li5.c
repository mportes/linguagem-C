#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a[20], b[20], i, j, s, n, flag;
	
	for(i=0; i<20; ++i) {
		printf("Digite um n�mero: ");
		scanf("%d", &a[i]);
		b[i]=a[i]+2;
	}
	
	for(i=0; i<19; ++i) {
		for(j=i+1; j<20; ++j) {
			if(b[i]>b[j]) {
				s=b[i];
				b[i]=b[j];
				b[j]=s;
			}
		}
	}
	
	printf("\n\nDigite um n�mero para pesquis�-lo nos resultados ou \'0\' para encerrar o programa: ");
	scanf("%d", &n);
	
	while(n != 0) {
		flag=0;
		for(i=0; i<20; i++) {
			if(n==b[i]) {
				flag=1;
				printf("N�mero encontrado na posi��o %d do vetor!\n", i);
			}
		}
		
		if(flag != 1) printf("N�mero n�o encontrado :(\n");
		
		printf("\n\nDigite: ");
		scanf("%d", &n);
	}
	
	printf("\n\nEncerrando...");
	
	getch();
	return 0;
}
