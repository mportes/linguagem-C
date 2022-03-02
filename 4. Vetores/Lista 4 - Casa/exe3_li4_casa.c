#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	int i, j, x[9], y[9];
	
	printf("Digite o RA (dê 'enter' após cada número): \n");
	
	for(i=0; i<9; ++i) scanf("%d", &x[i]);
	
	for(i=0; i<9; ++i) {
		if((i==0) || (i==1)) {
			y[0] = x[1];
			y[1] = x[0];
	    } else {
		    if((i==7) || (i==8)) {
			    y[7] = x[8];
			    y[8] = x[7];
			} else y[i] = x[i];
		}
	}
	
	printf("\n");
	printf("RA corrigido: ");
	
	for(i=0; i<9; ++i){
		printf("%d", y[i]);
	} 
	
	getch();
	return 0;
}
