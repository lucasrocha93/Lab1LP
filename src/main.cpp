/**
 * @file main.cpp
 * @brief Implementa��o da fun��o principal do programa.
 * @author Lucas Rocha de Azevedo Santos
 * @since 12/03/2017
 * @date 12/03/2017
 */

#include "calcfigura.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  unsigned int opcao;

  cout << "Calculadora Geometrica Plana e Espacial" << endl
       << "(1) Triangulo equilatero" << endl
       << "(2) Retangulo" << endl
       << "(3) Quadrado" << endl
       << "(4) Circulo" << endl
       << "(5) Piramide Quadrangular" << endl
       << "(6) Cubo" << endl
       << "(7) Paralelepipedo" << endl
       << "(8) Esfera" << endl
       << "(0) Sair" << endl
       << endl;

  cout << "Digite sua opcao: ";
  cin >> opcao;

  while (opcao != 0) {
    CalculoFigura(opcao);
    cout << endl;
    cout << "Digite outra opcao: ";
    cin >> opcao;
  }

  cout << "Encerrando programa..." << endl << endl;

  return 0;
}
