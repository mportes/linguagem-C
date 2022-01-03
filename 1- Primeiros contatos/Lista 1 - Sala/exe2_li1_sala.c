#include <stdio.h>
#include <conio.h>

int main()
{
	float C, F;
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &F);
	C=(((F-32)*5)/9);
	printf("A temperatura em Celsius e: %f\n", C);
	getch();
	return 0;
}
