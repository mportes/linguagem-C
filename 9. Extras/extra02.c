#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	printf("Digite tr�s valores inteiros positivos para descobrir qual o menor: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if((a<0) || (b<0) || (c<0)) printf("Pelo menos um dos valores � negativo!");
	else {
		if((a==b) && (a<c)) printf("A e B s�o iguais a %d, que � o menor n�mero!", a);
		else {
			if((a==c) && (a<b)) printf("A e C s�o iguais a %d, que � o menor n�mero!", a);
			else{	
				if((b==c) && (b<a)) printf("B e C s�o iguais a %d, que � o menor n�mero!", b);
				else {
					if((a==b) && (b==c)) printf("Os tr�s valores digitados s�o iguais!");
					else {
						if((a<b) && (a<c)) printf("%d � o menor n�mero!", a);
						else {
							if((b<a) && (b<c)) printf("%d � o menor n�mero!", b);
							else printf("%d � o menor n�mero!", c);
						}
					}
				}	
			}	
		}
	}
	
	getch();
	return 0;
}
