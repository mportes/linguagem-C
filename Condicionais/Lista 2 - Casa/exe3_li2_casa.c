#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float N;
	int  NM, X, A;
	
	printf("Digite o número a ser arredondado: ");
	scanf("%f", &N);
	
	NM=N*100;
	X=(NM % 100);
	
	if(X>=60) {
		A=(N-(X/100))+1;
	} else {
		A=(N-(X/100));
	}
	
	printf("O valor arredondado é igual a %d\n", A);
	return 0;
}
