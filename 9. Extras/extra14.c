#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int n, j, p, i, maior, menor, f[5] = {0, 0, 0, 0, 0};
	float media;
	
	printf("Digite a quantidade de n�meros que ser�o avaliados: ");
	scanf("%d", &n);
	printf("\n\n\n");
	int a[n];
	
	media=0;

	printf("Digite um n�mero inteiro: ");
	scanf("%d", &a[0]);
	maior = a[0];
	menor = a[0];
	
	for(j=1; j<=n-1; ++j) {
		printf("Digite um n�mero inteiro: ");
		scanf("%d", &a[j]);
		
		if(a[j] < menor) menor = a[j];
		
		if(a[j] > maior) maior = a[j];	
	}
	
	for(j=0; j<=n-1; ++j) media = media + a[j];
	
	media = media/n;
	printf("\n\n");
	printf("A m�dia aritm�tica dos n�meros digitados � igual a %.2f! \n\n", media);

	printf("%d � o maior n�mero!\n", maior);
	printf("%d � o menor n�mero!\n\n", menor);
	
	for(j=0; j<=n-1; ++j) {
		if(a[j]<0) {
			printf("%d pertence � faixa 1!\n", a[j]);
			++f[0];
		} else {
			if((a[j]>=0) && (a[j]<15)) {
				printf("%d pertence � faixa 2!\n", a[j]);
				++f[1];
			} else {
				if((a[j]>=15) && (a[j]<100){
					printf("%d pertence � faixa 3!\n", a[j]);
					++f[2];
				} else {
					if((a[j]>=100) && (a[j]<1000)) {
						printf("%d pertence � faixa 5!\n", a[j]);
						++f[4];
					} else {
						if(a[j]>=1000) {
							printf("%d pertence � faixa 4!\n", a[j]);
							++f[3];
						}
					}
				}
			}
		}
	}
	
	printf("\n");
	j = 0;
	i = 1;
	
	while(j<5) {
		printf("Total de elementos na faixa %d: %d\n", i, f[j]);
		++i;
		++j;
	}
	printf("\n\n");
	
	p = 0;
	i = 0;
	
	for(j=0; j<=n-1; ++j) {
		if(a[j]%2==0) {
			printf("%d � par!\n", a[j]);
			++p;
		} else {
			printf("%d � �mpar!\n", a[j]);
			++i;
		}
	}
	
	printf("\n");
	printf("Total de n�meros pares: %d\n", p);
	printf("Total de n�meros �mpares: %d\n\n", i);
	
	getch();
	return 0;
}
