#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	i=1;
	
	do {
		printf("%d\n", i);
		i++;
	} while(i<=20);
	
	getch();
	return 0;
}
