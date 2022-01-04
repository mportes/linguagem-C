#include <stdio.h>
#include <conio.h>

int main()
{
	float S, T, S0, V0, A;
	S0=2;
	V0=2;
	A=10;
	printf("Insira o tempo em segundos: ");
	scanf("%f", &T);
	S=(S0+V0)*T+((1/2)*A*(T*T));
	printf("O valor do movimento uniforme variado e igual a: %f\n", S);
	getch();
	return 0;
}
