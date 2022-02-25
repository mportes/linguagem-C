#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i, v;
	
	i = 0;
	v = 0;
	while(i<=100) {
		v = v + i;
		i = i + 1;
	}
	
	printf("%d", v);
	
	getch();
	return 0;
}
