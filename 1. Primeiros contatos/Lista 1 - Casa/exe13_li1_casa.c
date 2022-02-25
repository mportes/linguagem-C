#include <stdio.h>
#include <conio.h>

int main() {
	float s, t, s0, v0, a;
	s0=2;
	v0=2;
	a=10;
	printf("Insira o tempo em segundos: ");
	scanf("%f", &t);
	s=(s0+v0)*t+((1/2)*a*(t*t));
	printf("O valor do movimento uniforme variado e igual a: %f\n", s);
	getch();
	return 0;
}
