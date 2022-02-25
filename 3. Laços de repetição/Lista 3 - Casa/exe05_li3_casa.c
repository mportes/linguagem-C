#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	for(i=1; i<=20; i=i+2){
		printf("%d\n", i); 
	}
	
	getch();
	return 0;
}
