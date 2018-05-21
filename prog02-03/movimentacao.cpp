/**
 * @file movimentacao.cpp
 * @brief Arquivo com a implementaçãa da classe
 */

#include "movimentacao.hpp"

using std::string;
using namespace std;

/** Construtor sem parametros */
Movimentacao::Movimentacao(){}


/**
 * @brief      Construtor com parametros
 *
 * @param  _valor      Valor da movimentação
 * @param  _descricao  Descrição da movimentação
 * @param  _tipo       Tipo da movimentação
 */
Movimentacao::Movimentacao(double _valor, string _descricao, string _tipo):
	valor(_valor), descricao(_descricao), tipo(_tipo){}

/** Destrutor padrão */
Movimentacao::~Movimentacao(){}

/**
 * @brief      Retorna o valor da movimentação
 *
 * @return     double contendo o valor
 */
double Movimentacao::getValor(){
	return valor;
}

/**
 * @brief      Retorna a descrição da movimentação
 *
 * @return     String com a descrição
 */
string Movimentacao::getDescricao(){
	return descricao;
}

/**
 * @brief      Retorna o tipo da descrição
 *
 * @return     String com o tipo da movimentação
 */
string Movimentacao::getTipo(){
	return tipo;
}

/**
 * @brief      Salva o valor da movimentação
 *
 * @param  v     Novo valor da movimentação
 */
void Movimentacao::setValor(double v){
	valor = v;
}

/**
 * @brief      Salva o valor da descrição
 *
 * @param  d     String com o novo valor da descrição
 */
void Movimentacao::setDescricao(string d){
	descricao = d;
}

/**
 * @brief      Armazena o tipo da movimentação
 *
 * @param  t     String com o novo tipo da movimentação
 */
void Movimentacao::setTipo(string t){
	tipo = t;
}

/**
 * @brief      Sobrecarga do operador de inserção
 *
 * @param      o     Objeto do tipo ostream
 * @param      m     Objeto do tipo movimentação
 *
 * @return     Retorna o objeto formatado para impressão
 */
std::ostream& operator<< (std::ostream &o, Movimentacao &m){
	o << "Descrição: " << m.getDescricao() << endl;
	o << "Tipo: " << m.getTipo() << endl;
	o << "Valor: R$" << m.getValor() << endl;

	return o;
}