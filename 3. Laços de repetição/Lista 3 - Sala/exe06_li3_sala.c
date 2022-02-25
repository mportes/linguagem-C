#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i, v;
	
	for(i=15; i<200; i=i+1) {	
		v=i*i;
		printf("%d ", v);
	}
	
	getch();
	return 0;
}
