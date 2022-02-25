#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	for(i=1; i<200; i=i+1) {
		if(i % 4 == 0) printf("%d ", i);
	}
	
	getch();
	return 0;
}
