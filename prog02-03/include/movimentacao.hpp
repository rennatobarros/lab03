/**
 * @file movimentacao.hpp
 * @brief Arquivo com as definições da movimentação de uma conta
 */

#ifndef _MOVIMENTACAO_HPP_
#define _MOVIMENTACAO_HPP_

#include <iostream>
#include <string>

using std::string;

class Movimentacao{

public:
	/** Contrutor padrão sem parametros */
	Movimentacao();

	/**
	 * @brief      Construtor padrão com parametros
	 *
	 * @param  <unnamed>  Double com o valor da movimentação
	 * @param  <unnamed>  String com a descricao da movimentação
	 * @param  <unnamed>  String com a descrição da movimentação
	 */
	Movimentacao(double, string, string);
	
	/** Destrutor padrão */
	~Movimentacao();
public:
	// Getters
	double getValor();
	string getDescricao();
	string getTipo();
	// Setters
	void setValor(double);
	void setDescricao(string);
	void setTipo(string);

	friend std::ostream& operator<< (std::ostream &o, Movimentacao &m);

private:
	/** Armazena o valor da movimentação */
	double valor;

	/** Armazena a descrição da movimentação */
	string descricao;

	/** Armazena o tipo da movimentação */
	string tipo;
};
 
#endif
