#include "conta.hpp"

Conta::Conta() {}

Conta::Conta(int _num_agencia, int _num_conta, int _saldo, int _limite, bool _is_conta_especial){
	num_agencia 		= _num_agencia;
	num_conta 			= _num_conta;
	saldo 				= _saldo;
	limite 				= _limite;
	is_conta_especial 	= _is_conta_especial;

}

Conta::~Conta() {}

int Conta::getNumAgencia(){
	return num_agencia;
}

int Conta::getNumConta(){
	return num_conta;
}

int Conta::getSaldo(){
	return saldo;
}

bool Conta::getIsContaEspecial(){
	return is_conta_especial;
}

void Conta::setNumAgencia(int _num_agencia){
	num_agencia = _num_agencia;
}

void Conta::setNumConta(int _num_conta){
	num_conta = _num_conta;
}

void Conta::setSaldo(int _saldo){
	saldo = _saldo;
}

void Conta::setLimite(int _limite){
	limite = _limite;
}

void Conta::setIsContaEspecial(bool _is_conta_especial){
	is_conta_especial = _is_conta_especial;
}

std::ostream& operator<< (std::ostream &o, Conta &conta){
	string status = conta.getIsContaEspecial()? "Conta Especial": "Conta Normal";

	o << "=====================CONTA===================" << endl;
	o << "Agência: " << conta.getNumAgencia() << endl;
	o << "Número da conta: " << conta.getNumConta() << endl;
	o << "Status da conta: " << status << endl;
	o << "Saldo: R$" << conta.getSaldo() << endl;
	
	return o;
}

std::istream& operator>> (std::istream &i, Conta &conta){
	int temp;
	string status;
	bool temp_b;

	cout << "Digite o número da conta: ";
	i >> temp;
	conta.setNumConta(temp);

	cout << "Digite a agência: ";
	i >> temp;
	conta.setNumAgencia(temp);

	cout << "Digite o status da conta: ";
	i >> status;
	if (status == "Conta Especial"){
		temp_b = true;
	}else{
		temp_b = false;
	}

	conta.setIsContaEspecial(temp_b);

	cout << "Digite o saldo inicial da conta: R$";
	i >> temp;
	conta.setSaldo(temp);
	cout << endl;

	return i;
}