#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <windows.h>

using namespace std;

//Prototipos das fun��es
void menu();
void opcaoMenu();
void nivelFacil();
void nivelMedio();
void nivelDificil();
void desenvolvedores();
void regras();
void gameOver();
void sair();
void opcaoSair();

//Main -> A fun��o principal do programa
int main(){
	setlocale(LC_ALL, "Portuguese"); // --> SETLOCALE serve para exibir acentua??o no texto
	
	menu();
	
	return 0;
}

//VOID N�O necessita retornar nenhuma valor ao chamar a fuN�?o
void menu(){
	int opcao;
	system("color 09");
	do{
		printf("POR FAVOR, COLOQUE EM TELA CHEIA PARA UM MELHOR APROVEITAMENTO DO JOGO!\n\n");
		printf("A EQUIPE AGRADECE.");
		printf("\n\n\n\n\t\t\t\tPRESSIONE ENTER PARA CONTINUAR...");
		getchar();
		
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t   .d88888b.  888     888 8888888 8888888888P     8888888b.  888             d8888 888b    888 8888888888 88888888888 \n");
		printf("\t\t\t  d88P* *Y88b 888     888   888         d88P      888   Y88b 888            d88888 8888b   888 888            888     \n");
		printf("\t\t\t  888     888 888     888   888        d88P       888    888 888           d88P888 88888b  888 888            888     \n");
		printf("\t\t\t  888     888 888     888   888       d88P        888   d88P 888          d88P 888 888Y88b 888 8888888        888     \n");
		printf("\t\t\t  888     888 888     888   888      d88P         8888888P*  888         d88P  888 888 Y88b888 888            888     \n");
		printf("\t\t\t  888 Y8b 888 888     888   888     d88P          888        888        d88P   888 888  Y88888 888            888     \n");
		printf("\t\t\t  Y88b.Y8b88P Y88b. .d88P   888    d88P           888        888       d8888888888 888   Y8888 888            888     \n");
		printf("\t\t\t   *Y888888*   *Y88888P*  8888888 d8888888888     888        88888888 d88P     888 888    Y888 8888888888     888     \n");
		printf("\t\t\t         Y8b                                                                                                          \n");
		printf("\n\n\n\n\t\t\t                                                     START NOW...");
		getchar();
		system("cls");
		
		opcaoMenu();
		
	}while(opcao != 6);
}

void opcaoMenu(){
	int opcao;
	
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t---------------------------\n");
	printf("\t\t\t\t\t\t\t\t\t|          MENU           |\n");
	printf("\t\t\t\t\t\t\t\t\t---------------------------\n");
	printf("\t\t\t\t\t\t\t\t\t|   1 - N�VEL FAC�L       |\n");
	printf("\t\t\t\t\t\t\t\t\t|   2 - N�VEL M�DIO       |\n");
	printf("\t\t\t\t\t\t\t\t\t|   3 - N�VEL D�FICIL     |\n");
	printf("\t\t\t\t\t\t\t\t\t|   4 - DESENVOLVEDORES   |\n");
	printf("\t\t\t\t\t\t\t\t\t|   5 - SAIR DO JOGO      |\n");
	printf("\t\t\t\t\t\t\t\t\t---------------------------\n");
	
	printf("\n\n\t\t\t\t\t\t\t\t\tINFORME O QUE DESEJA FAZER: ");
	scanf("%d%*c", &opcao);
	system("cls");
	
	if(opcao == 5){
		sair();
	}
	
	switch(opcao){
		case 1:
			nivelFacil();
			break;
		case 2:
			nivelMedio();
			break;
		case 3:
			nivelDificil();
			break;
		case 4:
			desenvolvedores();
			break;
		default:
			printf("\n Digite uma op��o valida!\n\n");
			break;
	}
}

