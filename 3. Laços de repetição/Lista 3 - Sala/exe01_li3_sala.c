#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	for(i=0; i<=20; i=i+1) {
		if(!(i % 2 == 0)) printf("%d ", i);
	}
	
	getch();
	return 0;
}
