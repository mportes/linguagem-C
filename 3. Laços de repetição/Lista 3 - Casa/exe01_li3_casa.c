#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	i=1;
	while(i<=20){
		printf("%d\n", i);
		i++;
	}
	
	getch();
	return 0;
}
