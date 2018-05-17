#ifndef _CONTA_HPP_
#define _CONTA_HPP_

#include <vector>
#include <memory>

#include "movimentacoes.hpp"

using std::vector;
using std::shared_ptr;

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
	bool getContaEspecial();
	// setters
	void setNumAgencia(int);
	void setNumConta(int);
	void setSaldo(int);
	void setLimite(int);
	void setContaEspecial(bool);

private:
	int num_agencia;
	int num_conta;
	int saldo;
	vector<shared_ptr<Movimentacoes>> movimentacoes;
	int limite;
	bool is_conta_especial;
};
 
#endif
