#include <stdio.h>
#include <conio.h>

int main()
{
	float AP, LP, AA, LA, AN;
	printf("Insira a altura da parede: ");
	scanf("%f", &AP);
	printf("Insira a largura da parede: ");
	scanf("%f", &LP);
	printf("Insira a altura do azulejo: ");
	scanf("%f", &AA);
	printf("Insira a largura do azulejo: ");
	scanf("%f", &LA);
	AN=(AP*LP)/(AA*LA);
	printf("O numero de azulejos necessarios e igual a: %f\n", AN);
	getch();
	return 0;
}
