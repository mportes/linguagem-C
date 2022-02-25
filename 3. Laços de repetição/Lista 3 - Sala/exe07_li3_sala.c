#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main() {	
	setlocale(LC_ALL, "Portuguese");
	int i, v, p;
	
	v=3;
	
	for(i=0; i<=15; i=i+1) {		
		if(i==0) printf("3 elevado a 0 = 1\n");
		else {
			if(i==1) printf("3 elevado a 1 = 3\n");
			else {
				p = pow(v, i);
				printf("3 elevado a %d = %d\n", i, p);	
			}
		}
	}	
	getch();
	return 0;
}
