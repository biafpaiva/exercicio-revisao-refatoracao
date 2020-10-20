#include "Engenheiro.hpp"

void Engenheiro::imprimeEng(double horasTrabalhadas) {
    imprimeEmp(horasTrabalhadas);
    std::cout << "Projetos: " << projetos << std::endl;
    std::cout << std::endl;
}

