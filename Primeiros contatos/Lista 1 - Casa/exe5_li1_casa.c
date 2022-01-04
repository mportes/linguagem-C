#include <stdio.h>
#include <conio.h>

int main()
{
	float M, H, I;
	printf("Insira a sua massa em kg: ");
	scanf("%f", &M);
	printf("Insira a sua altura em metros: ");
	scanf("%f", &H);
	I=M/(H*H);
	printf("O seu Indice de Massa Corporal (IMC) e igual a %f\n", I);
	getch();
	return 0;
}
