#include "conta.h"

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