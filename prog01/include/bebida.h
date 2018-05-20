#ifndef _BEBIDA_H_
#define _BEBIDA_H_

#include "produto.h"

using std::string;

/**
 * @file bebida.h
 * @brief Classe que representa algum objeto do tipo Bebida que herda de Produto
 */
class Bebida : public Produto
{
public:
	/** Construtores e destrutor padrão */
	Bebida();
	Bebida(string codigo, string descricao, float preco, float _teor_alcool);
	~Bebida();
private:
	/** Armazena o teor alcólico da bebida */
	float teor_alcool;
public:
	// Getters
	float getTeorAlcool();
	// Setters
	void setTeorAlcool(float);
private:
	std::ostream& print(std::ostream &o) const;
};

#endif