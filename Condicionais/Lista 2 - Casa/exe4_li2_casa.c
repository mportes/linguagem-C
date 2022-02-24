#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	printf("Digite os números para descobrir qual é o maior, qual é o menor e qual é o \"do meio\": ");
	scanf("%d %d %d", &a, &b, &c);
	
	if((a>c) && (c>b)) {
		printf("O maior: %d\n", a);
		printf("O menor: %d\n", b);
		printf("O \"do meio\": %d\n", c);
	} else {
		if((a>b) && (b>c)) {
			printf("O maior: %d\n", a);
			printf("O menor: %d\n", c);
			printf("O \"do meio\": %d\n", c);
		} else {
			if((b>c) && (c>a)) {
				printf("O maior: %d\n", b);
				printf("O menor: %d\n", a);
				printf("O \"do meio\": %d\n", c);
			} else {
				if((b>a) && (a>c)) {
					printf("O maior: %d\n", b);
					printf("O menor: %d\n", c);
					printf("O \"do meio\": %d\n", a);
				} else {
					if((c>b) && (b>a)) {
						printf("O maior: %d\n", c);
						printf("O menor: %d\n", a);
						printf("O \"do meio\": %d\n", b);
					} else {
						printf("O maior: %d\n", c);
						printf("O menor: %d\n", b);
						printf("O \"do meio\": %d\n", a);
					}
				}
			}
		}
	}
	return 0;
}
