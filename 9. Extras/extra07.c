#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int a, b, c, d, e, f;
	
	printf("\t\t\tQUESTION�RIO DE CONHECIMENTOS GERAIS\n\n");
	
	printf("Digite um n�mero que seja primo e par: ");
	scanf("%d", &a);
	
	printf("Digite o n�mero de continentes existentes no planeta Terra: ");
	scanf("%d", &b);
	
	printf("Digite o n�mero de estados existentes no Brasil: ");
	scanf("%d", &c);
	
	printf("Digite o ano de invas�o do Brasil pelos portugueses: ");
	scanf("%d", &d);
	
	printf("Digite o n�mero de presidentes que o Brasil j� teve at� hoje: ");
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