void nivelFacil(){
	char resposta;
	int errado_1 = 0, certo_1 = 0, pontostotal = 0, ajuda = 0, chances = 0, continuar, pontosErros, pontosAcertos;
	
	system("color 0C");
	printf("\n\n\n\n");
	printf("\t\t\t\t\t##   ##   ####    ##   ##  #######  ####                ##\n");
	printf("\t\t\t\t\t###  ##    ##     ##   ##   ##   #   ##                ###\n");
	printf("\t\t\t\t\t#### ##    ##      ## ##    ## #     ##                 ##\n");
	printf("\t\t\t\t\t## ####    ##      ## ##    ####     ##                 ##\n");
	printf("\t\t\t\t\t##  ###    ##       ###     ## #     ##   #             ##\n");
	printf("\t\t\t\t\t##   ##    ##       ###     ##   #   ##  ##             ##\n");
	printf("\t\t\t\t\t##   ##   ####       #     #######  #######           ######\n");
	printf("\n\n\n");
	system("pause");
	system("cls");
  	regras();
	
	//PERGUNTA 1
	if(errado_1 <= 3){
		printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 01 - N�VEL FAC�L  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tMarte est� localizado entre dois planetas, quais s�o eles?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Merc�rio e Netuno\n"); 
		printf("\t\t\t\t\t\t\tB) V�nus e Terra\n");
		printf("\t\t\t\t\t\t\tC) Saturno e Netuno\n");
		printf("\t\t\t\t\t\t\tD) Terra e J�piter\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda � a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: MARTE � O 4� PLANETA DO SISTEMA SOLAR.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma altrnativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma altrnativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'd' || resposta == 'D'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
    //PERGUNTA 2
    if(errado_1 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 02 - N�VEL FAC�L  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tSe voc� pudesse viver no espa�o sem capacete, qual dos seus sentidos voc� n�o seria capaz de usar?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Olfato\n"); 
		printf("\t\t\t\t\t\t\tB) Audi��o\n");
		printf("\t\t\t\t\t\t\tC) Vis�o\n");
		printf("\t\t\t\t\t\t\tD) Paladar\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: N�O H� AR NO ESPA�O, MAS NADA O IMPEDIR� DE SENTIR CHEIRO.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma altrnativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'b' || resposta == 'B'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
    
    //PERGUNTA 3
    if(errado_1 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 03 - N�VEL FAC�L  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tO que mede um 'ano-luz'?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) A massa dos corpos celestiais\n"); 
		printf("\t\t\t\t\t\t\tB) Brilho das estrelas\n");
		printf("\t\t\t\t\t\t\tC) Dist�ncia\n");
		printf("\t\t\t\t\t\t\tD) Tempo\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
				// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: ESPA�O LINEAR OU CURVIL�NEO ENTRE DOIS OU MAIS ELEMENTOS.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma altrnativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'c' || resposta == 'C'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
    
    //PERGUNTA 4
    if(errado_1 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 04 - N�VEL FAC�L  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQual o movimento do planeta Terra respons�vel pelos anos?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Transla��o\n"); 
		printf("\t\t\t\t\t\t\tB) Nuta��o\n");
		printf("\t\t\t\t\t\t\tC) Precess�o\n");
		printf("\t\t\t\t\t\t\tD) Rota��o\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: Em torno do sol.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'a' || resposta == 'A'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
    
    //PERGUNTA 5
    if(errado_1 <= 3){
		printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 05 - N�VEL FAC�L  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQuais das alternativas apresentam somente planetas s�lidos?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) J�piter, Netuno, Terra e Plut�o\n");
		printf("\t\t\t\t\t\t\tB) Terra, Marte, J�piter e Saturno\n");
		printf("\t\t\t\t\t\t\tC) Marte, Merc�rio, Terra e V�nus\n");
		printf("\t\t\t\t\t\t\tD) Urano, Terra, J�piter e Marte\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
				// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: NADA MELHOR DO QUE M&M E TV.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'c' || resposta == 'C'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	
	//PERGUNTA 6
	if(errado_1 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 06 - N�VEL FAC�L  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tEm que ano o homem pisou na lua?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) 1976\n"); 
		printf("\t\t\t\t\t\t\tB) 1969\n");
		printf("\t\t\t\t\t\t\tC) 1980\n");
		printf("\t\t\t\t\t\t\tD) 1988\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: MUITOS NOS CONFUNDEM EM JOGOS DE CARTAS.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma altrnativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'b' || resposta == 'B'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	
	//PERGUNTA 7
	if(errado_1 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 07 - N�VEL FAC�L  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQuem � o sat�lite natural da Terra?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Lua\n"); 
		printf("\t\t\t\t\t\t\tB) Sol\n");
		printf("\t\t\t\t\t\t\tC) Sputnik\n");
		printf("\t\t\t\t\t\t\tD) Marte\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: EM V�RIOS DESENHOS ANIMADOS � REPRESENTADO(A) POR UM QUEIJO.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma altrnativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'a' || resposta == 'A'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	
	//PERGUNTA 8
	if(errado_1 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 08 - N�VEL FAC�L  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQual destes N�O fazem parte do Sistema Solar?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Saturno\n"); 
		printf("\t\t\t\t\t\t\tB) Marte\n");
		printf("\t\t\t\t\t\t\tC) Plut�o\n");
		printf("\t\t\t\t\t\t\tD) V�nus\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: FUI REBAIXADO EM 2006.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma altrnativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'c' || resposta == 'C'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	
	//PERGUNTA 9
	if(errado_1 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 09 - N�VEL FAC�L  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tA lua influencia em qual fen�meno da terra?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Gravidade\n"); 
		printf("\t\t\t\t\t\t\tB) Tuf�es\n");
		printf("\t\t\t\t\t\t\tC) Furac�es\n");
		printf("\t\t\t\t\t\t\tD) Mar�s\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: SEUS SONS S�O AGRAD�VEIS AOS OUVIDOS.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'd' || resposta == 'D'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	
	//PERGUNTA 10
	if(errado_1 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 10 - N�VEL FAC�L  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQual o movimento do planeta Terra respons�vel pelos dias e noites?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Rota��o\n"); 
		printf("\t\t\t\t\t\t\tB) Nuta��o\n");
		printf("\t\t\t\t\t\t\tC) Precess�o\n");
		printf("\t\t\t\t\t\t\tD) Transla��o\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: EM TORNO DE S� MESMA.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_1++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma altrnativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_1++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_1++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'a' || resposta == 'A'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_1++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
				errado_1++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}

	
	if(errado_1 == 4){
		gameOver();
		
		pontosErros = errado_1 * 50;
		pontosAcertos = certo_1 * 100;
		pontostotal = pontosAcertos - pontosErros;

		printf ("\t\t\t\t   RESULTADOS DO JOGO - N�VEL FAC�L          \n\n");
		printf ("\t\t\t\t   Total de acertos  : %d              \n",certo_1);
		printf ("\t\t\t\t   Total de erros    : %d              \n",errado_1);
		printf ("\t\t\t\t   Pontua��o total   : %d              \n\n",pontostotal);
		
		printf("\n\n\n\t\t\t\t   DIGITE '1' PARA REINICIAR O N�VEL FAC�L.");
		printf("\n\t\t\t\t   DIGITE '2' PARA VOLTAR AO MENU PRINC�PAL.");
		printf("\n\t\t\t\t   DIGITE '0' PARA ENCERRAR O JOGO.");
		printf("\n\t\t\t\t   -> ");
		scanf("%d", &continuar);
	
		if(continuar == 1){
			system("cls");
			nivelFacil();
		}
		else if(continuar == 2){
			system("cls");
			opcaoMenu();
		}
		else{
			system("cls");
			sair();
		}
	}
	
	pontosErros = errado_1 * 50;
	pontosAcertos = certo_1 * 100;
	pontostotal = pontosAcertos - pontosErros;

	printf ("\n\n\n\n\n\n\n\t\t\t\t   RESULTADOS DO JOGO - N�VEL FAC�L          \n\n");
	printf ("\t\t\t\t   Total de acertos  : %d              \n",certo_1);
	printf ("\t\t\t\t   Total de erros    : %d              \n",errado_1);
	printf ("\t\t\t\t   Pontua��o total   : %d              \n\n",pontostotal);
	
	printf("\n\n\n\t\t\t\t   DIGITE '1' PARA CONTINUAR PARA O PR�XIMO N�VEL (M�DIO).");
	printf("\n\t\t\t\t   DIGITE '2' PARA VOLTAR AO MENU PRINC�PAL.");
	printf("\n\t\t\t\t   DIGITE '0' PARA ENCERRAR O JOGO.");
	printf("\n\t\t\t\t   -> ");
	scanf("%d", &continuar);

	if(continuar == 1){
		system("cls");
		nivelMedio();
	}
	else if(continuar == 2){
		system("cls");
		opcaoMenu();
	}
	else{
		system("cls");
		sair();
	}
}



void nivelMedio(){
	
	char resposta;
	int errado_2 = 0, certo_2 = 0, pontostotal = 0, ajuda=0, chances=0, continuar, pontosErros, pontosAcertos;
	system("color 0A");
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t##   ##   ####    ##   ##  #######  ####               ####\n");
	printf("\t\t\t\t\t\t###  ##    ##     ##   ##   ##   #   ##               ##  ##\n");
	printf("\t\t\t\t\t\t#### ##    ##      ## ##    ## #     ##                   ##\n");
	printf("\t\t\t\t\t\t## ####    ##      ## ##    ####     ##                 ###\n");
	printf("\t\t\t\t\t\t##  ###    ##       ###     ## #     ##   #            ##\n");
	printf("\t\t\t\t\t\t##   ##    ##       ###     ##   #   ##  ##           ##  ##\n");
	printf("\t\t\t\t\t\t##   ##   ####       #     #######  #######           ######\n");
	printf("\n\n\n");
	system("pause");
	system("cls");
  	
  	regras();
	
	//PERGUNTA 1
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 01 - N�VEL M�DIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQual � o elemento mais abundante encontrado no espa�o?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Carbono\n"); 
		printf("\t\t\t\t\t\t\tB) H�lio\n");
		printf("\t\t\t\t\t\t\tC) Oxig�nio\n");
		printf("\t\t\t\t\t\t\tD) Hidrog�nio\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: JUNTO AO G�S ESSENCIAL PARA OS HUMANOS, FORMA O L�QUIDO INDISPENS�VEL PARA TODOS.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'd' || resposta == 'D'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 2
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 02 - N�VEL M�DIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQuais pa�ses enviaram pessoas com sucesso ao espa�o?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) EUA, R�ssia e China\n"); 
		printf("\t\t\t\t\t\t\tB) EUA, Jap�o e China\n");
		printf("\t\t\t\t\t\t\tC) R?ssia, Brasil e EUA\n");
		printf("\t\t\t\t\t\t\tD) China, Jap�o e FraN�a\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
	// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: S�O OU J� FORAM AS MAIORES POT�NCIAS MUNDIAIS.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
			printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
			printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
			printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'a' || resposta == 'A'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 3
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 03 - N�VEL M�DIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQual alternativa apresenta somente planetas gasosos?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) J�piter, Terra, Marte e Plut�o\n"); 
		printf("\t\t\t\t\t\t\tB) Marte, Terra, Merc�rio e Netuno\n");
		printf("\t\t\t\t\t\t\tC) J�piter, Saturno, V�nus e Merc�rio\n");
		printf("\t\t\t\t\t\t\tD) J�piter, Saturno, Urano e Netuno\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: OS PLANETAS QUE POSSUEM AN�IS.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'd' || resposta == 'D'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 4
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 04 - N�VEL M�DIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\t Qual desses objetos � o mais luminoso?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Um quasar\n"); 
		printf("\t\t\t\t\t\t\tB) Uma supernova \n");
		printf("\t\t\t\t\t\t\tC) Um sol com grande massa \n");
		printf("\t\t\t\t\t\t\tD) Uma hipernova\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: TEM NOME DE UM PERFUME.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'a' || resposta == 'A'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 5
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 05 - N�VEL M�DIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQuanto de espa�o conhecido conseguimos ver da Terra?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) \"40%\"\n"); 
		printf("\t\t\t\t\t\t\tB) \"25%\"\n");
		printf("\t\t\t\t\t\t\tC) \"4%\"\n");
		printf("\t\t\t\t\t\t\tD) \"7%\"\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: SOU A METADE DE UM BIT.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'c' || resposta == 'C'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 6
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 06 - N�VEL M�DIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQual o nome da cadela que orbitou a terra?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Petit\n"); 
		printf("\t\t\t\t\t\t\tB) Laika\n");
		printf("\t\t\t\t\t\t\tC) Mika\n");
		printf("\t\t\t\t\t\t\tD) Luna\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: NOME MUITO COMUM ENTRE OS C�ES.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'b' || resposta == 'B'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 7
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 07 - N�VEL M�DIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQual foi o primeiro astronauta a pisar na lua?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Yuri Gagarin\n"); 
		printf("\t\t\t\t\t\t\tB) Pete Conrad\n");
		printf("\t\t\t\t\t\t\tC) Buzz Aldrin\n");
		printf("\t\t\t\t\t\t\tD) Neil Armstrong\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: FOI UM ENGENHEIRO AEROESPACIAL, AVIADOR NAVAL, PILOTO DE TESTE, ASTRONAUTA E PROFESSOR NORTE AMERICANO..\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'd' || resposta == 'D'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 8
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 08 - N�VEL M�DIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tQual o maior planeta do sistema solar?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) V�nus\n"); 
		printf("\t\t\t\t\t\t\tB) Saturno\n");
		printf("\t\t\t\t\t\t\tC) J�piter\n");
		printf("\t\t\t\t\t\t\tD) Urano\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: REI DO C�U E DOS TROV^�ES NA MITOLOGIA ROMANA.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'c' || resposta == 'C'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 9
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 09 - N�VEL M�DIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tEm qual gal�xia se localiza o planeta terra?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Via L�ctea\n"); 
		printf("\t\t\t\t\t\t\tB) Tri�ngulo\n");
		printf("\t\t\t\t\t\t\tC) Andr�meda\n");
		printf("\t\t\t\t\t\t\tD) Columbus Nimbos\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: MUITAS PESSOAS S�O AL�RGICAS A MINHA PROTE�NA.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_2++;
				}
		    }
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'a' || resposta == 'A'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
    
    //PERGUNTA 10
	if(errado_2 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 10 - N�VEL M�DIO  |\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n\n");
		printf("\t\t\t\t\t\t\tO N�cleo da terra � formado por qual(s) elementos?\n\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Chumbo derretido e ferro\n"); 
		printf("\t\t\t\t\t\t\tB) Ferro, magn�sio e sil�cio\n");
		printf("\t\t\t\t\t\t\tC) Ferro e N�quel\n");
		printf("\t\t\t\t\t\t\tD) Somente sil�cio em estado l�quido\n");
		printf("\t\t\t\t\t\t\t----------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: � OU S�O FERROMAGN�TICO(S) EM TEMPERATURA AMBIENTE.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_2++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_2++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_2++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'c' || resposta == 'C'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_2++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
				errado_2++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	if(errado_2 == 4){
		gameOver();
		
		pontosErros = errado_2 * 50;
		pontosAcertos = certo_2 * 150;
		pontostotal = pontosAcertos - pontosErros;

	    printf ("\t\t\t\t   RESULTADOS DO JOGO - N�VEL M�DIO          \n\n");
		printf ("\t\t\t\t   Total de acertos  : %d              \n",certo_2);
		printf ("\t\t\t\t   Total de erros    : %d              \n",errado_2);
		printf ("\t\t\t\t   Pontua��o total   : %d              \n\n",pontostotal);
		
		printf("\n\n\n\t\t\t   DIGITE '1' PARA REINICIAR O N�VEL M�DIO.");
		printf("\n\t\t\t\t   DIGITE '2' PARA VOLTAR AO MENU PRINC�PAL.");
		printf("\n\t\t\t\t   DIGITE '0' PARA ENCERRAR O JOGO.");
		printf("\n\t\t\t\t   -> ");
	    scanf("%d", &continuar);
	
	    if(continuar == 1){
	        system("cls");
			nivelMedio();
	    }
	    else if(continuar == 2){
	    	system("cls");
	        opcaoMenu();
	    }
	    else{
	    	system("cls");
    		sair();
		}
	}
	
	pontosErros = errado_2 * 50;
	pontosAcertos = certo_2 * 150;
	pontostotal = pontosAcertos - pontosErros;

    printf ("\n\n\n\n\n\n\n\t\t\t\t   RESULTADOS DO JOGO - N�VEL M�DIO          \n\n");
	printf ("\t\t\t\t   Total de acertos  : %d              \n",certo_2);
	printf ("\t\t\t\t   Total de erros    : %d              \n",errado_2);
	printf ("\t\t\t\t   Pontua��o total   : %d              \n\n",pontostotal);
	
	printf("\n\n\n\t\t\t\t   DIGITE '1' PARA CONTINUAR PARA O PR�XIMO N�VEL (D�FICIL).");
	printf("\n\t\t\t\t   DIGITE '2' PARA VOLTAR AO MENU PRINC�PAL.");
	printf("\n\t\t\t\t   DIGITE '0' PARA ENCERRAR O JOGO.");
	printf("\n\t\t\t\t   -> ");
    scanf("%d", &continuar);

    if(continuar == 1){
        system("cls");
		nivelDificil();
    }
    else if(continuar == 2){
    	system("cls");
        opcaoMenu();
    }
    else{
    	system("cls");
    	sair();
	}
	
}

void nivelDificil(){
	char resposta;
	int errado_3 = 0, certo_3 = 0, pontostotal = 0, ajuda=0, chances= 0, continuar, pontosErros, pontosAcertos;
	system("color 0C");
  	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t##   ##   ####    ##   ##  #######  ####               ####\n");
	printf("\t\t\t\t\t\t\t###  ##    ##     ##   ##   ##   #   ##               ##  ##\n");
 	printf("\t\t\t\t\t\t\t#### ##    ##      ## ##    ## #     ##                   ##\n");
	printf("\t\t\t\t\t\t\t## ####    ##      ## ##    ####     ##                 ###\n");
 	printf("\t\t\t\t\t\t\t##  ###    ##       ###     ## #     ##   #               ##\n");
 	printf("\t\t\t\t\t\t\t##   ##    ##       ###     ##   #   ##  ##           ##  ##\n");
 	printf("\t\t\t\t\t\t\t##   ##   ####       #     #######  #######            ####\n");
	printf("\n\n\n");
	system("pause");
	system("cls");
  	regras();
  	
  	//PERGUNTA 1
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 01 - N�VEL D�FICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tDo que � constitu�do o espa�o sideral?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) De gases iguais aos da atmosfera terrestre\n"); 
		printf("\t\t\t\t\t\t\tB) De v�cuo parcial\n");
		printf("\t\t\t\t\t\t\tC) Por g�s metano altamente inflam?vel\n");
		printf("\t\t\t\t\t\t\tD) De mat�ria escura\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: MAIS VAZIO DO QUE CHEIO.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_3++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'b' || resposta == 'B'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 2
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 02 - N�VEL D�FICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tPorque de vez em quando n�s vemos a Lua de outra cor?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Por causa da dispers�o da luz\n"); 
		printf("\t\t\t\t\t\t\tB) Devido ao riqueza em miN�rios\n");
		printf("\t\t\t\t\t\t\tC) Por causa da polui��o na atmosfera terrestre\n");
		printf("\t\t\t\t\t\t\tD) Por causa de fen�menos m�sticos\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: ONDAS ELETROMAGN�TICAS SE DESVIAM.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_3++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'a' || resposta == 'A'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 3
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 03 - N�VEL D�FICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tO que aconteceria com um astronauta se ele ca�sse num buraco negro?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Chegaria ao outro lado do universo\n"); 
		printf("\t\t\t\t\t\t\tB) Viraria um espaguete comprimido ao cruzar o buraco\n");
		printf("\t\t\t\t\t\t\tC) Ficaria preso em outro universo\n");
		printf("\t\t\t\t\t\t\tD) Seria destru�do pelo seu campo gravitacional antes de entrar\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
			printf("\n\t\t\t\t\t\t\tDICA: AS FOR�AS PR�XIMAS A ESTE S�O SURPREENDENTES.\n");
			chances++; 
			printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);

				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_3++;
				}

			}
			else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);

				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'd' || resposta == 'D'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 4
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 04 - N�VEL D�FICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tEm quais grandes eras a hist�ria da Terra � dividida?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Idade da pedra, Medieval, Moderno, Contempor�neo\n"); 
		printf("\t\t\t\t\t\t\tB) Cambriano, Protorozoico , Arqueano, Zooriano\n");
		printf("\t\t\t\t\t\t\tC) Hadeano, Arqueano, Proterozoico, Fanerozoico\n");
		printf("\t\t\t\t\t\t\tD) Pr� Cambriano, Cambriano, Medieval, Contempor�neo\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: 2 vezes 'ano', 2 vezes 'ico'.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_3++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'c' || resposta == 'C'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 5
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 05 - N�VEL D�FICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tEm quais desses planetas ocorre a 'chuva de diamantes'?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Saturno\n"); 
		printf("\t\t\t\t\t\t\tB) Netuno\n");
		printf("\t\t\t\t\t\t\tC) Urano\n");
		printf("\t\t\t\t\t\t\tD) J�piter\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: DEUS ROMANO DO MAR E DOS CAVALOS.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_3++;
				}

			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'b' || resposta == 'B'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 6
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 06 - N�VEL D�FICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tA estrelas se originam de onde?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Quasares\n"); 
		printf("\t\t\t\t\t\t\tB) Nebulosas\n");
		printf("\t\t\t\t\t\t\tC) Buracos Negros\n");
		printf("\t\t\t\t\t\t\tD) Supernovas\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: NUVENS FORMADAS POR POEIRA C�SMICA.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_3++;
				}
			}
			else{
		   		printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
		   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
		   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);

			if(resposta == 'b' || resposta == 'B'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 7
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 07 - N�VEL D�FICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tO que acontece se voc� for exposto ao espa�o sem trajes especiais?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Voc� vive por 10 segundos e depois congela at? a morte\n"); 
		printf("\t\t\t\t\t\t\tB) Voc� morre instantaneamente\n");
		printf("\t\t\t\t\t\t\tC) Voc� vive 90 segundos e morre de asfixia\n");
		printf("\t\t\t\t\t\t\tD) Voc� vai viver por cerca de 4-5 minutos e morrer? de frio\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){ 
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: SEM O QUE RESPIRAR.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
	
					if(resposta == 'c' || resposta == 'C'){
						Beep (300, 300); //Quest�o certa
						Beep (600, 700);
						printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
						certo_3++;
					}
					else{
						Beep (250, 300); //Quest�o errada
						Beep (200, 950);
						printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
						printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
						errado_3++;
					}
			}
			else{
		   		printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
		   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
		   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'c' || resposta == 'C'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'c' || resposta == 'C'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"C\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 8
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 08 - N�VEL D�FICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tUm dia, na Lua equivale a quantos dias na Terra?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) 29,5 dias\n"); 
		printf("\t\t\t\t\t\t\tB) 32,5 dias\n");
		printf("\t\t\t\t\t\t\tC) 20,5 dias\n");
		printf("\t\t\t\t\t\t\tD) 11 dias\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: QUASE UM M�S TERRESTRE.\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_3++;
				}
			}
			else{
		   		printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
		   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
		   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'a' || resposta == 'A'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'a' || resposta == 'A'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"A\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 9
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 09 - N�VEL D�FICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tO que aconteceria se a terra parasse de fazer o movimento de transla��o em redor do Sol?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) Continuamente se desprenderia da �rbita do sol e seria atra�da pela massa do outros planetas\n"); 
		printf("\t\t\t\t\t\t\tB) Se desintegraria no espa�o\n");
		printf("\t\t\t\t\t\t\tC) Seria torrada em Quest�o de dias pelas ondas solares\n");
		printf("\t\t\t\t\t\t\tD) Seria atra�da continuamente em dire��o ao sol\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);

		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: OS CORPOS DE ATRAEM :).\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_3++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'd' || resposta == 'D'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'd' || resposta == 'D'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"D\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
	
	//PERGUNTA 10
  	if(errado_3 <= 3){
	    printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\t|  Pergunta N� 10 - N�VEL D�FICIL  |\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n\n");
		printf("\t\t\t\t\t\t\tO que aconteceria se o n�cleo da terra parasse de girar?\n\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		printf("\t\t\t\t\t\t\tA) A terra se esfriaria e voltar�amos a uma era do gelo\n"); 
		printf("\t\t\t\t\t\t\tB) O campo magn�tico da terra se desfaria\n");
		printf("\t\t\t\t\t\t\tC) O movimento de rota��o da terra pararia\n");
		printf("\t\t\t\t\t\t\tD) N�o haveria mais o calor necess�rio para a exist�ncia de vida\n");
		printf("\t\t\t\t\t\t\t------------------------------------\n");
		// Come�a aqui o teste.
		printf("\n\n\t\t\t\t\t\t\tDESEJA PEDIR AJUDA AOS UNIVERT�RIOS?\n");  
		printf("\n\t\t\t\t\t\t\t1 - SIM\n\t\t\t\t\t\t\t2 - N�O\n");
		printf("\n\t\t\t\t\t\t\t-> ");
		scanf("%d", &ajuda);
		//Ajuda ? a SIM ou N�O para ajuda dos UNIVERT�RIOS.
		//Chances S�O as quantidades de ajudas que ele pediu.
		if(ajuda == 1){
			if(chances < 2){
				printf("\n\t\t\t\t\t\t\tDICA: AS RADIA��ES SOLARES NOS AFETARIAM POR FALTA DESTE....\n");
				chances++; 
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_3++;
				}
			}
			else{
				printf("\n\n\t\t\t\t\t\t\tVOC� J� USOU SUAS DICAS DISPON�VEIS PARA ESTE N�VEL\n");
				printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
				printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
				scanf("%s", &resposta);
				if(resposta == 'b' || resposta == 'B'){
					Beep (300, 300); //Quest�o certa
					Beep (600, 700);
					printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
					certo_3++;
				}
				else{
					Beep (250, 300); //Quest�o errada
					Beep (200, 950);
					printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
					printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
					errado_3++;
				}
			}
   		}
   		else{
	   		printf("\n\n\t\t\t\t\t\t\tVOC� PREFERIU N�O TER AJUDA!\n");
	   		printf("\n\n\t\t\t\t\t\t\tDigite uma alternativa!");
	   		printf("\n\t\t\t\t\t\t\tRESPOSTA: ");
			scanf("%s", &resposta);
			if(resposta == 'b' || resposta == 'B'){
				Beep (300, 300); //Quest�o certa
				Beep (600, 700);
				printf("\n\t\t\t\t\t\t\tPARAB�NS, RESPOSTA CORRETA!\n\n");
				certo_3++;
			}
			else{
				Beep (250, 300); //Quest�o errada
				Beep (200, 950);
				printf("\n\t\t\t\t\t\t\tSINTO MUITO, RESPOSTA INCORRETA!\n");
				printf("\t\t\t\t\t\t\tRESPOSTA CORRETA: LETRA \"B\"\n\n");
				errado_3++;
			}
		}
		printf("\t\t\t\t\t\t\t");
		system("pause");
		system("cls");
	}
  	
  	if(errado_3 == 4){
		gameOver();
		
		pontosErros = errado_3 * 50;
		pontosAcertos = certo_3 * 250;
		pontostotal = pontosAcertos - pontosErros;

	    printf ("\t\t\t\t   RESULTADOS DO JOGO - N�VEL D�FICIL          \n\n");
		printf ("\t\t\t\t   Total de acertos  : %d              \n",certo_3);
		printf ("\t\t\t\t   Total de erros    : %d              \n",errado_3);
		printf ("\t\t\t\t   Pontua��o total   : %d              \n\n",pontostotal);
		
		printf("\n\n\n\t\t\t\t   DIGITE '1' PARA REINICIAR O N�VEL D�FICIL.");
		printf("\n\t\t\t\t   DIGITE '2' PARA VOLTAR AO MENU PRINC�PAL.");
		printf("\n\t\t\t\t   DIGITE '0' PARA ENCERRAR O JOGO.");
		printf("\n\t\t\t\t   -> ");
	    scanf("%d", &continuar);
	
	    if(continuar == 1){
	        system("cls");
			nivelDificil();
	    }
	    else if(continuar == 2){
	        system("cls");
			opcaoMenu();
	    }
	    else{
	    	system("cls");
    		sair();
		}
	}
	
	pontosErros = errado_3 * 50;
	pontosAcertos = certo_3 * 250;
	pontostotal = pontosAcertos - pontosErros;

    printf ("\n\n\n\n\n\n\n\t\t\t\t   RESULTADOS DO JOGO - N�VEL D�FICIL          \n\n");
	printf ("\t\t\t\t   Total de acertos  : %d              \n",certo_3);
	printf ("\t\t\t\t   Total de erros    : %d              \n",errado_3);
	printf ("\t\t\t\t   Pontua��o total   : %d              \n\n",pontostotal);
	
	opcaoSair();
}

void desenvolvedores(){
	int voltarMenu;
	system("color 09");
	system("cls");
	printf("\n\n");
	printf("\t        ########  ########  ######  ######## ##    ## ##     ##  #######  ##       ##     ## ######## ########   #######  ########  ########  ######       \n");
	printf("\t        ##     ## ##       ##    ## ##       ###   ## ##     ## ##     ## ##       ##     ## ##       ##     ## ##     ## ##     ## ##       ##    ##      \n");
	printf("\t        ##     ## ##       ##       ##       ####  ## ##     ## ##     ## ##       ##     ## ##       ##     ## ##     ## ##     ## ##       ##            \n");
	printf("\t        ##     ## ######    ######  ######   ## ## ## ##     ## ##     ## ##       ##     ## ######   ##     ## ##     ## ########  ######    ######       \n");
	printf("\t        ##     ## ##             ## ##       ##  ####  ##   ##  ##     ## ##        ##   ##  ##       ##     ## ##     ## ##   ##   ##             ##      \n");
	printf("\t        ##     ## ##       ##    ## ##       ##   ###   ## ##   ##     ## ##         ## ##   ##       ##     ## ##     ## ##    ##  ##       ##    ##      \n");
	printf("\t        ########  ########  ######  ######## ##    ##    ###     #######  ########    ###    ######## ########   #######  ##     ## ########  ######       \n");
	printf("\n\n\n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t      ##    ###     ######  ##    ##  ######   #######  ##    ##    |     ######   ##     ## #### ##       ##     ## ######## ########  ##     ## ######## \n");
	printf("\t      ##   ## ##   ##    ## ##   ##  ##    ## ##     ## ###   ##    |    ##    ##  ##     ##  ##  ##       ##     ## ##       ##     ## ###   ### ##       \n");
	printf("\t      ##  ##   ##  ##       ##  ##   ##       ##     ## ####  ##    |    ##        ##     ##  ##  ##       ##     ## ##       ##     ## #### #### ##       \n");
	printf("\t      ## ##     ## ##       #####     ######  ##     ## ## ## ##    |    ##   #### ##     ##  ##  ##       ######### ######   ########  ## ### ## ######   \n");
	printf("\t##    ## ######### ##       ##  ##         ## ##     ## ##  ####    |    ##    ##  ##     ##  ##  ##       ##     ## ##       ##   ##   ##     ## ##       \n");
	printf("\t##    ## ##     ## ##    ## ##   ##  ##    ## ##     ## ##   ###    |    ##    ##  ##     ##  ##  ##       ##     ## ##       ##    ##  ##     ## ##       \n");
	printf("\t ######  ##     ##  ######  ##    ##  ######   #######  ##    ##    |     ######    #######  #### ######## ##     ## ######## ##     ## ##     ## ######## \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                         *INSTAGRAM*                                |                                       *INSTAGRAM*                                    \n");
	printf("\t                   instagram.com/jacksonm.f/                        |                                instagram.com/guilhermehgg/                           \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                          *LINKEDIN*                                |                                        *LINKEDIN*                                    \n");
	printf("\t     linkedin.com/in/jackson-marcelino-de-freitas-900a18209/        |                         linkedin.com/in/guilherme-gomes-3276a41b6/                   \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                                                                    |                                         *GitHub*                                     \n");
	printf("\t                                                                    |                               github.com/guilhermegomees                             \n");
	printf("\t                                                                    |                                                                                      \n");
	printf("\t                                                                    |                                                                                      \n");
	
	opcaoSair();
}

void gameOver(){
	system("color 4F");
	printf("\n\n\n\n\n");
	printf("\t\t\t\t   .d8888b.         d8888 888b     d888 8888888888      .d88888b.  888     888 8888888888 8888888b.   \n");
	printf("\t\t\t\t  d88P  Y88b       d88888 8888b   d8888 888            d88P* *Y88b 888     888 888        888   Y88b  \n");
	printf("\t\t\t\t  888    888      d88P888 88888b.d88888 888            888     888 888     888 888        888    888  \n");
	printf("\t\t\t\t  888            d88P 888 888Y88888P888 8888888        888     888 Y88b   d88P 8888888    888   d88P  \n");
	printf("\t\t\t\t  888  88888    d88P  888 888 Y888P 888 888            888     888  Y88b d88P  888        8888888P'   \n");
	printf("\t\t\t\t  888    888   d88P   888 888  Y8P  888 888            888     888   Y88o88P   888        888 T88b    \n");
	printf("\t\t\t\t  Y88b  d88P  d8888888888 888   *   888 888            Y88b. .d88P    Y888P    888        888  T88b   \n");
	printf("\t\t\t\t   *Y8888P88 d88P     888 888       888 8888888888      *Y88888P*      Y8P     8888888888 888   T88b  \n");
	printf("\n\n\n");
}

void regras(){
	system ("cls");
	printf("\n\n\n\n");
	printf("\t\t\t\t    888888b.   8888888888 888b     d888        888     888 8888888 888b    888 8888888b.   .d88888b.  \n");
	printf("\t\t\t\t    888  *88b  888        8888b   d8888        888     888   888   8888b   888 888  *Y88b d88P* *Y88b \n");
	printf("\t\t\t\t    888  .88P  888        88888b.d88888        888     888   888   88888b  888 888    888 888     888 \n");
	printf("\t\t\t\t    8888888K.  8888888    888Y88888P888        Y88b   d88P   888   888Y88b 888 888    888 888     888 \n");
	printf("\t\t\t\t    888  *Y88b 888        888 Y888P 888         Y88b d88P    888   888 Y88b888 888    888 888     888 \n");
	printf("\t\t\t\t    888    888 888        888  Y8P  888 888888   Y88o88P     888   888  Y88888 888    888 888     888 \n");
	printf("\t\t\t\t    888   d88P 888        888   *   888           Y888P      888   888   Y8888 888  .d88P Y88b. .d88P \n");
	printf("\t\t\t\t    8888888P*  8888888888 888       888            Y8P     8888888 888    Y888 8888888P*   *Y88888P*  \n");
    printf("\n");
    printf("\t\t\t\t   REGRAS DO JOGO:\n\n\n");
    printf("\t\t\t\t   - ESTE � UM JOGO DE PERGUNTAS E RESPOSTAS.\n");
	printf("\t\t\t\t   - O JOGADOR DEVER� ESCOLHER DENTRE AS 4 ALTERNATIVAS, SOMENTE UMA, E EM SEGUIDA PRESSIONAR \"ENTER\".\n");
	printf("\t\t\t\t   - NA HORA DE RESPONDER, O JOGADOR PODE PEDIR A AJUDA DOS UNIVERT�RIOS, BASTA DIGITAR \"1\".\n");
	printf("\t\t\t\t   - O JOGADOR TER� 2 AJUDAS DURANTE CADA N�VEL.\n");
	printf("\t\t\t\t   - O JOGADOR TER� 3 VIDAS DURANTE TODO O JOGO, PODENDO ERRAR SOMENTE 3 PERGUNTAS\n");
	printf("\t\t\t\t     SE CASO ERRAR 4 PERGUNTAS O JOGO SER� ENCERRADO.\n");
	printf("\t\t\t\t   - CADA N�VEL TEM SEU PR�PRIO SISTEMA DE PONTUA��O: \n");
	printf("\t\t\t\t       > N�VEL F�CIL: PONTUA��O POR CADA QUEST�O CORRETA -> 100 PONTOS.\n");
	printf("\t\t\t\t       > N�VEL M�DIO: PONTUA��O POR CADA QUEST�O CORRETA -> 150 PONTOS.\n");
	printf("\t\t\t\t       > N�VEL D�FICIL: PONTUA��O POR CADA QUEST�O CORRETA -> 250 PONTOS.\n");
	printf("\t\t\t\t   - PARA CADA QUEST�O ERRADA O JOGADOR PERDER� 50 PONTOS. \n");
	printf("\n\t\t\t\t   - A PONTUA��O M�XIMA QUE O JOGADOR PODE ALCAN�AR � DE 5000 PONTOS. \n");
	printf("\n\n\t\t\t\t   BOA SORTE S2");
	printf("\n\n\n\t\t\t\t   ");
	system("pause");
	system("cls");
}

void opcaoSair(){
	int voltarMenu;
	printf("\n\n\t========================================================================================================================================================");
	printf("\n\t   DIGITE >> '1' << PARA VOLTAR AO MENU PRINCIPAL.");
	printf("\n\t   DIGITE >> '0' << PARA ENCERRAR O JOGO.");
	printf("\n\t========================================================================================================================================================\n");
	printf("\t   ->> ");
	scanf("%d", &voltarMenu);

	if(voltarMenu == 1){
		system("cls");
		opcaoMenu();
	}else{
		system("cls");
		sair();
	}
}

void sair(){
	system("color 09");
	system("cls");
	printf("\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\tVOC� ESCOLHEU SAIR DO JOGO\n");
	printf("\t\t\t\t\t\t\t\t\tOBRIGADO PELA INTERA��O!\n\n\n");
	printf("\t\t\t\t\t\t\t88888888888  .d8888b.  888    888        d8888 888     888 \n");
	printf("\t\t\t\t\t\t\t    888     d88P  Y88b 888    888       d88888 888     888 \n");
	printf("\t\t\t\t\t\t\t    888     888    888 888    888      d88P888 888     888 \n");
	printf("\t\t\t\t\t\t\t    888     888        8888888888     d88P 888 888     888 \n");
	printf("\t\t\t\t\t\t\t    888     888        888    888    d88P  888 888     888 \n");
	printf("\t\t\t\t\t\t\t    888     888    888 888    888   d88P   888 888     888 \n");
	printf("\t\t\t\t\t\t\t    888     Y88b  d88P 888    888  d8888888888 Y88b. .d88P \n");
	printf("\t\t\t\t\t\t\t    888      *Y8888P*  888    888 d88P     888  *Y88888P*  \n");
	exit(0);
}

