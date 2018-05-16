#include <iomanip>
#include "roupa.h"

using std::string;
using std::setfill;
using std::setw;

Roupa::Roupa() {}

Roupa::Roupa(string codigo, string descricao, float preco, string _marca, string _sexo, string _tamanho)
{
	m_cod_barras	= codigo;
	m_descricao 	= descricao;
	m_preco 		= preco;
	marca 			= _marca;
	sexo 			= _sexo;
	tamanho 		= _tamanho;
}

Roupa::~Roupa() {}

string Roupa::getMarca(){
	return marca;
}

string Roupa::getSexo(){
	return sexo;
}

string Roupa::getTamanho(){
	return tamanho;
}

void Roupa::setMarca(string _marca){
	marca = _marca;
}

void Roupa::setSexo(string _sexo){
	sexo = _sexo;
}

void Roupa::setTamanho(string _tamanho){
	tamanho = _tamanho;
}

std::ostream& Roupa::print(std::ostream &o) const {
	o << setfill (' ') << setw (10) << m_cod_barras << " | " 
			<< setfill ('.') << setw (20) << m_descricao << " | " 
			<< setfill (' ') << setw (5) << m_preco << " | "
			<< setfill (' ') << setw (10) << marca << " | " << setfill (' ') << setw (3) << sexo << " | " << setfill (' ') << setw (3) 
			<< tamanho;
	return o;
}
