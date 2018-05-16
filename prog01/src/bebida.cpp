#include <iomanip>
#include "bebida.h"

using std::string;
using std::setfill;
using std::setw;

Bebida::Bebida() {}

Bebida::Bebida(string codigo, string descricao, float preco, float _teor_alcool)
{
	m_cod_barras	= codigo;
	m_descricao 	= descricao;
	m_preco 		= preco;
	teor_alcool 	= _teor_alcool;
}

Bebida::~Bebida() {}

float Bebida::getTeorAlcool(){
	return teor_alcool;
}

void Bebida::setTeorAlcool(float _teor_alcool){
	teor_alcool = _teor_alcool;
}
 
std::ostream& Bebida::print(std::ostream &o) const {
	o << setfill (' ') << setw (10) << m_cod_barras << " | " 
		<< setfill ('.') << setw (20) << m_descricao << " | " 
		<< setfill (' ') << setw (5) << m_preco << " | "
		<< setfill (' ') << setw (10) << teor_alcool << "%";
	return o;
}
