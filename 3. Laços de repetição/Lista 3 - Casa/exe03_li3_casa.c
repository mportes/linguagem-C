#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	i=1;
	while(i<=20){
		if(i%2==0) printf("%d é par\n", i);
		else printf("%d é ímpar\n", i);
		
		i++;
	}
	
	getch();
	return 0;
}
