#include <iostream>
#include <vector>
#include <memory>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>

#include "produto.h"
#include "fruta.h"
#include "roupa.h"
#include "bebida.h"

using namespace std;

vector<shared_ptr<Produto>> lista;

ifstream frutas;
ifstream bebidas;
ifstream roupas;

int adicionaProduto(shared_ptr<Produto> p){
	for (auto it = lista.begin(); it != lista.end(); ++it){
		if ((*p).getCodBarras() == (*it)->getCodBarras()){
			cout << "Esse código de barras "<< (*p).getCodBarras() << " já existe na lista!" << endl;
			return -1;
		}
	}
	lista.push_back(p);
	return 1;
}

void lerProdutos(){
	frutas.open("Produtos/Frutas.dat");

	if (frutas.bad()){
		cout << "Erro!";
	}

	bebidas.open("Produtos/Bebidas.dat");

	if (bebidas.bad()){
		cout << "Erro!";
	}

	roupas.open("Produtos/Bebidas.dat");

	if (roupas.bad()){
		cout << "Erro!";
	}

	// String para armazenar cada linha do arquivo
	string ler_linha;

	while(getline(frutas, ler_linha)){
		Fruta fruta;

		string codigo;
		string descricao;
		string preco;
		string data_lote;
		string data_validade;

		stringstream ss(ler_linha);

		getline(ss, codigo, ' ');
		getline(ss, descricao, ' ');
		getline(ss, preco, ' ');
		getline(ss, data_lote, ' ');
		getline(ss, data_validade, ' ');

		fruta.setCodBarras(codigo);
		fruta.setDescricao(descricao);
		fruta.setPreco(stod(preco));
		fruta.setDataLote(data_lote);
		fruta.setValidade(stoi(data_validade));

		adicionaProduto(make_shared<Fruta>(fruta));
	}

	while(getline(bebidas, ler_linha)){
		Bebida bebida;

		string codigo;
		string descricao;
		string preco;
		string teor_alcool;

		stringstream ss(ler_linha);

		getline(ss, codigo, ' ');
		getline(ss, descricao, ' ');
		getline(ss, preco, ' ');
		getline(ss, teor_alcool, ' ');

		bebida.setCodBarras(codigo);
		bebida.setDescricao(descricao);
		bebida.setPreco(stod(preco));
		bebida.setTeorAlcool(stod(teor_alcool));

		adicionaProduto(make_shared<Bebida>(bebida));
	}

	while(getline(frutas, ler_linha)){
		Roupa roupa;

		string codigo;
		string descricao;
		string preco;
		string marca;
		string sexo;
		string tamanho;

		stringstream ss(ler_linha);

		getline(ss, codigo, ' ');
		getline(ss, descricao, ' ');
		getline(ss, preco, ' ');
		getline(ss, marca, ' ');
		getline(ss, sexo, ' ');
		getline(ss, tamanho, ' ');

		roupa.setCodBarras(codigo);
		roupa.setDescricao(descricao);
		roupa.setPreco(stod(preco));
		roupa.setMarca(marca);
		roupa.setSexo(sexo);
		roupa.setTamanho(tamanho);

		adicionaProduto(make_shared<Roupa>(roupa));
	}
}

int main(int argc, char const *argv[])
{

	adicionaProduto(make_shared<Fruta>("001002651-45","Maca verde",8.70,"01/10/2017",18));
	adicionaProduto(make_shared<Bebida>("001002006-66", "Cerveja", 5.12, 12.6));

	lerProdutos();


	for (auto i = lista.begin(); i != lista.end(); ++i){
		std::cout << (**i) << std::endl;	
	}

	return 0;
}