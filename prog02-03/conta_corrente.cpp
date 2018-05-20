/**
 * @file conta_corrente.cpp
 * @brief Arquivo com a implementaçãa da classe conta corrente
 */

#include <string>
#include <iostream>

#include "conta_corrente.hpp"

/** Construtor padrão sem parametros */
ContaCorrente::ContaCorrente(){}

/**
 * @brief      Construtor padrão com parametros
 *
 * @param  agencia  Numero da Agencia da conta
 * @param  conta    Numero da conta
 * @param  saldo    Saldo da conta
 * @param  status   Se é conta especial ou não
 * @param  _limite  Limite da conta
 */
ContaCorrente::ContaCorrente(string agencia, string conta, double saldo, bool status, double _limite):
	Conta(agencia, conta, saldo, status), limite(_limite){}

/** Destrutor padrão */
ContaCorrente::~ContaCorrente(){}

/**
 * @brief      Retorna o limite da conta
 *
 * @return     double com o limite da conta
 */
double ContaCorrente::getLimite(){
	return limite;
}

/**
 * @brief      Retorna o limite disponivel
 *
 * @return     double com o limite disponivel
 */
double ContaCorrente::getLimiteDisp(){
	return limite_disponivel;
}

/**
 * @brief      Salva o limite da conta
 *
 * @param  _limite  double com o novo limite da conta
 */
void ContaCorrente::setLimite(double _limite){
	limite = _limite;
}

/**
 * @brief      Salva o limite 
 *
 * @param  _limite_disponivel  Armazena o novo limite disponivel
 */
void ContaCorrente::setLimiteDisp(double _limite_disponivel){
	limite_disponivel = _limite_disponivel;
}

/**
 * @brief      Sobrecarrega o operador de inserção
 *
 * @param      o     Objeto do tipo ostream que corresponde ao stream de saída
 *
 * @return     Retorna as informações da conta corrente formatados
 */
std::ostream& print (std::ostream &o){
	o << "Limite: R$" << limite << endl;
	o << "Limite Disponível: R$" << limite_disponivel << endl;
	o << "============================================" << endl;
	return o;
}

/**
 * @brief      Sobrecarrega o operador de extração
 *
 * @param      i     Objeto do tipo istream que corresponde ao stream de entrada
 *
 * @return     Retorna os valores que serão recebidos com formatação
 */
std::istream& print (std::istream &i){
	cout << "Digite o limite da conta: R$";
	i >> limite;
	limite_disponivel = limite;
	cout << endl;

	return i;
}