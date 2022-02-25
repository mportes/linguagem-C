#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i, v;
	
	v=0;
	for(i=0; i<=10; i=i+1) {
		v=11*i;
		printf("11 X %d = %d\n", i, v);
	}
	
	getch();
	return 0;
}
