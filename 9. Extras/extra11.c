#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	char a;
	
	printf("Escolha sua forma de pagamento: \n");
	printf("Digite \"c\" para pagamento por cart�o de cr�dito;\n");
	printf("Digite \"b\" para pagamento por boleto;\n");
	printf("Digite \"d\" para pagamento por cart�o de d�bito.\n");
	
	printf("Sua escolha: ");
	scanf("%c", &a);
	printf("\n\n\n\n");
	
	switch(a){
		case 'c': printf("Pagamento por cart�o de cr�dito selecionado.\n\n\n\n"); break;
		case 'b': printf("Pagamento por boleto selecionado.\n\n\n\n"); break;
		case 'd': printf("Pagamento por cart�o de d�bito selecionado.\n\n\n\n"); break;
		default: printf("Op��o inv�lida!\n\n\n\n");
	}
	
	getch();
	return 0;
}

