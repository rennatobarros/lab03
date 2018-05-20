/**
 * @file conta_corrente.hpp
 * @brief Arquivo com a definição da classe conta corrente
 */

#ifndef _CONTA_CORRENTE_HPP_
#define _CONTA_CORRENTE_HPP_

#include <string>

#include "conta.hpp"


class ContaCorrente : public Conta
{
	private:
		/** Variável que armazena o limite da conta */
		double limite;
		/** Variável que armazena o limite disponível na conta */
		double limite_disponivel;

	public:
		
		/** Construtor sem parametros */
		ContaCorrente();

		/** Construtor com parametros */
		ContaCorrente(string, string, double, bool, double);

		/** Destrutor padrão */
		~ContaCorrente();

	public:
		// Getters
		double getLimite();
		double getLimiteDisp();

		// Setters
		void setLimite(double);
		void setLimiteDisp(double);
	
	private:
		std::ostream& print(std::ostream &o) const;

		std::istream& read(std::istream &i);
 };
 #endif