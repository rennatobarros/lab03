#ifndef _CONTA_HPP_
#define _CONTA_HPP_

#include <iostream>
#include <vector>
#include <memory>

using std::vector;
using std::shared_ptr;

using namespace std;

#include "movimentacao.hpp"


class Conta{

public:
	Conta();
	Conta(int, int, int, int, bool);
	~Conta();
public:
	// getters
	int getNumAgencia();
	int getNumConta();
	int getSaldo();
	int getLimite();
	bool getIsContaEspecial();
	vector<Movimentacao> *getMovimentacao();
	// setters
	void setNumAgencia(int);
	void setNumConta(int);
	void setSaldo(int);
	void setLimite(int);
	void setIsContaEspecial(bool);
	void adicionaMovimentacao(int, string, string);

	friend std::ostream& operator<< (std::ostream &o, Conta &conta);
	friend std::istream& operator>> (std::istream &i, Conta &conta);

private:
	int num_agencia;
	int num_conta;
	int saldo;
	vector<Movimentacao> movimentacao;
	int limite;
	bool is_conta_especial;
};
 
#endif
