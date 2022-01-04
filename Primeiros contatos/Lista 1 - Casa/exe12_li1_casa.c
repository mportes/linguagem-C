#include <stdio.h>
#include <conio.h>

int main()
{
	float D, T, V;
	printf("Digite a distancia percorrida em metros: ");
	scanf("%f", &D);
	printf("Digite o tempo em segundos: ");
	scanf("%f", &T);
	V=D/T;
	printf("A velocidade media e igual a: %f\n", V);
	getch();
	return 0;
}
