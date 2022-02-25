#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float i;
	
	printf("Digite o número a ser multiplicado por 3 (enquanto o produto for menor que 250): ");
	scanf("%f", &i);
	
	if(!(i<=50.0)) printf("Número inválido!");
	else {
		printf("Todos os resultados: \n");
		for(i=i; i<250; i=i*3) {
			printf("%.2f\n", i);
		}
	}
	
	getch();
	return 0;
}
