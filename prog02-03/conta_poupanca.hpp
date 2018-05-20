/**
 * @file conta_poupanca.hpp
 * @brief Arquivo com as definições de uma conta poupança
 */

#ifndef _CONTA_POUPANCA_HPP_
#define _CONTA_POUPANCA_HPP_

#include <string>

#include "conta.hpp"

using std::string;

class ContaPoupanca : public Conta
{
	private:
		/** Armazena a taxa de juros da poupança */
		double juros;

	public:
		/** Construtor sem parametros */
		ContaPoupanca();

		/** Construtor com parametros */
		ContaPoupanca(string, string, double, bool, double);
		
		/** Destrutor padrão */
		~ContaPoupanca();
		
	public:

		// Getters
		double getJuros();

		// Setters
		void setJuros(double);
	private:
		std::ostream& print(std::ostream &o) const;
		std::istream& read(std::istream &i);
};
#endif