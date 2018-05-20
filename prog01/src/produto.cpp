#include <iostream>
#include "produto.h"

/**
 * @file produto.cpp
 * @brief Arquivo com a implementação dos metódos
 */


/** Construtor padrão sem parametros */
Produto::Produto() {}


/** Destrutor padrão */
Produto::~Produto(){}

/**
 * @brief Construtor padrão parametrizado
 *
 * @param  _codigo     Código de barras do produto
 * @param  _descricao  Descrição do produto
 * @param  _preco      Preço do produto
 */
Produto::Produto(std::string _codigo, std::string _descricao, double _preco):
	m_cod_barras(_codigo), m_descricao(_descricao), m_preco(_preco) {}

/**
 * @brief Método que retorna o código de barras
 *
 * @return String com o código de barras
 */
std::string 
Produto::getCodBarras() {
	return m_cod_barras;
}
	
/**
 * @brief      Método que retorna a descrição do produto
 *
 * @return     String com a descrição do produto
 */
std::string 
Produto::getDescricao() {
	return m_descricao;
}

/**
 * @brief      Metódo para retornar o preço
 *
 * @return     Retorna um ponto flutuante que representa o preço
 */
double 
Produto::getPreco() {
	return m_preco;
}
	
/**
 * @brief      Metódo para salvar o valor de um código de barras
 *
 * @param  _codigo  Código de barras
 */
void 
Produto::setCodBarras(std::string _codigo) {
	m_cod_barras = _codigo;
}

/**
 * @brief      Método para salvar a decrição do produto
 *
 * @param  _descricao  Descrição do produto
 */
void 
Produto::setDescricao(std::string _descricao) {
	m_descricao = _descricao;
}

/**
 * @brief      Método para salvar o preço do produto
 *
 * @param  _preco  Preço do produto
 */
void 
Produto::setPreco(double _preco) {
	m_preco = _preco;
}

// Métodos para sobrecarga

/**
 * @brief      Sobrecarga do operador de inserção
 *
 * @param      o Variável do tipo ostream que corresponde ao stream de saída
 * @param      p Variável do tipo Produto que corresponde ao produto que será impresso
 *
 * @return     Stream de saída com os dados do produto formatados
 */
std::ostream& operator<< (std::ostream &o, Produto const &p) {
	/** Resposta no arquivo produto.h */
	return p.print(o);
}

/**
 * @brief      Sobrecarga do operador de soma
 *
 * @param      p Variável do tipo Produto que corresponde ao produto cujo preço será somado
 *
 * @return     Double com o resultado da soma dos preços
 */
double Produto::operator+(Produto const &p) const{
	return (this->m_preco + p.m_preco);
}

/**
 * @brief      Sobrecarga do operador de subtração
 *
 * @param      p Variável do tipo Produto que corresponde ao produto cujo preço será subtraido
 *
 * @return     Double com o resultado da subtração dos preços
 */
double Produto::operator-(Produto const &p) const{
	return (this->m_preco - p.m_preco);
}

/**
 * @brief      Sobrecarga do operador de igualdade
 *
 * @param      p Variável do tipo Produto que corresponde ao produto a ser comparado
 *
 * @return     True se os produtos tiverem o mesmo código de barras
 */
bool Produto::operator==(Produto const &p) const{
	return (this->m_cod_barras == p.m_cod_barras);
}
