#include <iostream>
#include <vector>
#include <memory>
#include "produto.h"
#include "fruta.h"
#include "roupa.h"
#include "bebida.h"

using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<shared_ptr<Produto>> lista;
	
	lista.push_back(make_shared<Fruta>("001002003-45","Maca verde",8.70,"01/10/2017",18));
	lista.push_back(make_shared<Fruta>("001002004-44","Laranja",4.75,"23/09/2017",15));
	lista.push_back(make_shared<Fruta>("001002005-11","Limao verde",2.30,"01/10/2017",25));

	lista.push_back(make_shared<Roupa>("001002006-01", "Camiseta", 2.74, "Pool", "M", "GG"));
	lista.push_back(make_shared<Roupa>("001002006-02", "Camiseta", 2.74, "Pool", "M", "G"));
	lista.push_back(make_shared<Roupa>("001002006-03", "Camiseta", 2.74, "Pool", "M", "M"));
	
	lista.push_back(make_shared<Bebida>("002002007-01", "Cerveja", 1.20, 10.00));
	lista.push_back(make_shared<Bebida>("002002007-02", "Vodka", 7.20, 32.55));
	lista.push_back(make_shared<Bebida>("002002007-03", "Cachaça", 10.20, 40.35));

	for (auto i = lista.begin(); i != lista.end(); ++i)
	{
		std::cout << (**i) << std::endl;	
	}

	return 0;
}