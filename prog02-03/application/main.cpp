/** 
 * @mainpage Banco
 * @author Renato Barros de Lima Freitas
 * @date 20/05/2018
 * @version 1.0
 *
 * @file application/main.cpp
 * @brief Arquivo principal do programa
*/

#include <iostream>
#include <memory>

#include "conta.hpp"
#include "agencia.hpp"

using namespace std;

int main(int argc, char const *argv[]){
	/** Objeto agencia que tem todos o métodos do banco */
	Agencia agencia;

	/** Armazena a opção digitada pelo usuário */
	int op;

	do{
		cout << ">>>>>> Digite uma das opçoes abaixo: " << endl;
		cout << "(1) Cadastrar conta" << endl;
		cout << "(2) Realizar depósito" << endl;
		cout << "(3) Realizar saque" << endl;
		cout << "(4) Realizar transferência" << endl;
		cout << "(5) Emitir extrato" << endl;
		cout << "(6) Emitir saldo" << endl;
		cout << "(7) Excluir conta" << endl;
		cout << "(0) Sair" << endl;

		cin >> op;

		switch(op){
			case 1:
					agencia.criarConta();
					break;
			case 2:
					agencia.realizarDeposito();
					break;
			case 3:
					agencia.realizarSaque();
					break;
			case 4:
					agencia.realizarTransferencia();
					break;
			case 5:
					agencia.emitirExtratoConta();
					break;
			case 6:
					agencia.emitirSaldoConta();
					break;
			case 7:
					agencia.excluirConta();
					break;
			case 0:
					return 0;
					break;
			default:
					cout << "Opção Inválida!!" << endl;
		}
	}while(op != 0);

	return 0;
}