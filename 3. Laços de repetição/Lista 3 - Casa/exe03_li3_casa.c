#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	i=1;
	while(i<=20){
		if(i%2==0) printf("%d � par\n", i);
		else printf("%d � �mpar\n", i);
		
		i++;
	}
	
	getch();
	return 0;
}
