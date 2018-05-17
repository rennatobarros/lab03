#ifndef _MOVIMENTACAO_HPP_
#define _MOVIMENTACAO_HPP_

#include <iostream>
#include <string>

using std::string;

class Movimentacao{

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
	void setTipo(string);

	friend std::ostream& operator<< (std::ostream &o, Movimentacao &movimentacao);

private:
	int valor;
	string descricao;
	string tipo;
};
 
#endif
