#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, d, x1, x2;
	
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	printf("Digite o valor de c: ");
	scanf("%f", &c);
	
	D=(b*b)-(4*a*c);
	
	if(d==0) {
		x1= -b/(2*a);
		printf("H� apenas uma solu��o para essa equa��o: %f", x1);
	} else {
		if(d>0) {
			x1=(-B+sqrt(d))/(2*a);
			x2=(-B-sqrt(d))/(2*a);
			
			printf("H� duas solu��es poss�veis para essa equa��o: %.3f e %.3f", x1, x2);
		} else printf("A raiz de delta n�o pertence aos reais!");
	}
	return 0;
}
