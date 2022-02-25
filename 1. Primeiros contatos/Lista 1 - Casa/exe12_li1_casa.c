#include <stdio.h>
#include <conio.h>

int main() {
	float d, t, v;
	printf("Digite a distancia percorrida em metros: ");
	scanf("%f", &d);
	printf("Digite o tempo em segundos: ");
	scanf("%f", &t);
	v=d/t;
	printf("A velocidade media e igual a: %f\n", v);
	getch();
	return 0;
}
