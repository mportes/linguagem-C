#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float a, b, m;
	
	printf("Digite as duas notas do aluno: ");
	scanf("%f %f", &a, &b);
	
	m=(a+b)/2;
	
	if(m>=7.0) {
		system("color 09");
		printf("Aprovado!");
	} else {
		if((m>=3.0) && (m<7.0)) {
			system("color 06");
			printf("Recuperação!");
		} else {
			system("color 04");
			printf("Reprovado!");
		}
	}
	
	getch();
	return 0;
}
