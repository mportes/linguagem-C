#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i, v, p, q;
	
	printf("Sequência de Fibonacci: \n\n\n");
	printf("1\n");
	
	q=1;
	p=0;
	
	for(i=1; i<15; i++){
		v=p+q;
		p=q;
		q=v;
		
		printf("%d\n", v);
	}
	
	getch();
	return 0;
}
