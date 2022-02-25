#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, d, n;
	
	printf("Digite um valor entre 0 e 100 para que obtenha a diferença entre este e o número chave: ");
	scanf("%d", &a);
	
	if((a>=0) && (a<=100)) {
		n=15;
		
		if(a>n) {
			d=a-n;
		} else {
			d=n-a;
		}
		
		printf("A diferença entre o número digitado e o número chave é igual a %d", d);
	} else printf("O número é inválido!");
	
	return 0;
}
