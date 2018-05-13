#ifndef _ROUPA_H_
#define _ROUPA_H_

#include "produto.h"

using std::string;

class Roupa : public Produto{

public:
	Roupa();
	Roupa(string _codigo, string _descricao, float _preco, string _marca, string _sexo, string _tamanho);
	~Roupa();
private:
	string marca;
	string sexo;
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