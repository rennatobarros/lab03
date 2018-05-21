/**
 * @file produto.h
 * @brief Arquivo .h com as definições da Classe produto
 */

#ifndef _PRODUTO_H_
#define _PRODUTO_H_

#include <iostream>


class Produto
{
public:
	/** Construtor padrão sem paramêtros */
	Produto();

	/** Construtor padrão parametrisado	 */
	Produto(std::string _codigo, std::string _descricao, double _preco);

	/**
	 * @brief A palavra reservada 'virtual' é utilizada para permitir que, quando um objeto derivado da classe produto seja destruido, primeiro será chamado o destrutor da classe derivada para depois ser chamado o destrutor da classe base. 
	 */
	virtual ~Produto();
protected:
	/** Armazena o código de barras do produto */
	std::string m_cod_barras;

	/** Armazena a descrição do produto */
	std::string m_descricao;

	/** Armazena o preço do produto */
	double m_preco;		
public:
	// Getters
	std::string getCodBarras();
	std::string getDescricao();
	double getPreco();
	// Setters
	void setCodBarras(std::string _codigo);
	void setDescricao(std::string _descricao);
	void setPreco(double _preco);
	
	// Sobrecarga de operadores
	friend std::ostream& operator<< (std::ostream &o, Produto const &t);
	double operator+(Produto const &p) const;
	double operator-(Produto const &p) const;
	bool operator==(Produto const &p) const;

private:
	/** Esse método permite que objetos derivados da classe Produto consigam enxergar a sobrecarga do operador de inserção e também sobrecarregá-las para a utilização com suas variáveis próprias. */
	virtual std::ostream& print(std::ostream&) const = 0;
};
 
#endif
