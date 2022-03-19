#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

struct cad {
	char nome[100], ende[200], email[50], tel[20];
}; struct cad c[5];

int op, i, j, flag; 
char p[100];
int cadastro();
int pesquisa();
int alfabeto();
int alterar();
int remover();

int main() {
	setlocale(LC_ALL, "Portuguese");
	op=0;
	
	while(op!=6) {
		printf("----------------------------------------------------------------\n");
		printf("Selecione a opção desejada:\n1. Cadastro e registros\n2. Pesquisa de registro\n3. Classificação alfabética\n4. Alteração de registro\n5. Remoção de elementos cadastrados\n6. Sair\n\nSua escolha: ");
		scanf("%i", &op);
		printf("----------------------------------------------------------------\n");
		
		switch(op) {
			case 1: cadastro(); break;
			case 2: pesquisa(); break;
			case 3: alfabeto(); break;
			case 4: alterar(); break;
			case 5: remover(); break;
			case 6: 
				getch();
				return 0; 
			break;
			default: printf("Opção inválida!");	
		}
	}
}

int cadastro() {
	setlocale(LC_ALL, "Portuguese");
	
	for(i=0;i<5;++i) {
		printf("Nome: "); fflush(stdin); fgets(c[i].nome, 100, stdin);
		printf("Endereço: "); fflush(stdin); fgets(c[i].ende, 200, stdin);
		printf("Email: "); fflush(stdin); fgets(c[i].email, 50, stdin);
		printf("Telefone: "); fflush(stdin); fgets(c[i].tel, 20, stdin);
		printf("----------------------------------------------------------------\n");
	}
}

int pesquisa() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Nome a ser pesquisado: "); 
	fflush(stdin); 
	fgets(p, 100, stdin);
	
	for(i=0;i<5;++i) {
		if(strcmp(p, c[i].nome)==0) {
			printf("Nome encontrado no registro %d\n\nDados:\nNome: %sEndereço: %sEmail: %sTelefone: %s\n", i, c[i].nome, c[i].ende, c[i].email, c[i].tel);
			printf("----------------------------------------------------------------\n");
			flag=1;
		}
	}
	
	if(flag==0) {
		printf("Nome não encontrado nos registros :(\n");
		printf("----------------------------------------------------------------\n");
	}
}

int alfabeto() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Ordenação: \n\n");
	
	for(i=0;i<4;++i) {
		for(j=i+1;j<5;++j){
			if(strcmp(c[i].nome, c[j].nome)>0) {
				strcpy(p, c[i].nome);
				strcpy(c[i].nome, c[j].nome);
				strcpy(c[j].nome, p);
			}
		}
	}
	
	for(i=0; i<5; ++i) puts(c[i].nome);
	
	printf("----------------------------------------------------------------\n");
}

int alterar() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Nome do campo a ser alterado: "); 
	fflush(stdin); 
	fgets(p, 100, stdin); 
	flag=0; 
	i=0; 
	int r;
	
	while(i<5 && flag==0) {
		if(strcmp(p, c[i].nome)==0) flag=1;
		else ++i;
	}
	
	if(flag==1) {
		printf("Nome encontrado no registro %d\n\nDados\nNome: %sEndereço: %sEmail: %sTelefone: %s\n\nEntre com o dado que deseja alterar:\n1. Nome\n2. Endereço\n3. Email\n4. Telefone\n\nSua escolha: ", i, c[i].nome, c[i].ende, c[i].email, c[i].tel);
		scanf("%d", &r);
		
		switch(r) {
			case 1:
				printf("----------------------------------------------------------------\n");
				printf("Novo nome: "); 
				fflush(stdin); 
				fgets(c[i].nome, 100, stdin); 
				printf("Alteração efetuada com sucesso!\a\n"); 
				printf("----------------------------------------------------------------\n");
			break;
			
			case 2:	
				printf("----------------------------------------------------------------\n");
				printf("Novo endereço: "); 
				fflush(stdin); 
				fgets(c[i].ende, 200, stdin); 
				printf("Alteração efetuada com sucesso!\a\n"); 
				printf("----------------------------------------------------------------\n");
			break;	
			
			case 3:
				printf("----------------------------------------------------------------\n");
				printf("Novo email: "); 
				fflush(stdin); 
				fgets(c[i].email, 50, stdin); 
				printf("Alteração efetuada com sucesso!\a\n"); 
				printf("----------------------------------------------------------------\n");
			break;	
			
			case 4:
				printf("----------------------------------------------------------------\n");
				printf("Novo telefone: "); 
				fflush(stdin); 
				fgets(c[i].tel, 20, stdin); 
				printf("Alteração efetuada com sucesso!\a\n"); 
				printf("----------------------------------------------------------------\n");
			break;
			
			default: printf("Opção inválida");			
		}	
	} else printf("Nome não encontrado");
}

int remover() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Nome do campo a ser removido: "); 
	fflush(stdin); 
	fgets(p, 100, stdin); 
	flag=0; 
	i=0; 
	int r;
	
	while(i<5 && flag==0) {
		if(strcmp(p, c[i].nome)==0) flag=1;
		else ++i;
	}
			
	if(flag==1){
		printf("Nome encontrado no registro %d\n\nDados\nNome: %sEndereço: %sEmail: %sTelefone: %s\n\nEntre com o dado que deseja deletar:\n1. Nome\n2. Endereço\n3. Email\n4. Telefone\n\nSua escolha: ", i, c[i].nome, c[i].ende, c[i].email, c[i].tel);
		scanf("%d", &r);
		
		switch(r) {
			case 1:
				strcpy(c[i].nome, " "); 
				printf("\nRemoção efetuada com sucesso!\n"); 
				printf("----------------------------------------------------------------\n");
			break;
			
			case 2:	
				strcpy(c[i].ende, " "); 
				printf("\nRemoção efetuada com sucesso!\n"); 
				printf("----------------------------------------------------------------\n");
			break;
			
			case 3:
				strcpy(c[i].email, " "); 
				printf("\nRemoção efetuada com sucesso!\n"); 
				printf("----------------------------------------------------------------\n");
			break;
			
			case 4:
				strcpy(c[i].tel, " "); 
				printf("\nRemoção efetuada com sucesso!\n"); 
				printf("----------------------------------------------------------------\n");
			break;
			
			default: printf("Opção inválida");			
		}	
	} else printf("Nome não encontrado");
}

