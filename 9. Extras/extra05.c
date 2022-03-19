#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {	
	setlocale(LC_ALL, "Portuguese");
	int a;
	
	printf("Digite o ano (com quatro dígitos) a ser avaliado com bissexto ou não: ");
	scanf("%d", &a);
	
	if(a%4==0) {
		if(a%100==0) {
			if(a%400==0) printf("O ano de %d é bissexto!", a);
			else printf("O ano de %d não é bissexto!", a);
		} else printf("O ano de %d é bissexto!", a);
	} else printf("O ano de %d não é bissexto!", a);
	
	getch();
	return 0;
}
