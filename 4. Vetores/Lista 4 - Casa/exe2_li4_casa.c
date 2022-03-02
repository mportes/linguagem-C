#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	int i, j, x[9], y[9];
	
	printf("Digite o RA (dê 'enter' após cada número): \n");
	
	for(i=0; i<9; ++i) scanf("%d", &x[i]);
	
	for(i=0; i<5; ++i) y[i] = x[i];
	
	i=5;
	j= 8;
	
	while(i<9) {
		y[i] = x[j];
		++i;
		--j;
	}
	
	printf("\n");
	printf("RA corrigido: ");
	
	for(i=0; i<9; ++i) {
		printf("%d", y[i]);
	}
	
	
	getch();
	return 0;
}


