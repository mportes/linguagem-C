#include<stdio.h>
#include<locale.h>
#include<string.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int a, i, j, flag, r;
	char p[100], ax[100];
	
	struct cad {
		char n[100], end[200], tel[20];
		int id;
	}; struct cad c[5];
	
	a=0;
	while(a<6) {
		printf("----------------------------------------------------------------\n");
		printf("Selecione a opção desejada:\n1. Cadastro e registros\n2. Pesquisa de registro\n3. Classificação alfabética\n4. Alteração de registro\n5. Sair\n\nSua escolha: ");
		scanf("%i", &a);
		printf("----------------------------------------------------------------\n");
		
		switch(a) {
			case 1:
				for(i=0;i<5;++i) {
					printf("Nome: "); 
					fflush(stdin); 
					fgets(c[i].n, 100, stdin);
					
					printf("Endereço: "); 
					fflush(stdin); 
					fgets(c[i].end, 200, stdin);
					
					printf("Idade: "); 
					fflush(stdin); 
					scanf("%d", &c[i].id);
					
					printf("Telefone: "); 
					fflush(stdin); 
					fgets(c[i].tel, 20, stdin);
					
					printf("----------------------------------------------------------------\n");
				}
			break;
			
			case 2:
				printf("Nome a ser pesquisado: "); 
				fflush(stdin); 
				fgets(p, 100, stdin); 
				flag=0;
				
				for(i=0;i<5;++i) {
					if(strcmp(p, c[i].n)==0) {
						printf("Nome encontrado no registro %d\n\nDados:\nNome: %sEndereço: %sIdade: %d\nTelefone: %s\n", i, c[i].n, c[i].end, c[i].id, c[i].tel); 
						printf("----------------------------------------------------------------\n");
						flag=1;
					}
				}
				
				if(flag==0) {
					printf("Nome não encontrado nos registros :(\n"); 
					printf("----------------------------------------------------------------\n");
				}
			break;
			
			case 3:
				printf("Ordenação: \n\n");
				
				for(i=0;i<4;++i) {
					for(j=i+1;j<5;++j) {
						if(strcmp(c[i].n, c[j].n)>0) {
							strcpy(ax, c[i].n);
							strcpy(c[i].n, c[j].n);
							strcpy(c[j].n, ax);
						}
					}
				}
				
				for(i=0; i<5; ++i) puts(c[i].n);
				
				printf("----------------------------------------------------------------\n");
			break;
			
			case 4:
				printf("Nome do campo a ser alterado: "); 
				fflush(stdin); 
				fgets(p, 100, stdin); 
				flag=0; 
				i=0;
				
				while(i<5 && flag==0) {
					if(strcmp(p, c[i].n)==0) flag=1;
					else ++i;
				}
				
				if(flag==1) {
					printf("Nome encontrado no registro %d\n\nDados\nNome: %sEndereço: %sIdade: %d\nTelefone: %s\n\nEntre com o dado que deseja alterar:\n1. Nome\n2. Endereço\n3. Idade\n4. Telefone\n\nSua escolha: ", i, c[i].n, c[i].end, c[i].id, c[i].tel);
					scanf("%d", &r);
					
					switch(r) {
						case 1:
							printf("----------------------------------------------------------------\n");
							printf("Novo nome: "); 
							fflush(stdin); 
							fgets(c[i].n, 100, stdin); 
							printf("Alteração efetuada com sucesso!\a\n"); 
							printf("----------------------------------------------------------------\n");
						break;
						
						case 2:	
							printf("----------------------------------------------------------------\n");
							printf("Novo endereço: "); 
							fflush(stdin); 
							fgets(c[i].end, 200, stdin); 
							printf("Alteração efetuada com sucesso!\a\n"); 
							printf("----------------------------------------------------------------\n");
						break;	
						
						case 3:
							printf("----------------------------------------------------------------\n");
							printf("Nova idade: "); 
							fflush(stdin); 
							scanf("%d", &c[i].id); 
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
			break;
				
			case 5: 
				getch();
				return 0; 
			break;
				
			default: printf("Opção inválida");	
		}	
	}
}
