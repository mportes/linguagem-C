#include <stdio.h>
#include <conio.h>

int main()
{
	float ap, lp, aa, la, an;
	printf("Insira a altura da parede: ");
	scanf("%f", &ap);
	printf("Insira a largura da parede: ");
	scanf("%f", &lp);
	printf("Insira a altura do azulejo: ");
	scanf("%f", &aa);
	printf("Insira a largura do azulejo: ");
	scanf("%f", &la);
	an=(ap*lp)/(aa*la);
	printf("O numero de azulejos necessarios e igual a: %f\n", an);
	getch();
	return 0;
}
