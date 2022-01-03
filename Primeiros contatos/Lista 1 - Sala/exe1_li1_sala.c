#include <stdio.h>
#include <conio.h>

int main()
{
	float D, T, V, LU;
	printf("Escreva o tempo em segundos: ");
	scanf("%f", &T);
	printf("Escreva a velocidade em metros por segundo: ");
	scanf("%f", &V);
	D=T*V;
	LU=D/12;
	printf("Os valores de tempo, velocidade media, distancia e litros usados sao, respectivamente: %f %f %f %f\n", T, D, V, LU);
	getch();
	return 0;
}
