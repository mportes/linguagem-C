#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b, i, j;
	
	printf("Digite a sua aposta para o placar do time 1: ");
	scanf("%d", &a);
	
	printf("Digite a sua aposta para o placar do time 2: ");
	scanf("%d", &b);
	
	i=0;
	
	if(a==3) i = i+5;
	if(b==2) i = i+5;
	if((a>b) || (a==b)) i=i+10;
	
	
	printf("Você ganhou %d pontos!\n", i);
	
	getch();
	return 0;
}
