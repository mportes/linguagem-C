#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a;
	
	printf("-------------------------------------------------------------------------\n");
	printf("                                  LOGIN \n");
	printf("-------------------------------------------------------------------------\n\n");
	printf("Digite o c�digo do seu curso: ");
	scanf("%d", &a);
	printf("\n\n");
	printf("-------------------------------------------------------------------------\n\n");
	
	switch(a) {
		case 1: printf("Engenharia \n"); break;
		case 2: printf("Edifica��es \n"); break;
		case 3: printf("Sistemas el�tricos \n"); break;
		case 4: printf("Turismo \n"); break;
		case 5: printf("An�lise de sistemas \n"); break;
		default: printf("C�DIGO INV�LIDO!");
	}
	
	getch();
	return 0;
}
