#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a[15], b[15]={1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, i, j, s;
	
	for(i=0; i<15; i++) {
		printf("Digite um número: ");
		scanf("%d", &a[i]);
		for(j=a[i]; j>=1; --j) {
			b[i]=b[i]*j;
		}
	}
		
	for(i=0; i<14; ++i) {
		for(j=i+1; j<15; j++ ){
			if(b[i]>b[j]) {
				s=b[i];
				b[i]=b[j];
				b[j]=s;
			}
		}
	}
	
	printf("\n\nFatorial dos números digitados postos em ordem crescente: ");
	for(i=0; i<15; ++i) {
		printf("\n%d", b[i]);
	}
	
	getch();
	return 0;
}
