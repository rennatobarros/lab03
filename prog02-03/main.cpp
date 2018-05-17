#include <iostream>
#include <memory>

#include "conta.hpp"
#include "movimentacao.hpp"

using namespace std;

vector<shared_ptr<Conta>> contas;

int main(int argc, char const *argv[]){
	
	int op;

	do{
		cout << ">>>>>> Digite uma das opçoes abaixo: " << endl;
		cout << "(1) Cadastrar conta" << endl;
		cout << "(2) Realizar saque" << endl;
		cout << "(3) Realizar transferência" << endl;
		cout << "(4) Extrato da conta" << endl;
		cout << "(5) Realizar depósito" << endl;
		cout << "(6) Excluir conta" << endl;
		cout << "(0) Sair" << endl;

		cin >> op;

		switch(op){
			case 1:
					break;
			case 2:
					break;
			case 3:
					break;
			case 4:
					break;
			case 5:
					break;
			case 6:
					break;
			default:
					cout << "Opção inválida!!!" << endl;
		}while(op != 0);
	}

	return 0;
}