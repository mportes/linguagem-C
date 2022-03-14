#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {	
	setlocale(LC_ALL, "Portuguese");
	float a[40], s, n;
	int i, j;
	
	for(i=0; i<40; ++i) {
		printf("Digite a nota: ");
		scanf("%f", &a[i]);
	}
	
	for(i=0; i<39; ++i) {
		for(j=i+1; j<40; ++j) {
			if(a[i]>a[j]) {
				s=a[i];
				a[i]=a[j];
				a[j]=s;
			}
		}
	}
	
	printf("\n\nDigite a nota para saber seu lugar no vetor ou digite \'-1\' para encerrar o programa: ");
	scanf("%f", &n);
	printf("Nota encontrada na(s) posição(ões): \n");
	
	while(n != -1) {
		for(i=0; i<40; ++i) {
			if(n==a[i]) printf("%d\n", i);		
		}
		printf("\n\nDigite: ");
		scanf("%f", &n);
		printf("Nota encontrada na(s) posição(ões): \n");
	}
	
	printf("\n\nEncerrando...\n\n");
	
	getch();
	return 0;
}
