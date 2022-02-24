#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int A, B, C;
	
	printf("Digite os números para descobrir qual é o maior, qual é o menor e qual é o \"do meio\": ");
	scanf("%d %d %d", &A, &B, &C);
	
	if((A>C) && (C>B)) {
		printf("O maior: %d\n", A);
		printf("O menor: %d\n", B);
		printf("O \"do meio\": %d\n", C);
	} else {
		if((A>B) && (B>C)) {
			printf("O maior: %d\n", A);
			printf("O menor: %d\n", C);
			printf("O \"do meio\": %d\n", B);
		} else {
			if((B>C) && (C>A)) {
				printf("O maior: %d\n", B);
				printf("O menor: %d\n", A);
				printf("O \"do meio\": %d\n", C);
			} else {
				if((B>A) && (A>C)) {
					printf("O maior: %d\n", B);
					printf("O menor: %d\n", C);
					printf("O \"do meio\": %d\n", A);
				} else {
					if((C>B) && (B>A)) {
						printf("O maior: %d\n", C);
						printf("O menor: %d\n", A);
						printf("O \"do meio\": %d\n", B);
					} else {
						printf("O maior: %d\n", C);
						printf("O menor: %d\n", B);
						printf("O \"do meio\": %d\n", A);
					}
				}
			}
		}
	}
	return 0;
}
