#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a[10], b[10], i, j;
	
	for(i=0; i<10; ++i) {
		printf("Digite um n�mero: ");
		scanf("%d", &a[i]);
	}
	
	j=9;
	i=0;
	
	while(i<10) {
		b[j] = a[i];
		++i;
		--j;
	}
	
	printf("\n\n\n");
	printf("Os n�meros digitados (em ordem contr�ria) foram: \n");
	
	for(i=0; i<10; ++i) printf("%d\n", b[i]);
	
	getch();
	return 0;
}
