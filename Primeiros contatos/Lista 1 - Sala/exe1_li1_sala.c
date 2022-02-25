#include <stdio.h>
#include <conio.h>

int main()
{
	float d, t, v, lu;
	printf("Escreva o tempo em segundos: ");
	scanf("%f", &t);
	printf("Escreva a velocidade em metros por segundo: ");
	scanf("%f", &v);
	d=t*v;
	lu=d/12;
	printf("Os valores de tempo, velocidade media, distancia e litros usados sao, respectivamente: %f %f %f %f\n", t, d, v, lu);
	getch();
	return 0;
}
