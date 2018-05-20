/**
 * @file roupa.cpp
 * @brief Arquivo com a implementação dos métodos para roupa
 */

#include <iomanip>
#include "roupa.h"

using std::string;
using std::setfill;
using std::setw;

/** Construtor padrão sem parametros */
Roupa::Roupa() {}

/**
 * @brief      Construtor padrão com parametros
 *
 * @param  codigo        Código de barras
 * @param  descricao     Descrição da roupa
 * @param  preco         Preço da roupa
 * @param  marca  		 Marca da roupa
 * @param  sexo 		 Gênero ao qual a roupa se destina
 * @param  tamanho    	 Tamanho da roupa
 */
Roupa::Roupa(string codigo, string descricao, float preco, string _marca, string _sexo, string _tamanho): 
	Produto(codigo, descricao, preco), marca(_marca), sexo(_sexo), tamanho(_tamanho){}

/** Destrutor padrão */
Roupa::~Roupa() {}

/**
*	@brief Método que retorna a marca da Roupa.
*	@return String que contém a marca da Roupa.
*/
string Roupa::getMarca(){
	return marca;
}

/**
*	@brief Método que retorna a qual gênero a roupa se destina.
*	@return String que contém o gênero da roupa.
*/
string Roupa::getSexo(){
	return sexo;
}

/**
*	@brief Método que retorna qual tamanho da roupa
*	@return String que contém o tamanho da roupa.
*/
string Roupa::getTamanho(){
	return tamanho;
}

/**
*	@brief Método para alterar a marca da roupa.
*	@param _marca Variável do tipo string, que contém a nova marca.
*/
void Roupa::setMarca(string _marca){
	marca = _marca;
}

/**
*	@brief Método para alterar o gênero da roupa.
*	@param _sexo Variável do tipo string, que contém o novo gênero da roupa.
*/
void Roupa::setSexo(string _sexo){
	sexo = _sexo;
}

/**
*	@brief Método para alterar o tamanho da roupa.
*	@param _tamanho Variável do tipo string, que contém o novo tamanho.
*/
void Roupa::setTamanho(string _tamanho){
	tamanho = _tamanho;
}

/**
*	@brief Método para imprimir os dados da Roupa.
*	@param o Variável do tipo ostream, que corresponde ao stream de saída.
*	@return Stream de saída com os dados da Roupa formatados.
*/
std::ostream& Roupa::print(std::ostream &o) const {
	o << setfill (' ') << setw (10) << m_cod_barras << " | " 
			<< setfill ('.') << setw (20) << m_descricao << " | " 
			<< setfill (' ') << setw (5) << m_preco << " | "
			<< setfill (' ') << setw (10) << marca << " | " << setfill (' ') << setw (3) << sexo << " | " << setfill (' ') << setw (3) 
			<< tamanho;
	return o;
}
