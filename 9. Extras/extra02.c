#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	printf("Digite três valores inteiros positivos para descobrir qual o menor: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if((a<0) || (b<0) || (c<0)) printf("Pelo menos um dos valores é negativo!");
	else {
		if((a==b) && (a<c)) printf("A e B são iguais a %d, que é o menor número!", a);
		else {
			if((a==c) && (a<b)) printf("A e C são iguais a %d, que é o menor número!", a);
			else{	
				if((b==c) && (b<a)) printf("B e C são iguais a %d, que é o menor número!", b);
				else {
					if((a==b) && (b==c)) printf("Os três valores digitados são iguais!");
					else {
						if((a<b) && (a<c)) printf("%d é o menor número!", a);
						else {
							if((b<a) && (b<c)) printf("%d é o menor número!", b);
							else printf("%d é o menor número!", c);
						}
					}
				}	
			}	
		}
	}
	
	getch();
	return 0;
}
