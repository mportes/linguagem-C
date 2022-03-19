#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float pressao;
	int nivel = 0;
	
	printf("Digite a pressao (entre 0.00 e 9.99): \n");
	scanf("%f", &pressao);
	printf("\n\n\n");
	
	if(pressao >= 0.0 && pressao <= 3.33) nivel = 1;
	else if(pressao >= 3.34 && pressao <= 6.66) nivel = 2;
	else if(pressao >= 6.67 && pressao <= 9.99) nivel = 3;
	else {
		printf("Valor inv�lido!");
		getch();
		return 0;
	}
	
	switch(nivel){	
		case 1:
			system("color 01");
			printf("Press�o baixa!"); 
		break;
		
		case 2:
			system("color 06");
			printf("Press�o M�dia!"); 
		break;
		
		case 3:
			system("color 04");
			printf("Perigo!!! Press�o Alta!"); 
		break;
		
		default: printf("Op��o inv�lida!");
	}
	
	getch();
	return 0;
}
