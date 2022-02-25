#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	i=20;
	
	while(i>=0){
		printf("%d\n", i);
		i=i-2;
	}
	
	getch();
	return 0;
}
