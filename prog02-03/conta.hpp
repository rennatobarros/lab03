/**
 * @file conta.hpp
 * @brief Classe base da Conta
 */

#ifndef _CONTA_HPP_
#define _CONTA_HPP_

#include <iostream>
#include <vector>
#include <memory>

using std::vector;
using std::shared_ptr;
using std::string;

using namespace std;

#include "movimentacao.hpp"

class Conta{

public:
	/** Construtor padrão sem parametros */
	Conta();

	/** Construtor padrão parametrizado */
	Conta(int, int, int, bool);
	
	/** Destrutor padrão */
	virtual ~Conta();

protected:
	/** Armezena o número da Agencia */
	string num_agencia;

	/** Armazena o numero da conta */
	string num_conta;

	/** Armazena o saldo da conta */
	double saldo;

	/** Armazena um vetor para armazenar as movimentações da conta */
	vector<Movimentacao> movimentacao;
	
	/** True se a conta for especial. False caso contrário */
	bool is_conta_especial;

public:
	// Getters
	string getNumAgencia();
	string getNumConta();
	double getSaldo();
	bool getIsContaEspecial();
	vector<Movimentacao> *getMovimentacao();

	// Setters
	void setNumAgencia(string);
	void setNumConta(string);
	void setSaldo(string);
	void setIsContaEspecial(bool);
	void adicionaMovimentacao(double, string, string);

	// Sobrecarga de Operadores
	bool operator== (Conta const &c) const;
	friend std::ostream& operator<< (std::ostream &o, Conta &c);
	friend std::istream& operator>> (std::istream &i, Conta &c);

private: 
	// Métodos de inserção e extração para os filhos dessa classe poderem enxergar 
	virtual std::istream& read(std::istream&)=0;
	virtual std::ostream& print(std::ostream&) const = 0 ;
};
 
#endif
