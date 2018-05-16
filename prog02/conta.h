#ifndef _CONTA_H_
#define _CONTA_H_

#include <vector>
#include <memory>

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
	vector<shared_ptr<Conta>> movimentacoes;
	int limite;
	bool is_conta_especial;
};
 
#endif
