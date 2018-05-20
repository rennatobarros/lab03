/**
 * @file conta_poupanca.cpp
 * @brief Arquivo com a implementaçãa da classe
 */

#include <string>
#include <iostream>

#include "conta_poupanca.hpp"

using std::string;

using namespace std;

/** Construtor sem parametros */
ContaPoupanca::ContaPoupanca(){}

/**
 * @brief      Construtor com parametros
 *
 * @param  agencia  A agencia referente a conta
 * @param  conta    O número da conta
 * @param  saldo    O saldo da conta
 * @param  status   Se é conta especial ou não
 * @param  _juros   A taxa de juros da conta
 */
ContaPoupanca::ContaPoupanca(string agencia, string conta, double saldo, bool status, double _juros):
	Conta(agencia, conta, saldo, status), juros(_juros){}

/** Destrutor padrão */
ContaPoupanca::~ContaPoupanca(){}

/**
 * @brief      Retorna a taxa de juros
 *
 * @return     Double que armazena a taxa de juros
 */
double ContaPoupanca::getJuros(){
	return juros; 
}

/**
 * @brief      Salva o valor da taxa de juros
 *
 * @param  _juros  Double que armazena a nova taxa de juros
 */
void ContaPoupanca::setJuros(double _juros){ 
	juros = _juros; 
}

/**
 * @brief      Sobrecarga do operador de inserção
 *
 * @param      o     Objeto do tipo ostream que corresponde ao stream de saida
 *
 * @return     Saída formatada para a conta poupança
 */
std::ostream& ContaPoupanca::print(std::ostream &o){
	o << "Taxa de juros: " << juros << "%" << endl;
	o << "============================================" << endl;
	return o;
}

/**
 * @brief      Sobrecarga do operador de extração
 *
 * @param      i     Objeto do tipo istream que corresponde ao steam de entrada
 *
 * @return     Entrada formatada para receber os valores da conta poupança
 */
std::istream& ContaPoupanca::read(std::istream &i){
	cout << "Digite a taxa de juros (%): ";
	i >> juros;
	
	cout << endl;
	return i;
}