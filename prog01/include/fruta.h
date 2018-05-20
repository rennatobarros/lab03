#ifndef _FRUTA_H_
#define _FRUTA_H_

#include "produto.h"

/**
 * @file fruta.h
 * @brief Classe que representa algum objeto do tipo Fruta que herda de Produto.
 */
class Fruta : public Produto
{
public:
	/** Construtores e destrutor da classe */
	Fruta();
	Fruta(std::string _codigo, std::string _descricao, double _preco, 
			std::string _data, short _validade);
	~Fruta();
private:
	/** Armazena a data do lote da fruta */
	std::string m_data_lote;

	/** Armazena a data de validade da fruta */
	short m_validade;
public:
	// Getters
	std::string getDataLote();
	short getValidade();
	// Setters
	void setDataLote(std::string _data);
	void setValidade(short _validade);
private:
	std::ostream& print(std::ostream &o) const;
};

#endif