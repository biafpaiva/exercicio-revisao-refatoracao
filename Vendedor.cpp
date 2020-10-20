#include "Vendedor.hpp"

const int MESES = 12;

void Vendedor::imprimeVend(double horasTrabalhadas) {
	imprimeEmp(horasTrabalhadas);
  	std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
  	std::cout << std::endl;
}

double Vendedor::quotaTotalAnual() {
	return quotaMensalVendas * MESES;
}

