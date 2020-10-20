#include "Empregado.hpp"

const int HORAS = 8;

double Empregado::pagamentoMes(double horasTrabalhadas) {
    double t = horasTrabalhadas;
    if (horasTrabalhadas > HORAS) {
        double x = horasTrabalhadas - HORAS;
        t += x / 2;
    }
	return t * salarioHora;
}

void Empregado::imprimeEmp(double horasTrabalhadas) {
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
}