#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float Sala, Salfi, Salin, H, A;
	
	printf("Digite o salário bruto e, em seguida, as horas trabalhadas: ");
	scanf("%f %f", &Salin, &H);
	
	if((Salin>0) && (Salin<800)) Salfi=Salin;
	else {
		if((Salin>=800) && (Salin<=1600)) Salfi= Salin-(13*(Salin/100));
		else {
			if(Salin>1600)
			Salfi= Salin-(22*(Salin/100));
		}
	}
	
	if(H>160) {
		A=(Salin/160)*0.5*(H-160);
		Sala=Salfi+A;
	} else Sala=Salfi;
	
	printf("O salário líquido é igual a %.2f", Sala);
	
	return 0;
}

