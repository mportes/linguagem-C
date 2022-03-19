#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	char nome[20];
	float sal, sal2;
	int cent;
	
	printf("Digite seu primeiro nome: ");
	scanf("%s", &nome);
	
	printf("Digite seu salário: ");
	scanf("%f", &sal);
	
	if(sal<=0.00) printf("Salário inválido!");
	else {
		if((sal>0.00) && (sal<=400.00)) {
			cent = 15;
			sal2 = sal+(sal*0.15);
		} else {
			if((sal>=401.00) && (sal<=700.00)) {
				cent = 12;
				sal2 = sal+(sal*0.12);
			} else {
				if((sal>=701.00) && (sal<=1000.00)) {
					cent = 10;
					sal2 = sal+(sal*0.10);
				} else {
					if((sal>=1001.00) && (sal<=1800.00)){
						cent = 7;
						sal2 = sal+(sal*0.07);
					} else {
						if((sal>=1801.00) && (sal<=2500.00)){
							cent = 4;
							sal2 = sal+(sal*0.04);
						} else {
							cent = 0;
							sal2 = sal;
						}
					}
				}
			}
		}
	}
	
	
	printf("\n\n\n");
	printf("----------------------------------------------------------------------- \n");
	printf("Nome: %s \n", nome);
	printf("Aumento: %d%% \n", cent);
	printf("Salário atual: %.2f \n", sal);
	printf("Novo salário: %.2f \n", sal2);
	printf("----------------------------------------------------------------------- \n");
	
	getch ();
	return 0;
}
