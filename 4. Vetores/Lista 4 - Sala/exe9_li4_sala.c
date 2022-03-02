#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a;
	
	printf("-------------------------------------------------------------------------\n");
	printf("                                  LOGIN \n");
	printf("-------------------------------------------------------------------------\n\n");
	printf("Digite o código do seu curso: ");
	scanf("%d", &a);
	printf("\n\n");
	printf("-------------------------------------------------------------------------\n\n");
	
	switch(a) {
		case 1: printf("Engenharia \n"); break;
		case 2: printf("Edificações \n"); break;
		case 3: printf("Sistemas elétricos \n"); break;
		case 4: printf("Turismo \n"); break;
		case 5: printf("Análise de sistemas \n"); break;
		default: printf("CÓDIGO INVÁLIDO!");
	}
	
	getch();
	return 0;
}
