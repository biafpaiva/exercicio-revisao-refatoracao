#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
  
    double pagamentoMes(double horasTrabalhadas);
    Empregado(double _salarioHora, std::string _nome) : salarioHora(_salarioHora), nome(_nome) {};
    void imprimeEmp(double horasTrabalhadas);

  protected:

    double salarioHora; 
    std::string nome;
	
};

#endif
