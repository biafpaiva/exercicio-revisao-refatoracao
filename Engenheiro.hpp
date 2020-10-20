#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:

  Engenheiro(double _salarioHora, std::string _nome, int _projetos) : Empregado(_salarioHora,_nome), projetos(_projetos) {};
  void imprimeEng(double horasTrabalhadas);

  protected:
  
  int projetos;
	
};
