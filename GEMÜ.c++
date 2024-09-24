#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>

using namespace std;

class Cliente
{
    public:
        string nome;
        long int CPF_CNPJ;
        string endereco;
        long int telefone;
};

class Produto
{
    public:
        int codigo;
        string descricao;
        int DN;
        int conexao;
        string material_injetado;
        string unidade_injecao;
        int molde;
        string macho_central;
        string macho_lateral;
        int qtd_producao;
        int tempo_de_producao;
};

int main(){ //FUNÇÃO PRINCIPAL

    Cliente joao;
        joao.nome = "Joao Comercio ltda";
        joao.CPF_CNPJ = 12417116901;
        joao.endereco = "Rua Einstein 1111 - Casa 2";
        joao.telefone = 41995927885;
        
    Cliente gabriel;
        gabriel.nome = "Gabriel Comercios SA";
        gabriel.CPF_CNPJ = 25533032000183;
        gabriel.endereco = "Av Victor Gebur 587 - Predio 3";
        gabriel.telefone = 21985402277;
    
    Produto um;
    um.codigo = 88313759;
    um.descricao = "K60015D81725";
    um.DN = 15;
    um.conexao = 8;
    um.material_injetado = 17;
    um.unidade_injecao = "TP45PFA";
    um.molde = 3253;
    um.macho_central = "P0049145";
    um.macho_lateral = "P0049148";
    um.qtd_producao = 18;
    um.tempo_de_producao = 120;
    
    Produto dois;
    dois.codigo = 88225602;
    dois.descricao = "K60015D83925";
    dois.DN = 15;
    dois.conexao = 8;
    dois.material_injetado = 39;
    dois.unidade_injecao = "TP45PFA";
    dois.molde = 3253;
    dois.macho_central = "P0049145";
    dois.macho_lateral = "P0049148";
    dois.qtd_producao = 10;
    dois.tempo_de_producao = 60;
    
    Produto tres;
    tres.codigo = 88319238;
    tres.descricao = "K60015D81825";
    tres.DN = 15;
    tres.conexao = 8;
    tres.material_injetado = 18;
    tres.unidade_injecao = "TP50PP";
    tres.molde = 3253;
    tres.macho_central = "P0049145";
    tres.macho_lateral = "P0049148";
    tres.qtd_producao = 60;
    tres.tempo_de_producao = 200;
    
    Produto quatro;
    quatro.codigo = 88657304;
    quatro.descricao = "K60015D343925";
    quatro.DN = 15;
    quatro.conexao = 34;
    quatro.material_injetado = 39;
    quatro.unidade_injecao = "TP45PFA";
    quatro.molde = 3254; //TROCA DE VALOR REAL PARA TESTE
    quatro.macho_central = "P0049145";
    quatro.macho_lateral = "P0049154";
    quatro.qtd_producao = 50;
    quatro.tempo_de_producao = 160;
    
	int valor, num, numped, vcliente, vproduto, qtd, calc, decisao;
	char cliente[40], prazo[10];
	num = 000;
	
	cout <<"Seja bem-vindo ao controle de producao Gemu!\n--------------------------------------------\n\n";
	cout <<"Escolha uma opcao abaixo:\n\n";
	cout <<"1- Inserir novo pedido\n2- Cadastrar cliente\n3- Visualizar ordem de producao\n4- Sair\n\n";
	cin >> valor;
	
	    switch(valor)
	    {
		    case 1:
		        num = num + 1;
    			printf("\nPedido numero 00%d criado.\n", num);
    			printf("Selecione cliente:\n\n");
                cout << "1- " << joao.nome << endl;
                cout << "2- " << gabriel.nome << endl;
                cout << "3- Voltar\n" << endl;
                cin >> vcliente;
                    switch(vcliente)
                    {
                        case 1:
                            printf("\nPEDIDO NUMERO 00%d\n-----------------\n", num);
                            cout << "Cliente: " << joao.nome << endl;
                            cout << "CPF/CNPJ: " << joao.CPF_CNPJ << endl;
                            cout << "Endereco: " << joao.endereco << endl;
                            cout << "Telefone: " << joao.telefone << endl;
                            printf("\nSelecione produto:\n\n");
                            cout << "1- " << um.codigo << endl;
                            cout << "2- " << dois.codigo << endl;
                            cout << "3- " << tres.codigo << endl;
                            cout << "4- " << quatro.codigo << "\n" << endl;
                            cin >> vproduto;
                        
                            switch(vproduto)
                            {
                                case 1:
                                    cout << "\nInforme QTD: ";
                                    cin >> qtd;
                                    calc = um.tempo_de_producao*qtd / um.qtd_producao;
                                    cout << "Tempo de producao para " << um.qtd_producao << " unidades do produto " << um.codigo << ": " << um.tempo_de_producao << " minutos" << endl;
                                    cout << "Informe data de entrega acordada:\n";
                                    scanf("%s", &prazo);
                                    printf("\nPEDIDO NUMERO 00%d\n-----------------\n", num);
                                    cout << "Cliente: " << joao.nome << endl;
                                    cout << "CPF/CNPJ: " << joao.CPF_CNPJ << endl;
                                    cout << "Endereco: " << joao.endereco << endl;
                                    cout << "Telefone: " << joao.telefone << endl;
                                    cout << "Produto: " << um.codigo << endl;
                                    cout << "QTD: " << qtd;
                                    printf("\nTempo de produção do lote: ");
                                    printf("%d", calc);
                                    printf(" minutos");
                                    cout << "\nPrazo de entrega: " << prazo << endl;
                                    break;
                                case 2:
                                    cout << "\nInforme QTD: ";
                                    cin >> qtd;
                                    calc = dois.tempo_de_producao*qtd / dois.qtd_producao;
                                    cout << "Tempo de producao para " << dois.qtd_producao << " unidades do produto " << dois.codigo << ": " << dois.tempo_de_producao << " minutos" << endl;
                                    cout << "Informe data de entrega acordada:\n";
                                    scanf("%s", &prazo);
                                    printf("\nPEDIDO NUMERO 00%d\n-----------------\n", num);
                                    cout << "Cliente: " << joao.nome << endl;
                                    cout << "Endereco: " << joao.endereco << endl;
                                    cout << "Telefone: " << joao.telefone << endl;
                                    cout << "Produto: " << dois.codigo << endl;
                                    cout << "QTD: " << qtd;
                                    printf("\nTempo de produção do lote: ");
                                    printf("%d", calc);
                                    printf(" minutos");
                                    cout << "\nPrazo de entrega: " << prazo << endl;
                                    break;
                                case 3:
                                    cout << "\nInforme QTD: ";
                                    cin >> qtd;
                                    calc = tres.tempo_de_producao*qtd / tres.qtd_producao;
                                    cout << "Tempo de producao para " << tres.qtd_producao << " unidades do produto " << tres.codigo << ": " << tres.tempo_de_producao << " minutos" << endl;
                                    cout << "Informe data de entrega acordada:\n";
                                    scanf("%s", &prazo);
                                    printf("\nPEDIDO NUMERO 00%d\n-----------------\n", num);
                                    cout << "Cliente: " << joao.nome << endl;
                                    cout << "Endereco: " << joao.endereco << endl;
                                    cout << "Telefone: " << joao.telefone << endl;
                                    cout << "Produto: " << tres.codigo << endl;
                                    cout << "QTD: " << qtd;
                                    printf("\nTempo de produção do lote: ");
                                    printf("%d", calc);
                                    printf(" minutos");
                                    cout << "\nPrazo de entrega: " << prazo << endl;
                                    break;
                                case 4:
                                    cout << "\nInforme QTD: ";
                                    cin >> qtd;
                                    calc = quatro.tempo_de_producao*qtd / quatro.qtd_producao;
                                    cout << "Tempo de producao para " << quatro.qtd_producao << " unidades do produto " << quatro.codigo << ": " << quatro.tempo_de_producao << " minutos" << endl;
                                    cout << "Informe data de entrega acordada:\n";
                                    scanf("%s", &prazo);
                                    printf("\nPEDIDO NUMERO 00%d\n-----------------\n", num);
                                    cout << "Cliente: " << joao.nome << endl;
                                    cout << "Endereco: " << joao.endereco << endl;
                                    cout << "Telefone: " << joao.telefone << endl;
                                    cout << "Produto: " << quatro.codigo << endl;
                                    cout << "QTD: " << qtd;
                                    printf("\nTempo de produção do lote: ");
                                    printf("%d", calc);
                                    printf(" minutos");
                                    cout << "\nPrazo de entrega: " << prazo << endl;
                                    break;
                            }
                    }  
	    }
	
}