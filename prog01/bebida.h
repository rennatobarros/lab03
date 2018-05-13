#ifndef _BEBIDA_H_
#define _BEBIDA_H_

#include "produto.h"

using std::string;

class Bebida : public Produto
{
public:
	Bebida();
	Fruta(string _codigo, string _descricao, float _preco, float _teor_alcool);
	~Bebida();
private:
	float teor_alcool;
public:
	// getters
	float getTeorAlcool();
	// setters
	void setTeorAlcool();
private:
	std::ostream& print(std::ostream &o) const;
};

#endif