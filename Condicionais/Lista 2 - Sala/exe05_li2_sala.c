#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	printf("Digite os três valores a serem colocados em ordem crescente: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if((a<b) && (b<c)) printf("Os valorem em ordem crescente ficam: %d, %d e %d", a, b, c);
	
	else {
		if((a<c) && (c<b)) printf("Os valores em ordem crescente ficam: %d, %d, %d", a, c, b);
		else {
			if((b<a) && (a<c)) printf("Os valores em ordem crescente ficam: %d, %d e %d", b, a, c);
			else {
				if((b<c) && (c<a)) printf("Os valores em ordem crescente ficam: %d, %d e %d", b, c, a);
				else {
					if((c<a) && (a<b)) printf("Os valores em ordem crescente ficam: %d, %d e %d", c, a, b);
					else printf("Os valores em ordem crescente ficam: %d, %d e %d", c, b, a);
				}
			}
		}
	}
	return 0;
}
