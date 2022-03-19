#include <stdio.h>
#include<conio.h>
#include <locale.h>
#include <string.h>

struct alunos {
	char nome[100];
	float n1, n2, n3, m;
}; struct alunos a[20];

int i, j, flag;
char p[100];

int media() {
	for(i=0; i<20; ++i) {
		a[i].m=((a[i].n1+a[i].n2+a[i].n3)/3);
	}
}

int cadastro() {
	for(i=0; i<20; ++i) {
		printf("Digite o nome do aluno: ");
		fflush(stdin); 
		fgets(a[i].nome, 100, stdin);
		
		printf("Digite a primeira nota: ");
		fflush(stdin); 
		scanf("%f", &a[i].n1);
		
		printf("Digite a segunda nota: ");
		fflush(stdin); 
		scanf("%f", &a[i].n2);
		
		printf("Digite a terceira nota: ");
		fflush(stdin); 
		scanf("%f", &a[i].n3);
		
		printf("----------------------------------------------------------------\n");
	}
	media();
}

int ordem() {
	int x;
	printf("Ordenação: \n\n");
	
	for(i=0;i<19;++i) {
		for(j=i+1;j<20;++j) {
			if(strcmp(a[i].nome, a[j].nome)>0) {
				strcpy(p, a[i].nome);
				strcpy(a[i].nome, a[j].nome);
				strcpy(a[j].nome, p);
				
				x=a[i].n1;
				a[i].n1=a[j].n1;
				a[j].n1=x;
				
				x=a[i].n2;
				a[i].n2=a[j].n2;
				a[j].n2=x;
				
				x=a[i].n2;
				a[i].n2=a[j].n2;
				a[j].n2=x;
				
				x=a[i].m;
				a[i].m=a[j].m;
				a[j].m=x;
			}
		}
	}
	
	for(i=0; i<20; ++i) puts(a[i].nome);
		
	printf("----------------------------------------------------------------\n");
}

int correcao() {
	printf("Nome do campo a ser alterado: "); 
	fflush(stdin); 
	fgets(p, 100, stdin); 
	flag=0; 
	i=0; 
	int r;
	
	while(i<20 && flag==0) {
		if(strcmp(p, a[i].nome)==0) flag=1;
		else ++i;
	}
			
	if(flag==1) {
		printf("Nome encontrado no registro %d\n\nDados\nNome: %sNota 1: %f\nNota 2: %f\nNota 3: %f\n\nEntre com o dado que deseja alterar:\n1. Nome\n2. Nota 1\n3. Nota 2\n4. Nota 3\n\nSua escolha: ", i, a[i].nome, a[i].n1, a[i].n2, a[i].n3);
		scanf("%d", &r);
		
		switch(r) {
			case 1:
				printf("----------------------------------------------------------------\n");
				printf("Novo nome: ");
				fflush(stdin);
				fgets(a[i].nome, 100, stdin);
				printf("Alteração efetuada com sucesso!\a\n");
				printf("----------------------------------------------------------------\n");
			break;
			
			case 2:	
				printf("----------------------------------------------------------------\n");
				printf("Nova nota 1: ");
				fflush(stdin);
				scanf("%f", &a[i].n1);
				printf("Alteração efetuada com sucesso!\a\n");
				printf("----------------------------------------------------------------\n");
			break;	
			
			case 3:
				printf("----------------------------------------------------------------\n");
				printf("Nova nota 2: ");
				fflush(stdin);
				scanf("%f", &a[i].n2);
				printf("Alteração efetuada com sucesso!\a\n");
				printf("----------------------------------------------------------------\n");
			break;	
			
			case 4:
				printf("----------------------------------------------------------------\n");
				printf("Nova nota 3: ");
				fflush(stdin);
				scanf("%f", &a[i].n3);
				printf("Alteração efetuada com sucesso!\a\n");
				printf("----------------------------------------------------------------\n");
			break;
			
			default: printf("Opção inválida");			
		}	
	} else printf("Nome não encontrado");
	
	media();
}

int pesquisa() {
	printf("Nome a ser pesquisado: "); 
	fflush(stdin); 
	fgets(p, 100, stdin);
	
	for(i=0;i<20;++i) {
		if(strcmp(p, a[i].nome)==0) {
			printf("Nome encontrado no registro %d\n\nDados\nNome: %sNota 1: %f\nNota 2: %f\nNota 3: %f\n\nEntre com o dado que deseja alterar:\n1. Nome\n2. Nota 1\n3. Nota 2\n4. Nota 3\n\nSua escolha: ", i, a[i].nome, a[i].n1, a[i].n2, a[i].n3);
			printf("----------------------------------------------------------------\n");
			flag=1;
		}
	}
	
	if(flag==0){
		printf("Nome não encontrado nos registros :(\n"); 
		printf("----------------------------------------------------------------\n");
	}
}

int aprovados() {
	printf("Aprovados: ");

	for(i-0;i<20; ++i) {
		if(a[i].m>=7.0) puts(a[i].nome);
	}
}

int reprovados() {
	printf("Aprovados: ");
	
	for(i-0;i<20; ++i) {
		if(a[i].m<=7.0) puts(a[i].nome);
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int r=0;
	printf("----------------------------------------------------------------\n");
	cadastro();
	
	while (r!=6) {
		printf("Selecione a opção desejada:\n1. Visualizar os dados em ordem alfabética\n2. Corrigir dados errados\n3. Pesquisar\n4. Listar alunos aprovados\n5. Listar alunos reprovados\n6. Sair\n\nSua escolha:");
		scanf("%d", &r);
		printf("----------------------------------------------------------------\n");
		switch(r) {
			case 1: ordem(); break;
			case 2: correcao(); break;
			case 3: pesquisa(); break;
			case 4: aprovados(); break;
			case 5: reprovados(); break;
			case 6:
				getch();
				return 0;
			break;
			default: printf("Opção inválida!");
		}
	}
}
