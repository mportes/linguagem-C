#include <stdio.h>
#include <conio.h>
#include <locale.h>

int soma(int a) {
	int s=0;
	
	for(int i=a; i>0; --i) {
		s=s+i;
	}
	
	printf("Resultado da soma: %d\n\n", s);
	
	getch();
	return 0;
}

int main() {
	setlocale(LC_ALL, "Portuguese");

	int a;
	
	printf("Digite um número para somar com todos os seus antecessores>0: ");
	scanf("%d", &a);
	
	if(a==0){
		getch();
		return 0;
	}
	
	soma(a);
}




