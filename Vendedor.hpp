#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

	public:

	Vendedor(double _salarioHora, std::string _nome, int _quotaMensalVenda) : Empregado(_salarioHora,_nome), quotaMensalVendas(_quotaMensalVenda) {};
    double quotaTotalAnual();
    void imprimeVend(double horasTrabalhadas);

	protected:
  	
	int quotaMensalVendas;
	
};