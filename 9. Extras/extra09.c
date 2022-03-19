#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL,"Portuguese");
	float s;
	
	printf("Digite o seu saldo: ");
	scanf("%f", &s);
	
	if(s==1000.00) s=s-(s*0.2);
	
	if(s==5000.00) s=s-(s*0.5);
	
	if(s=3000.00) s=s-(s*0.45);
	
	printf("%.2f", s);
	
	getch();
	return 0;
}
