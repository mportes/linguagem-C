#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float sala, salfi, salin, h, a;
	
	printf("Digite o salário bruto e, em seguida, as horas trabalhadas: ");
	scanf("%f %f", &salin, &h);
	
	if((salin>0) && (salin<800)) salfi=salin;
	else {
		if((salin>=800) && (salin<=1600)) salfi=salin-(13*(salin/100));
		else {
			if(salin>1600)
			salfi=salin-(22*(salin/100));
		}
	}
	
	if(h>160) {
		a=(salin/160)*0.5*(h-160);
		sala=salfi+a;
	} else sala=salfi;
	
	printf("O salário líquido é igual a %.2f", sala);
	
	return 0;
}
