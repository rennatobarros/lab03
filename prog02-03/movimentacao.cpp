#include <iostream>
#include "movimentacao.hpp"

Movimentacao::Movimentacao(){}

Movimentacao::Movimentacao(string _descricao, string _tipo, int _valor){
	descricao 	= _descricao;
	tipo 		= _tipo;
	valor 		= _valor;
}

Movimentacao::~Movimentacao(){}

int Movimentacao::getValor(){
	return valor;
}

string Movimentacao::getDescricao(){
	return descricao;
}

string Movimentacao::getTipo(){
	return tipo;
}

void Movimentacao::setValor(int v){
	valor = v;
}

void Movimentacao::setDescricao(string d){
	descricao = d;
}

void Movimentacao::setTipo(string t){
	tipo = t;
}