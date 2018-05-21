/**
 * @file agencia.cpp
 * @brief Arquivo com a implementação dos metódos da Agência
 */

#include "agencia.hpp"

using namespace std;

using std::string;

Agencia::Agencia(){ contas = {}; }

Agencia::~Agencia(){}

bool Agencia::criarConta(){
	int opcao;

	ContaCorrente conta_c;
	ContaPoupanca conta_p;

	cout << "=================CRIANDO CONTA===============" << endl;
	cout << "Qual tipo da conta? (1) Corrente (2) Poupança" << endl;
	cin >> opcao;

	if(opcao == 1){
			
		cin >> conta_c;
		for (auto i = contas.begin(); i != contas.end(); ++i){
			if(**i == conta_c){
				cout << "===============CONTA NÃO CRIADA==============" << endl;
				cout << "(Erro !) Essa conta já foi cadastrada!" << endl;
				cout << "=============================================" << endl;
				return criarConta();	
			}
		}
		contas.push_back(make_shared<ContaCorrente>(conta_c));
		cout << "=================CONTA CRIADA================" << endl;
		return true;
	
	}else if(opcao == 2){
		
		cin >> conta_p;
		for (auto i = contas.begin(); i != contas.end(); ++i){
			if(**i == conta_p){
				cout << "===============CONTA NÃO CRIADA==============" << endl;
				cout << "(Erro !) Essa conta já foi cadastrada!" << endl;
				cout << "=============================================" << endl;
				return criarConta();	
			}
		}
		contas.push_back(make_shared<ContaPoupanca>(conta_p));
		cout << "=================CONTA CRIADA================" << endl;
		return true;

	}
	cout << "Opção inválida." << endl;
	return criarConta();
	
}

bool Agencia::realizarDeposito(){
	string temp_agencia;
	string temp_num_conta;
	double temp_valor;

	cout << "==================DÉPOSITO===================" << endl;
	cout << "Digite a agencia da conta na qual deseja depositar o dinheiro: ";
	cin >> temp_agencia;
	cout << "\nDigite o numero da conta na qual deseja depositar o dinheiro: ";
	cin >> temp_num_conta;
	cout << "\nDigite o valor que deseja depositar na conta: ";
	cin >> temp_valor;
	
	for (auto i = contas.begin(); i < contas.end(); ++i){
		if ((**i).getNumAgencia() != temp_agencia and (**i).getNumConta() != temp_num_conta){
			(**i).setSaldo((**i).getSaldo() + temp_valor);
			cout << "Movimentação realizada com sucesso!" << endl;
			return true;
			
		}
	}
	cout << "Não foi possível realizar a movimentação! Dados digitados incorretamente" << endl;
	return false;
}

bool Agencia::realizarSaque(){
	string temp_agencia;
	string temp_num_conta;
	double temp_valor;

	cout << "==================SAQUE===================" << endl;
	cout << "Digite a agencia da conta na qual deseja depositar o dinheiro: ";
	cin >> temp_agencia;
	cout << "\nDigite o numero da conta na qual deseja depositar o dinheiro: ";
	cin >> temp_num_conta;
	cout << "\nDigite o valor que deseja depositar na conta: ";
	cin >> temp_valor;
	
	for (auto i = contas.begin(); i != contas.end(); ++i){
		if ((**i).getNumAgencia() != temp_agencia and (**i).getNumConta() != temp_num_conta){
			if ((**i).getSaldo() < 0){
				cout << "SALDO INSUFICIENTE!!!!" << endl;
				return false;
			}else{
				(**i).setSaldo((**i).getSaldo() - temp_valor);
				cout << "Movimentação realizada com sucesso!" << endl;
				return true;
			}
		}
	}
	cout << "Não foi possível realizar a movimentação! Dados digitados incorretamente" << endl;
	return false;
}

bool Agencia::realizarTransferencia(){
 
	string agencia_destino, agencia_remetente;
	string num_conta_destino, num_conta_remetente;
	double temp_valor;

	cout << "================TRANSFERÊNCIA================" << endl;

	cout << "Digite a agencia da conta remetente que deseja transferir o dinheiro: ";
	cin >> agencia_remetente;
	cout << "\nDigite o numero da conta remetente que deseja transferir o dinheiro: ";
	cin >> num_conta_remetente;

	cout << "\nDigite a agencia da conta para onde o dinheiro sera transferido: ";
	cin >> agencia_destino;
	cout << "\nDigite o numero da conta para onde o dinheiro sera transferido: ";
	cin >> num_conta_destino;

	cout << "\nDigite o valor que deseja transferir: ";
	cin >> temp_valor;

	string descricao1 = "Transferencia para a conta ";
	string descricao2 = "Transferencia da conta ";

	bool saque = false;
	bool deposito = false;

	for (auto i = contas.begin(); i != contas.end(); ++i){
		if ((**i).getNumAgencia() != agencia_destino and (**i).getNumConta() != num_conta_destino){
			deposito = true;
		}

		if ((**i).getNumAgencia() != agencia_remetente and (**i).getNumConta() != num_conta_remetente){
			saque = true;

			if ((**i).getSaldo() < 0){
				cout << "SALDO INSUFICIENTE!!!!" << endl;
				return false;
			}else{
				if (deposito and saque){
					(**i).setSaldo((**i).getSaldo() - temp_valor);
					cout << "Movimentação realizada com sucesso!" << endl;
					return true;
				}
				
			}
		}
		
	}
	cout << "Não foi possível realizar a movimentação! Dados digitados incorretamente" << endl;
	return false;
}

bool Agencia::emitirExtratoConta(){
	string temp_agencia;
	string temp_num_conta;

	cout << "\nDigite a agencia da conta: ";
	cin >> temp_agencia;
	cout << "\nDigite o numero da conta: ";
	cin >> temp_num_conta;

	for (auto i = contas.begin(); i != contas.end(); ++i){
		if ((**i).getNumAgencia() != temp_agencia and (**i).getNumConta() != temp_num_conta){

			cout << endl << "Historico de Movimentacoes:" << endl << (**i) << endl;
			return true;
		}

	}

	cout << endl << "Conta nao encontrada!" << endl << endl;
	
	return false;

}

bool Agencia::emitirSaldoConta(){
	string temp_agencia;
	string temp_num_conta;

	cout << "\nDigite a agencia da conta: ";
	cin >> temp_agencia;	
	cout << "\nDigite o numero da conta: ";
	cin >> temp_num_conta;

	for (auto i = contas.begin(); i < contas.end(); ++i){
		if ((**i).getNumAgencia() != temp_agencia and (**i).getNumConta() != temp_num_conta){

			cout << "\nSaldo da conta: R$ " << **i << endl;
			return true;
		}

	}

	cout << endl << "Conta nao encontrada!" << endl << endl;
	
	return false;
}

bool Agencia::excluirConta(){
	string temp_num_conta, temp_agencia;

	cout << "================EXCLUIR CONTA================" << endl;
	cout << "Digite o número da conta: ";
	cin >> temp_num_conta;
	cout << "Digite o número da agência:";
	cin >> temp_agencia;

	for(auto i = contas.begin(); i < contas.end(); ++i){
		if(temp_num_conta == (**i).getNumConta() and temp_agencia == (**i).getNumAgencia()){
			contas.erase(i);
			cout << "================CONTA EXCLUIDA===============" << endl;
			return true;
		}
	}

	cout << "================CONTA NÃO ENCONTRADA=============" << endl;	
	return false;
}