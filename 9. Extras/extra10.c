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
	printf("1. depósito\n");
	printf("2. saque\n");
	printf("3. extrato\n");
	printf("4. transferência\n");
	printf("--------------------------------\n");
	printf("         E = encerrar\n");
	printf("--------------------------------\n");
	
	printf("Sua escolha: ");
	scanf("%d", &a);
	scanf("%c", &b);
	
	printf("\n\n\n\n");
	
	if(b == 'E') printf("Encerrando operações...\n\n\n\n");
	else {
		if(a==1) printf("Operação de depósito\n\n\n\n");
		else {
			if(a==2) printf("Operação de saque\n\n\n\n");
			else {
				if(a==3) printf("Operação de extrato\n\n\n\n");
				else {
					if(a==4) printf("Operação de transferência\n\n\n\n");
					else printf("Número inválido!\n\n\n\n");
				}
			}
		}
	}
	
	getch();
	return 0;
}
