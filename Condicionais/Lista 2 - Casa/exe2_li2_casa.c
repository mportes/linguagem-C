#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int A, D, N;
	
	printf("Digite um valor entre 0 e 100 para que obtenha a diferença entre este e o número chave: ");
	scanf("%d", &A);
	
	if((A>=0) && (A<=100)) {
		N=15;
		
		if(A>N) {
			D=A-N;
		} else {
			D=N-A;
		}
		
		printf("A diferença entre o número digitado e o número chave é igual a %d", D);
	} else printf("O número é inválido!");
	
	return 0;
}
