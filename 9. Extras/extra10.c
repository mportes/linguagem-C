#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a;
	char b;
	
	printf("--------------------------------\n");
	printf("          Banco IFSP\n");
	printf("--------------------------------\n");
	printf("1. dep�sito\n");
	printf("2. saque\n");
	printf("3. extrato\n");
	printf("4. transfer�ncia\n");
	printf("--------------------------------\n");
	printf("         E = encerrar\n");
	printf("--------------------------------\n");
	
	printf("Sua escolha: ");
	scanf("%d", &a);
	scanf("%c", &b);
	
	printf("\n\n\n\n");
	
	if(b == 'E') printf("Encerrando opera��es...\n\n\n\n");
	else {
		if(a==1) printf("Opera��o de dep�sito\n\n\n\n");
		else {
			if(a==2) printf("Opera��o de saque\n\n\n\n");
			else {
				if(a==3) printf("Opera��o de extrato\n\n\n\n");
				else {
					if(a==4) printf("Opera��o de transfer�ncia\n\n\n\n");
					else printf("N�mero inv�lido!\n\n\n\n");
				}
			}
		}
	}
	
	getch();
	return 0;
}
