#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	printf("Digite os 2 valores: ");
	scanf ("%d %d", &a, &b);
	
	if(a>=b) {
		c=a-b;
		printf("A diferen�a dos dois valores � igual a %d", c);
	} else {
		c=b-a;
		printf("A diferen�a dos dois valores � igual a %d", c);
	}
	
	return 0;
}
