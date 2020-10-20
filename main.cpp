#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1 = Engenheiro(35, "Joao Snow", 3);
  eng1.imprimeEng(9.5);
  
  Engenheiro eng2 = Engenheiro(30, "Daniela Targaryen", 1);
  eng2.imprimeEng(8);
  
  Engenheiro eng3 = Engenheiro(30, "Bruno Stark", 2);
  eng3.imprimeEng(8);
  
  
  Vendedor vend1 = Vendedor(20, "Tonho Lannister", 5000);
  vend1.imprimeVend(6);
  
  Vendedor vend2 = Vendedor(25, "Jose Mormont", 3000);
  vend2.imprimeVend(8);
	
  Vendedor vend3 = Vendedor(30, "Sonia Stark", 4000);
  vend3.imprimeVend(8); 
  
  return 0;	
}