#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#define tam 10

using namespace std;

int main()
{
	int i, vet[10], escolha1, escolha2, escolha3, escolhaproduto;
	char produto[10], cliente[40];
	
	
	printf("BEM-VINDO AO CONTROLE DE PRODUCAO GEMU!\n\n");
	printf("Criar novo pedido?\n\n1- Sim\n2- Nao\n\n");
	scanf("%d", &escolha1);
	switch(escolha1)
	{
		case 1:
			for(i=0;i<tam;i++)
			{
				printf("\nPEDIDO NUMERO 00%d CRIADO\n-------------------------\n\n", i+1);
				printf("Cliente ja cadastrado?\n\n1- Sim\n2- Nao\n\n");
				scanf("%d", &escolha2);
				switch(escolha2)
				{
					case 1:
						printf("Escolha o cliente:\n\n");
						printf("1- Joao Comercio LTDA\n2- Gabriel Ferragens SA");
						scanf("%d", escolha3);
						switch(escolha3)
						{
							case 1: //Cliente Joao Comercio LTDA
								printf("Escolha o produto:\n\n");
								printf("1- 88313759\n2- 88225602\n3- 88319238\n4- 88657304");
								scanf("%d", escolhaproduto);
								switch(escolhaproduto)
								{
									case 1:
										printf("OK");
									case 2:
										printf("OK");
									case 3:
										printf("OK");
									case 4:
										printf("OK");
								}
							case 2: //Cliente Gabriel Ferragens
								printf("Escolha o produto:\n\n");
								printf("1- 88313759\n2- 88225602\n3- 88319238\n4- 88657304");
								scanf("%d", escolhaproduto);
								switch(escolhaproduto)
								{
									case 1:
										printf("OK");
									case 2:
										printf("OK");
									case 3:
										printf("OK");
									case 4:
										printf("OK");
								
						}
						break;
					case 2:
						printf("Favor cadastrar o cliente:");
				}
			}
		case 2:
			printf("\nEncerrando programa...");
			printf("\nAte logo!");
			return 0;	
	}
	
	
}