#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	int x[9], y[9], i;
	
	printf("Digite o RA corrompido (d� 'enter' ap�s cada n�mero): \n");
	for(i=0; i<9; ++i) scanf("%d", &x[i]);
	for(i=0; i<9; ++i) y[i] = x[i];
	
	printf("\n");
	printf("O RA corrigido �: ");
	
	for(i=0; i<9; ++i) printf("%d", y[i]);
	
	getch();
	return 0;
}
