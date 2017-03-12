/**
 * @file calcfigura.cpp
 * @brief Implementa��o das fun��es que coletam os dados necess�rios para as fun��es de c�lculo e imprimem o resultado.
 * @author Lucas Rocha de Azevedo Santos
 * @since 12/03/2017
 * @date 12/03/2017
 */

#include "calcfigura.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/**
 * @brief Fun��o que recebe os dados necess�rios, chama as fun��es de c�lculo e mostra os resultados.
 * @param[in] opcao Escolha da figura geom�trica para os c�lculos.
 */
void CalculoFigura(char opcao) {
  switch (opcao) {
    case 1: { // Tri�ngulo Equil�tero
      double lado;
      cout << "Digite o valor do lado do triangulo equilatero: ";
      cin >> lado;
      cout << "Perimetro do triangulo equilatero: " << PerimetroTriangulo(lado) << endl;
      cout << "Area do triangulo equilatero: " << AreaTriangulo(lado) << endl;
      break;
    }
    case 2: { // Ret�ngulo
      double lado1, lado2;
      cout << "Digite o valor da base do retangulo: ";
      cin >> lado1;
      cout << "Digite o valor da altura do retangulo: ";
      cin >> lado2;
      cout << "Perimetro do retangulo: " << PerimetroRetangulo(lado1, lado2) << endl;
      cout << "Area do retangulo: " << AreaRetangulo(lado1, lado2) << endl;
      break;
    }
    case 3: { // Quadrado
      double lado;
      cout << "Digite o valor do lado do quadrado: ";
      cin >> lado;
      cout << "Perimetro do quadrado: " << PerimetroQuadrado(lado) << endl;
      cout << "Area do quadrado: " << AreaQuadrado(lado) << endl;
      break;
    }
    case 4: { // C�rculo
      double raio;
      cout << "Digite o valor do raio do circulo: ";
      cin >> raio;
      cout << "Perimetro do circulo: " << PerimetroCirculo(raio) << endl;
      cout << "Area do circulo: " << AreaCirculo(raio) << endl;
      break;
    }
    case 5: { // Pir�mide Quadrangular
      double lado_base, altura;
      cout << "Digite o valor do lado da base da piramide: ";
      cin >> lado_base;
      cout << "Digite o valor da altura da piramide: ";
      cin >> altura;
      cout << "Area da piramide: " << AreaPiramide(lado_base, altura) << endl;
      cout << "Volume da piramide: " << VolumePiramide(lado_base, altura) << endl;
      break;
    }
    case 6: { // Cubo
      double aresta;
      cout << "Digite o valor da aresta do cubo: ";
      cin >> aresta;
      cout << "Area do cubo: " << AreaCubo(aresta) << endl;
      cout << "Volume do cubo: " << VolumeCubo(aresta) << endl;
      break;
    }
    case 7: { // Paralelep�pedo
      double aresta1, aresta2, aresta3;
      cout << "Digite o valor do comprimento do paralelepipedo: ";
      cin >> aresta1;
      cout << "Digite o valor da largura do paralelepipedo: ";
      cin >> aresta2;
      cout << "Digite o valor da altura do paralelepipedo: ";
      cin >> aresta3;
      cout << "Area do paralelepipedo: " << AreaParalelepipedo(aresta1, aresta2, aresta3) << endl;
      cout << "Volume do paralelepipedo: " << VolumeParalelepipedo(aresta1, aresta2, aresta3) << endl;
      break;
    }
    case 8: { // Esfera
      double raio;
      cout << "Digite o valor do raio da esfera: ";
      cin >> raio;
      cout << "Area da esfera: " << AreaEsfera(raio) << endl;
      cout << "Volume da esfera: " << VolumeEsfera(raio) << endl;
      break;
    }
    default:
      cout << "Opcao invalida." << endl;
      break;
  }
}
