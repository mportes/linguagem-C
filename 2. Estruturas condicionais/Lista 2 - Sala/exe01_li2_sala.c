#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	media=(n1+n2+n3)/3;
	
	if(media>=6.0) printf("Aprovado! Sua média foi %.2f", media);
	else printf("Reprovado! Sua média foi %.2f", media);

return 0;
}
