/**
 * @file conta.cpp
 * @brief Arquivo com a implementação dos metódos
 */

#include <iostream>
#include "conta.hpp"

using std::string;

/** Connstruto padrão sem parametros */
Conta::Conta() {}


/**
 * @brief      Construtor padrão com parametros
 *
 * @param  _num_agencia        String com o numero da agencia
 * @param  _num_conta          String com o numero da conta
 * @param  _saldo              Double que armazena o saldo da conta
 * @param  _is_conta_especial  Booleano que indica se é conta especial
 */
Conta::Conta(string _num_agencia, string _num_conta, double _saldo, bool _is_conta_especial):
	num_agencia(_num_agencia), num_conta(_num_conta), saldo(_saldo), is_conta_especial(_is_conta_especial){}

/** Destrutor padrão */
Conta::~Conta() {}

/**
 * @brief      Retorna o numero da agencia
 *
 * @return     String com o numero da agencia
 */
string Conta::getNumAgencia(){
	return num_agencia;
}

/**
 * @brief      Retorna o numero da conta
 *
 * @return     String com o numero da conta
 */
string Conta::getNumConta(){
	return num_conta;
}

/**
 * @brief      Retorna o saldo da conta
 *
 * @return     Double com o saldo da conta
 */
double Conta::getSaldo(){
	return saldo;
}

/**
 * @brief      Retorna se é conta especial ou nãp
 *
 * @return     True ou False
 */
bool Conta::getIsContaEspecial(){
	return is_conta_especial;
}

/**
 * @brief      Retorna as movimentações feitas na conta
 *
 * @return     Objeto do tipo movimentação
 */
vector<Movimentacao> *Conta::getMovimentacao(){
 	return &movimentacao; 
}

/**
 * @brief      Adciona uma movimentação na conta
 *
 * @param  valor      O valor da movimentação
 * @param  descricao  A descrição da movimentação
 * @param  tipo       String com o tipo da movimentação
 */
void Conta::adicionaMovimentacao(double valor, string descricao, string tipo){	
	/** Cria um objeto do tipo movimentação e a adiciona */
	Movimentacao m(valor, descricao, tipo);
	movimentacao.push_back(mov);
}


/**
 * @brief      Salva o número da agência
 *
 * @param  _num_agencia  String com o novo numero da agencia
 */
void Conta::setNumAgencia(string _num_agencia){
	num_agencia = _num_agencia;
}

/**
 * @brief      Salva o numero da conta
 *
 * @param  _num_conta  String que contem o novo numero da conta
 */
void Conta::setNumConta(string _num_conta){
	num_conta = _num_conta;
}

/**
 * @brief      Salva o saldo da conta
 *
 * @param  _saldo  Double com o novo saldo da conta
 */
void Conta::setSaldo(double _saldo){
	saldo = _saldo;
}

/**
 * @brief      Salva o se é conta especial ou não
 *
 * @param  _is_conta_especial  True ou False
 */
void Conta::setIsContaEspecial(bool _is_conta_especial){
	is_conta_especial = _is_conta_especial;
}

/**
 * @brief      Sobrecarga do operador de igualdade
 *
 * @param      c     Objeto do tipo conta a ser comparado
 *
 * @return     True caso sejam iguais. False caso contrário
 */
bool Conta::operator== (Conta &c){
	if (num_agencia == c.agencia and num_conta == c.num_conta){
		return true;
	}
			
	return false;
}	

/**
 * @brief      Sobrecarga do operador de inserção
 *
 * @param      o      Objeto do tipo ostream que corresponde a saída padrão
 * @param      conta  Conta a ser impressa
 *
 * @return     Objeto ostream a ser impresso na tela
 */
std::ostream& operator<< (std::ostream &o, Conta &c){
	/**  Operador ternário para salvar se é conta especial.*/
	string status = c.getIsContaEspecial()? "Conta Especial": "Conta Normal";

	o << "=====================CONTA===================" << endl;
	o << "Agência: " << c.getNumAgencia() << endl;
	o << "Número da conta: " << c.getNumConta() << endl;
	o << "Status da conta: " << status << endl;
	o << "Saldo: R$" << c.getSaldo() << endl;
	
	return c.print(o);
}

/**
 * @brief      Sobrecarga do operador de extraçao
 *
 * @param      i      Objeto do tipo istream, que corresponde a entrada padrão
 * @param      conta  Conta que será impressa
 *
 * @return     Objeto istream a ser lido
 */
std::istream& operator>> (std::istream &i, Conta &c){
	string temp;

	cout << "Digite o número da conta: ";
	i >> temp;
	c.setNumConta(temp);

	cout << "Digite a agência: ";
	i >> temp;
	c.setNumAgencia(temp);

	cout << "Digite o status ('Conta Especial' ou 'Conta Normal') da conta: ";
	i >> temp;
	/** Operador ternário para salvar se é conta especial */
	c.setIsContaEspecial(temp == "Conta Especial"? true : false);

	cout << "Digite o saldo inicial da conta: R$";
	i >> temp;
	c.setSaldo(stod(temp));
	cout << endl;

	return c.read(i);
}