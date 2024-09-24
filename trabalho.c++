#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){
    
    //POSICOES:
    int posicao1;
    int posicao2;
    int posicao3;
    
    //RESULTADO DE TEMPO:
    float soma_de_tempo_h;
    float soma_de_tempo_h1;
    float soma_de_tempo_h2;
    
    float soma_de_tempo_d;
    float soma_de_tempo_d1;
    float soma_de_tempo_d2;
    
	//PEDIDOS:
	int OP10, OP11, OP12, OP13, quantop11, quantop12, quantop13, atual;
	
	//MENSURANDO TEMPO:
	float tempodeprod, tempodeprod1, tempodeprod2, emhoras, emhoras1, emhoras2, emdias, emdias1, emdias2, somatempo, somatempo1, somatempo2;
	
	//TEMPO DE TROCAS (em minutos):
	float troca_completa = 270;
	float troca_un_injecao = 50;
	float troca_molde = 120;
	float troca_macho_central = 30;
	float troca_macho_lateral = 30;
	
	//TEMPO DE SETUP "PADRAO" (em horas):
	float setup_padrao = 2;
	
	//CODIGO DE PEDIDOS:
	string codatual, cod11, cod12, cod13;
	
	//DATAS DE ENTREGAS:
	int dia_entrega10;
	int dia_entrega11;
	int dia_entrega12;
	int dia_entrega13;
	
	int mes_entrega10 = 11;
	int mes_entrega11 = 11;
	int mes_entrega12 = 11;
	int mes_entrega13 = 12;
	
	int ano_entrega10 = 2022;
	int ano_entrega11 = 2022;
	int ano_entrega12 = 2022;
	int ano_entrega13 = 2022;
	
	//DATAS:
	int diahoje = 18;
	int diadata10 = 19;
	int diadata11 = 20;
	int diadata12 = 30;
	int diadata13 = 01;
	
	int mesentrega;
	int meshoje = 11;
	int mesdata10 = 11;
	int mesdata11 = 11;
	int mesdata12 = 11;
	int mesdata13 = 12;
	
	int anoentrega;
	int anohoje = 2022;
	int anodata10 = 2022;
	int anodata11 = 2022;
	int anodata12 = 2022;
	int anodata13 = 2022;
	
	//QUANTIDADE DE PRODUCAO DO PROCESSO ATUAL:
	atual = 600;
	
	//CODIGO DE PEDIDOS RECEBIDOS:
	OP10 = 10;
	OP11 = 11;
	OP12 = 12;
	OP13 = 13;
	
	//QUANTIDADES:
	quantop11 = 500;
	quantop12 = 200;
	quantop13 = 600;
	
	//Produto A;
		string um_uninjecao = "TP001";
		float um_molde = 111;
		string um_machocentral = "P01";
		string um_macholateral = "P001";
		string um_codigoproduto = "A";
		float um_unporhora = 10;
		float um_producaohoraria = 60;
		
	//Produto B;
		string dois_uninjecao = "TP002";
		float dois_molde = 121;
		string dois_machocentral = "P02";
		string dois_macholateral = "P001";
		string dois_codigoproduto = "B";
		float dois_unporhora = 20;
		float dois_producaohoraria = 60;
		
	//Produto C;
		string tres_uninjecao = "TP003";
		float tres_molde = 123;
		string tres_machocentral = "P03";
		string tres_macholateral = "P003";
		string tres_codigoproduto = "C";
		float tres_unporhora = 30;
		float tres_producaohoraria = 60;
		
	printf("ORDEM DE PROCESSO ATUAL:           Data de Hoje: %d/%d/%d\n", diahoje, meshoje, anohoje);
	cout << "\nOrdem de processo: 10\n";
	codatual = um_codigoproduto;
	cout << "Codigo: " << codatual << endl;
	cout << "Quantidade: " << atual << endl;
	cout << "Data de entrega: " << diadata10 << "/" << mesdata10 << "/" << anodata10;
	
	printf("\n\n\n\n\nPEDIDO RECEBIDO:\n");
	printf("Ordem de Processo: %d", OP11);
	cod11 = um_codigoproduto;
	cout << "\nCodigo: " << cod11 << endl;
	printf("Quantidade: %d", quantop11);
	cout << "\nData de entrega: " << diadata11 << "/" << mesdata11 << "/" << anodata11;
	printf("\n-------------------------------");
	
	printf("\n\nPEDIDO RECEBIDO:\n");
	printf("Ordem de Processo: %d", OP12);
	cod12 = dois_codigoproduto;
	cout << "\nCodigo: " << cod12 << endl;
	printf("Quantidade: %d", quantop12);
	cout << "\nData de entrega: " << diadata12 << "/" << mesdata12 << "/" << anodata12;
	printf("\n-------------------------------");
	
	printf("\n\nPEDIDO RECEBIDO:\n");
	printf("Ordem de Processo: %d", OP13);
	cod13 = tres_codigoproduto;
	cout << "\nCodigo: " << cod13 << endl;
	printf("Quantidade: %d\n", quantop13);
	cout << "Data de entrega: " << diadata13 << "/" << mesdata13 << "/" << anodata13;
	printf("\n-------------------------------");
	
	
	printf("\n\nCalculando ordem prioritaria...\n");
	
	printf("\n-------------------------------");
	
	if(codatual == cod11)
	{
	    printf("\nExistem pedidos de mesmo produto que o atual: OP%d", OP11);
	    printf("\n\n- Sem trocas necessarias!\n");
	    tempodeprod = um_producaohoraria*quantop11 / um_unporhora;
	    emhoras = tempodeprod / 60;
	    emdias = emhoras / 24;
	    printf("\nTempo de producao do pedido OP%d em horas: %.2f horas", OP11, emhoras);
	    printf("\nTempo de producao do pedido OP%d em dias: %.2f dias\n", OP11, emdias);
	    soma_de_tempo_h = setup_padrao + emhoras;
	    soma_de_tempo_d = soma_de_tempo_h / 24;
	    printf("Tempo necessario para entrega total (contando tempo de setup): %.2f dias\n", soma_de_tempo_d);
	    dia_entrega11 = diahoje + soma_de_tempo_d -1;
	    printf("Data de entrega: %d/%d/%d\n\n", dia_entrega11, mes_entrega11, ano_entrega11);
	    
	    printf("----------------------------------------------------------------------------------\n\n");
	    
	    printf("Proxima Ordem de Produto: OP%d\n", OP12);
	    cout << "A troca de " << codatual << " para " << cod12 << " requer:\n\n";
	    printf("- Troca de molde (em minutos): %.2f", troca_molde);
	    printf("\n- Troca de macho central (em minutos): %.2f\n\n", troca_macho_central);
	    tempodeprod1 = dois_producaohoraria*quantop12 / dois_unporhora; //600
	    somatempo1 = tempodeprod1 + troca_molde + troca_macho_central; //750
	    emhoras1 = somatempo1 / 60; //12.5
	    soma_de_tempo_h1 = setup_padrao + emhoras1;
	    soma_de_tempo_d1 = soma_de_tempo_h1 / 24;
	    printf("Tempo necessario para entrega total (contando tempo de setup): %.2f horas\n", soma_de_tempo_h1);
	    printf("Tempo necessario para entrega total (contando tempo de setup): %.2f dias\n", soma_de_tempo_d1);
	    dia_entrega12 = diahoje + soma_de_tempo_d1 + 1;
	    printf("Data de entrega: %d/%d/%d\n\n", dia_entrega12, mes_entrega12, ano_entrega12);
	    
	    printf("----------------------------------------------------------------------------------\n\n");
	    
	    printf("Proxima Ordem de Produto: OP%d\n", OP13);
	    cout << "A troca de " << codatual << " para " << cod13 << " requer:\n\n";
	    printf("- Troca completa (em minutos): %.2f\n", troca_completa);
	    tempodeprod2 = tres_producaohoraria*quantop13 / tres_unporhora;
	    somatempo2 = tempodeprod2 + troca_completa;
	    emhoras2 = somatempo2 / 60;
	    soma_de_tempo_h2 = setup_padrao + emhoras2;
	    soma_de_tempo_d2 = soma_de_tempo_h2 / 24;
	    printf("\nTempo necessario para entrega total (contando tempo de setup): %.2f horas\n", soma_de_tempo_h2);
	    printf("Tempo necessario para entrega total (contando tempo de setup): %.2f dias\n", soma_de_tempo_d2);
	    dia_entrega13 = diahoje + soma_de_tempo_d2;
	    printf("Data de entrega: %d/%d/%d\n\n", dia_entrega13, mes_entrega10, ano_entrega13);
	    
	    printf("----------------------------------------------------------------------------------\n");
	    
	    if(diadata11 < diadata12)
	    {
	        if(mesdata12 < mesdata13)
	        {
	            posicao1 = OP11;
	            posicao2 = OP12;
	            posicao3 = OP13;
	            printf("Lista de priorização:\n");
	            printf("\n1-OP%d\n2-OP%d\n3-OP%d", OP11, OP12, OP13);
	            
	        }
	    }
	    
	}
	else if(codatual == cod12)
	{
	    printf("\n\nExistem pedidos de mesmo produto: OP%d", OP12);
	    printf("\n\n- Sem trocas necessarias!\n");
	    tempodeprod = dois_producaohoraria*quantop12 / dois_unporhora;
	    emhoras = tempodeprod / 60;
	    emdias = emhoras / 24;
	    printf("\nTempo de producao do pedido OP%d em horas: %.2f horas", OP12, emhoras);
	    printf("\nTempo de producao do pedido OP%d em dias: %.2f dias\n", OP12, emdias);
	    soma_de_tempo_h = setup_padrao + emhoras;
	    soma_de_tempo_d = soma_de_tempo_h / 24;
	    printf("Tempo necessario para entrega total (contando tempo de setup): %.2f dias\n", soma_de_tempo_d);
	    dia_entrega12 = diahoje + soma_de_tempo_d;
	    printf("Data de entrega: %d/%d/%d", dia_entrega12, mes_entrega12, ano_entrega12);
	}
	else if(codatual == cod13)
	{
	    printf("\n\nExistem pedidos de mesmo produto: OP%d", OP13);
	    printf("\n\n- Sem trocas necessarias!\n");
	    tempodeprod = tres_producaohoraria*quantop13 / tres_unporhora;
	    emhoras = tempodeprod / 60;
	    emdias = emhoras / 24;
	    printf("\nTempo de producao do pedido OP%d em horas: %.2f horas", OP13, emhoras);
	    printf("\nTempo de producao do pedido OP%d em dias: %.2f dias\n", OP13, emdias);
	    soma_de_tempo_h = setup_padrao + emhoras;
	    soma_de_tempo_d = soma_de_tempo_h / 24;
	    printf("Tempo necessario para entrega total (contando tempo de setup): %.2f dias\n", soma_de_tempo_d);
	    dia_entrega13 = diahoje + soma_de_tempo_d;
	    if (dia_entrega13 == diahoje)
	    {
	        dia_entrega13 = dia_entrega13 + 1;
	        printf("\nData de entrega: %d/%d/%d", dia_entrega13, mes_entrega12, ano_entrega13);
	        return 0;
	    }
	    printf("Data de entrega: %d/%d/%d", dia_entrega13, mes_entrega12, ano_entrega13);
	}
	
}
