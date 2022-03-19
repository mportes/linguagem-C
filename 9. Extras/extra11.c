#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	char a;
	
	printf("Escolha sua forma de pagamento: \n");
	printf("Digite \"c\" para pagamento por cartão de crédito;\n");
	printf("Digite \"b\" para pagamento por boleto;\n");
	printf("Digite \"d\" para pagamento por cartão de débito.\n");
	
	printf("Sua escolha: ");
	scanf("%c", &a);
	printf("\n\n\n\n");
	
	switch(a){
		case 'c': printf("Pagamento por cartão de crédito selecionado.\n\n\n\n"); break;
		case 'b': printf("Pagamento por boleto selecionado.\n\n\n\n"); break;
		case 'd': printf("Pagamento por cartão de débito selecionado.\n\n\n\n"); break;
		default: printf("Opção inválida!\n\n\n\n");
	}
	
	getch();
	return 0;
}

