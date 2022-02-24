#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, media, ne, nmedia;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	media=(n1+n2)/2;
	
	if(media>=6.0) printf("Aprovado! Sua média foi %.2f", media);
	else {
		printf("Digite a nota de exame: ");
		scanf("%f", &ne);
		
		nmedia=(ne+media)/2;
		
		if(nmedia>=5.0) printf("Aprovado!");
		else printf("Reprovado!");
	}
	return 0;
}
