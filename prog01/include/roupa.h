#ifndef _ROUPA_H_
#define _ROUPA_H_

#include "produto.h"

using std::string;

/**
 * @file roupa.h
 * @brief Classe que representa algum objeto do tipo Roupa que herda de Produto
 */
class Roupa : public Produto{

public:
	/** Construtores e destrutor da classe */
	Roupa();
	Roupa(string codigo, string descricao, float preco, string _marca, string _sexo, string _tamanho);
	~Roupa();
private:
	/** Armazena a marca da roupa */
	string marca;

	/** Armazena o sexo que aquela roupa é destinado */
	string sexo;

	/** Armazena o tamanho da roupa */
	string tamanho;
public:
	// getters
	string getMarca();
	string getSexo();
	string getTamanho();
	// setters
	void setMarca(string);
	void setSexo(string);
	void setTamanho(string);
private:
	std::ostream& print(std::ostream &o) const;
};

#endif