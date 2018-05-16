#ifndef _MOVIMENTACAO_H_
#define _MOVIMENTACAO_H_

#include "conta.h"

using std::string;

class Movimentacao : public Conta{

public:
	Movimentacao();
	Movimentacao(int, string, string);
	~Movimentacao();
public:
	// getters
	int getValor();
	string getDescricao();
	string getTipo();
	// setters
	void setValor(int);
	void setDescricao(string);
	void setTipo(int);

private:
	int valor;
	string descricao;
	string tipo;
};
 
#endif
