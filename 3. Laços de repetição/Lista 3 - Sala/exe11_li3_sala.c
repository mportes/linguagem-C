#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i, ma, me, n;
	
	printf("Digite 5 n�meros para saber qual o maior e qual o menor: \n");
	scanf("%d",&n);
	   
	me=n;
	ma=n;
	 
	for(i=1; i<5; i++ ) {
	   
		scanf("%d",&n);
		 
		if(n>ma) ma=n;
		if(n<me) me=n; 
	}
	
	printf ("O menor � o n�mero %d e o maior, o n�mero %d\n", me, ma);
	 
	getch(); 
	return 0;
 }
