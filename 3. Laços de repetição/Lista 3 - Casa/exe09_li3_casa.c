#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {	
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	i=1;
	
	do {
		if(i%2==0) printf("%d é par!\n", i);
		else printf("%d é ímpar!\n", i);
		
		i++;
	} while(i<=20);
	
	getch();
	return 0;
}
