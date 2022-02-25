#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	i=2;
	
	do {
		printf("%d\n", i);
		i=i+2;
	} while(i<=20);
	
	getch();
	return 0;
}
