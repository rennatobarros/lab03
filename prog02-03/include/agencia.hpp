/**
 * @file agencia.hpp
 * @brief Arquivo com as definições de uma agencia bancaria
 */

#ifndef _AGENCIA_HPP_
#define _AGENCIA_HPP_

#include <iostream>
#include <memory>
#include <iterator>
#include <vector>
#include <string>

#include "conta.hpp"
#include "movimentacao.hpp"
#include "conta_corrente.hpp"
#include "conta_poupanca.hpp"

using std::vector;

using namespace std;

class Agencia
{
private:
	/** Vetor com ponteiros inteligentes do tipo Conta  */
	std::vector<std::shared_ptr<Conta>> contas;

public:
	/** Contrutor padrão */
	Agencia();
	
	/** Destrutor padrão */
	~Agencia();

public:
	bool criarConta();

	bool realizarDeposito();

	bool realizarSaque();

	bool realizarTransferencia();

	bool emitirExtratoConta();

	bool emitirSaldoConta();

	bool excluirConta();
	
};


#endif