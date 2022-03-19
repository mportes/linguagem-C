#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int a, b, c, d, e, f;
	
	printf("\t\t\tQUESTIONÁRIO DE CONHECIMENTOS GERAIS\n\n");
	
	printf("Digite um número que seja primo e par: ");
	scanf("%d", &a);
	
	printf("Digite o número de continentes existentes no planeta Terra: ");
	scanf("%d", &b);
	
	printf("Digite o número de estados existentes no Brasil: ");
	scanf("%d", &c);
	
	printf("Digite o ano de invasão do Brasil pelos portugueses: ");
	scanf("%d", &d);
	
	printf("Digite o número de presidentes que o Brasil já teve até hoje: ");
	scanf("%d", &e);
	
	f=5;
	
	if(a==2) f=f-1;
	if(b==7) f=f-1;
	if(c==26) f=f-1;
	if(d==1500) f=f-1;
	if(e==38) f=f-1;
	if(f==1) printf("%d erro detectado!", f);
	else {
		if(f==0) printf("Nenhum erro detectado!");
		else printf("%d erros detectados!", f);
	}
	
	getch();
	return 0;
}
