#include <stdio.h>
#include <conio.h>
#include <locale.h>

int fibonacci() {
	printf("1\n");
	
	int q,p,v,i;
	q=1;
	p=0;
	
	for(i=1; i<30; i++) {
		v=p+q;
		p=q;
		q=v;
		
		printf("%d\n", v);
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	fibonacci();	
	getch();
	return 0;
}
