/**
 * @file bebida.cpp
 * @brief Arquivo com a implementação dos métodos para fruta
 */

#include <iomanip>
#include "bebida.h"

using std::string;
using std::setfill;
using std::setw;

/** Construtor padrão sem parametros */
Bebida::Bebida() {}

/**
 * @brief      Construtor padrão com parametros
 *
 * @param  codigo        Código de barras
 * @param  descricao     Descrição da bebida
 * @param  preco         Preço da bebida
 * @param  _teor_alcool  Teor alcolico da bebida
 */
Bebida::Bebida(string codigo, string descricao, float preco, float _teor_alcool): 
	Produto(codigo, descricao, preco), teor_alcool(_teor_alcool) {}

/** Destrutor padrão */
Bebida::~Bebida() {}

/**
 * @brief      Metódo que retorna o teor alcolico
 *
 * @return     O teor alcólico da bebida
 */
float Bebida::getTeorAlcool(){
	return teor_alcool;
}

/**
 * @brief      Salva o teor alcolico
 *
 * @param  _teor_alcool Variável do tipo float que salva o novo teor alcólico
 */
void Bebida::setTeorAlcool(float _teor_alcool){
	teor_alcool = _teor_alcool;
}
 
/**
*	@brief Método para imprimir os dados da bebida.
*	@param o Variável do tipo ostream, que corresponde ao stream de saída.
*	@return Stream de saída com os dados da bebida formatados.
*/
std::ostream& Bebida::print(std::ostream &o) const {
	o << setfill (' ') << setw (10) << m_cod_barras << " | " 
		<< setfill ('.') << setw (20) << m_descricao << " | " 
		<< setfill (' ') << setw (5) << m_preco << " | "
		<< setfill (' ') << setw (10) << teor_alcool << "%";
	return o;
}
