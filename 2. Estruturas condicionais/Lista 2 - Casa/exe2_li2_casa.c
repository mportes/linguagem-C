#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, d, n;
	
	printf("Digite um valor entre 0 e 100 para que obtenha a diferen�a entre este e o n�mero chave: ");
	scanf("%d", &a);
	
	if((a>=0) && (a<=100)) {
		n=15;
		
		if(a>n) {
			d=a-n;
		} else {
			d=n-a;
		}
		
		printf("A diferen�a entre o n�mero digitado e o n�mero chave � igual a %d", d);
	} else printf("O n�mero � inv�lido!");
	
	return 0;
}
