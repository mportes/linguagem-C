#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int A, D, N;
	
	printf("Digite um valor entre 0 e 100 para que obtenha a diferen�a entre este e o n�mero chave: ");
	scanf("%d", &A);
	
	if((A>=0) && (A<=100)) {
		N=15;
		
		if(A>N) {
			D=A-N;
		} else {
			D=N-A;
		}
		
		printf("A diferen�a entre o n�mero digitado e o n�mero chave � igual a %d", D);
	} else printf("O n�mero � inv�lido!");
	
	return 0;
}
