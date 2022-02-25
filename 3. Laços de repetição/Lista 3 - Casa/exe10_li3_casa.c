#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {	
	setlocale(LC_ALL, "Portuguese");
	char i;
	float a, b;
	
	printf("Digite a operação que deseja (+ - * ou /) ou 'S'(para finalizar): ");
	scanf("%c", &i);
	
	if(i=='S') {
		printf("\n\n\n");
		printf("Finalizando...");
		return 0;
	} else {
		printf("Digite os números: \n");
		scanf("%f %f", &a, &b);
		printf("\n");
		
		do {
			if(i=='+') a=a+b;
			else {
				if(i=='-') a=a-b;
				else {
					if(i=='*') a=a*b;
					else {
						if(i=='/') a=a/b;
						else {
							printf("Inválido!");
							return 0;
						}
					}
				}
			}
				
			printf("Resultado: %.2f \n", a);
			printf("Digite a operação que deseja (+ - * ou /) ou 'S'(para finalizar): ");
			
			if(i=='S') {
				printf("\n\n\n");
				printf("Finalizando...");
				return 0;
			} else {
				fflush(stdin);
				scanf("%c", &i);
				printf("Digite o número: ");
				scanf("%f", &b);
				printf("\n");
			}
		} while(i != 'S');
	}
	getch();
	return 0;
}
