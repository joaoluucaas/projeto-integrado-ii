#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>

void menuGerenciar(){
	int opcaoGerenciar;
	
	do{
		system("cls");
		printf("\n========== GERENCIAR ==========\n");
	    printf("1 - Cadastrar aluno\n");
		printf("2 - Cadastrar instrutor\n");
	    printf("3 - Cadastrar plano\n");
	    printf("4 - Cadastrar modalidade\n");
	    printf("5 - Gerenciar avaliacoes fisicas\n");
	    printf("6 - Exclusao\n");
	    printf("0 - Retornar\n");
	    printf("Opcao: ");
	    scanf("%d", &opcaoGerenciar);
	}while (opcaoGerenciar != 0);
}

void menuRelatorios(){
	int opcaoRelatorios;
	do{
		system("cls");
		printf("\n========== RELATORIOS ==========\n");
        printf("1 - Listar alunos\n");
        printf("2 - Listar instrutores\n");
        printf("3 - Listar planos\n");
        printf("4 - Listar modalidades\n");
        printf("5 - Listar avaliacoes fisicas\n");
        printf("6 - Total financeiro das mensalidades\n");
        printf("7 - Quantidade de alunos por plano\n");
        printf("8 - Quantidade de avaliacoes por instrutor\n");
        printf("0 - Retornar\n");
        printf("Opcao: ");
        scanf("%d", &opcaoRelatorios);
	}while (opcaoRelatorios != 0);
}

void menuModalidades(){
	int opcaoModalidades;
	do{
		system("cls");
		printf("\n========== MODALIDADES ==========\n");
        printf("1 - Musculacao\n");
        printf("2 - Pilates\n");
        printf("3 - Jiu-jitsu\n");
        printf("4 - Muay thai\n");
        printf("5 - Listar modalidades\n");
        printf("0 - Retornar\n");
        printf("Opcao: ");
        scanf("%d", &opcaoModalidades);
	}while (opcaoModalidades != 0);
}

void menuPlanos(){
	int opcaoPlanos;
	do{
		system("cls");
		printf("\n========== PLANOS DA NEXFIT ==========\n");
        printf("1 - Plano mensal\n");
        printf("2 - Plano trimestral\n");
        printf("3 - Plano semestral\n");
        printf("4 - Plano anual\n");
        printf("5 - Consultar valores dos planos\n");
        printf("0 - Retornar\n");
        printf("Opcao: ");
        scanf("%d", &opcaoPlanos);
	}while (opcaoPlanos != 0);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int opcaoPrincipal;
	
	printf("João Lucas da Conceição 10442613230\n");
	printf("Larissa Victoria Yamasaki Vincoletto 10442614917\n");
	printf("Pablo Douglas Rodrigues Costa 10462615182\n");
	printf("Murilo Souza Caires de Lima 10442613929\n");
	printf("Pedro Almeida 10442613221\n");
	printf("Brayan Gregório Picuila 10442613230\n");
	printf("Gabriel Lima Rios 10442614390\n");
	printf("Igan Gambôa Gonçalves de Lima 10442614828\n");
	printf("\n\t\tTrabalho feito com muito carinho por todos acima, agradecemos desde já.");
	sleep(5);
	
	do{
		system("cls");
		printf("\n========== NEXFIT ==========\n");
        printf("1 - Gerenciar\n");
        printf("2 - Relatorios\n");
        printf("3 - Modalidades\n");
        printf("4 - Planos da academia\n");
        printf("0 - Finalizar\n");
        printf("Opcao: ");
        scanf("%d", &opcaoPrincipal);
        
        switch(opcaoPrincipal){
        	case 1:
        		menuGerenciar();
        		break;
        	case 2:
        		menuRelatorios();
        		break;
        	case 3:
				menuModalidades();
				break;
			case 4:
				menuPlanos();
				break;
			case 0:
				printf("\t\t\t=========Obrigado por utilizar nosso programa. Volte sempre :)=========\n");	
				break;
			default:
				printf("Opção inválida, por favor, tente novamente.\n");		
        }
        
	}while (opcaoPrincipal != 0);
	
	
	
    return 0;
}

