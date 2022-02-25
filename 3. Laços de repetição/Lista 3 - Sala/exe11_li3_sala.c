#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i, ma, me, n;
	
	printf("Digite 5 números para saber qual o maior e qual o menor: \n");
	scanf("%d",&n);
	   
	me=n;
	ma=n;
	 
	for(i=1; i<5; i++ ) {
	   
		scanf("%d",&n);
		 
		if(n>ma) ma=n;
		if(n<me) me=n; 
	}
	
	printf ("O menor é o número %d e o maior, o número %d\n", me, ma);
	 
	getch(); 
	return 0;
 }
