/**
 * @file fruta.cpp
 * @brief Arquivo com a implementação dos métodos para fruta
 */

#include <iomanip>
#include "fruta.h"

/** Construtor sem parametros */
Fruta::Fruta() {}

/**
 * @brief      Construtor com parametros
 *
 * @param  _codigo     Código de barras
 * @param  _descricao  Descrição da fruta
 * @param  _preco      Preço da fruta
 * @param  _data       Data do lote da fruta
 * @param  _validade   Data de validade da fruta
 */
Fruta::Fruta(std::string _codigo, std::string _descricao, double _preco, 
	std::string _data, short _validade):
	Produto(_codigo, _descricao, _preco), m_data_lote(_data), m_validade(_validade) {}

/** Destrutor padrão */
Fruta::~Fruta() {}

/**
 * @brief      Método que retorna a data do lote
 *
 * @return     String com a data do lote
 */
std::string 
Fruta::getDataLote() {
	return m_data_lote;
}

/**
 * @brief      Método que retorna a data de validade
 *
 * @return     Prazo de validade da fruta, em dias
 */
short 
Fruta::getValidade() {
	return m_validade;
}

/**
 * @brief      Salva a data do lote
 *
 * @param  _data String que corresponde a uma nova data
 */
void 
Fruta::setDataLote(std::string _data) {
	m_data_lote = _data;
}

/**
 * @brief      Salva a data de validade
 *
 * @param  _validade Inteiro que corresponde a uma nova data
 */
void 
Fruta::setValidade(short _validade) {
	m_validade = _validade;
}
 
/**
 * @brief      Método para imprimir os dados da fruta
 *
 * @param      o Variável do tipo ostream, que corresponde ao stream de saída
 *
 * @return     Stream de saída com os dados da Fruta formatados
 */
std::ostream& 
Fruta::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5) << m_preco << " | "
		<< std::setfill (' ') << std::setw (10) << m_data_lote << " | " 
		<< std::setfill (' ') << std::setw (3) << m_validade;
	return o;
}
