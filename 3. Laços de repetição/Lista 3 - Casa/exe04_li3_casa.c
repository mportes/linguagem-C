#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	for(i=20; i>=1; i--){
		printf("%d\n", i);
	}
	
	getch();
	return 0;
}
