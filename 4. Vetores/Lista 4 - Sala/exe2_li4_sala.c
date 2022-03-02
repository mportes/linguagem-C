#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a[6], b[6] = {1, 1, 1, 1, 1, 1}, i, j;
	
	for(i=0; i<=5; ++i) {
		printf("Digite um número: ");
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<=5; ++i) {
		for(j=a[i]; j>=1; --j) {
			b[i] = b[i]*j;
		}
	}
	
	printf("\n\n");
	printf("Os números digitados fatoriais são iguais a: \n");
	
	for(i=0; i<=5; ++i) printf("%d\n", b[i]);
	
	getch();
	return 0;
}

