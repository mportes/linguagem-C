#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {	
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	for(i=20; i>=1; i--){
		if(i%2==0) printf("%d � par!\n", i);
		else printf("%d � �mpar!\n", i);
	}
	
	getch();
	return 0;
}
