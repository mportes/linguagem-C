#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int a[5], e, i, j, p;
	float r;
	
	for(i=0;i<5;++i) {
		printf("Digite um número inteiro: ");
		scanf("%d", &a[i]);
	}
	
	printf("\n\n\n");
	printf("Qual operação você quer aplicar a eles?\n");
	printf("1. raiz quadrada\n");
	printf("2. elevar ao cubo\n");
	printf("3. fatorial\n\n");
	
	printf("Sua escolha: ");
	scanf("%d", &e);
	
	printf("\n\n\n\n");
	printf("Resultados: \n");
	
	switch(e) {
		case 1: 
			for(i=0; i<5; ++i) {
				r = sqrt(a[i]);
				printf("A raiz quadrada de %d é igual a %.2f\n", a[i], r);
			}
		break;
		
		case 2: 
			for(i=0; i<5; ++i) {
				r = (a[i] * a[i] * a[i]);
				printf("%d elevado ao cubo é igual a %.2f\n", a[i], r);
			}
		break;
		
		case 3: 
			for(i=0; i<5; ++i) {
				j=1;
				p = a[i];
				while(a[i]>1) {
					j = j * a[i];
					a[i] = a[i] - 1;
				}
				printf("%d fatorial é igual a %d\n", p, j);
			}
		break;
		
		default: printf("OPÇÃO INVÁLIDA!");
	}
	
	getch();
	return 0;
}
