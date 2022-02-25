#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i, v, p;
	
	printf("Digite um número para a tabuada: ");
	scanf("%d", &p);
	
	v=0;
	for(i=0; i<=10; i=i+1){
		v=p*i;
		printf("%d X %d = %d\n", p, i, v);
	}
	
	getch();
	return 0;
}
