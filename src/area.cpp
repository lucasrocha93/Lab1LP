/**
 * @file area.cpp
 * @brief Implementa��o das fun��es que calculam a �rea de figuras geom�tricas.
 * @author Lucas Rocha de Azevedo Santos
 * @since 11/03/2017
 * @date 12/03/2017
 */

#include "area.h"
#include <cmath>

/**
 * @brief Fun��o que calcula a �rea de um tri�ngulo equil�tero.
 * @param[in] lado Valor do lado do tri�ngulo equil�tero cuja �rea ser� calculada.
 * @return �rea do tri�ngulo equil�tero.
 */
double AreaTriangulo(double lado) {
  return (pow(lado, 2) * sqrt(3) / 4);
}

/**
 * @brief Fun��o que calcula a �rea de um ret�ngulo.
 * @param[in] lado1 Valor do primeiro lado do ret�ngulo cuja �rea ser� calculada.
 * @param[in] lado2 Valor do segundo lado do ret�ngulo cuja �rea ser� calculada.
 * @return �rea do ret�ngulo.
 */
double AreaRetangulo(double lado1, double lado2) {
  return (lado1 * lado2);
}

/**
 * @brief Fun��o que calcula a �rea de um quadrado.
 * @param[in] lado Valor do lado do quadrado cuja �rea ser� calculada.
 * @return �rea do quadrado.
 */
double AreaQuadrado(double lado) {
  return (pow(lado, 2));
}

/**
 * @brief Fun��o que calcula a �rea de um c�rculo.
 * @param[in] raio Valor do raio do c�rculo cuja �rea ser� calculada.
 * @return �rea do c�rculo.
 */
double AreaCirculo(double raio) {
  return (kPi * pow(raio, 2));
}

/**
 * @brief Fun��o que calcula a �rea total de uma pir�mide quadrangular.
 * @param[in] lado_base Valor do lado da base da pir�mide cuja �rea total ser� calculada.
 * @param[in] altura Valor da altura da pir�mide cuja �rea total ser� calculada.
 * @return �rea total da pir�mide quadrangular.
 */
double AreaPiramide(double lado_base, double altura) {
  return (pow(lado_base, 2) + 2 * lado_base * sqrt(pow(lado_base/2, 2) + pow(altura, 2)));
}

/**
 * @brief Fun��o que calcula a �rea total de um cubo.
 * @param[in] aresta Valor da aresta do cubo cuja �rea total ser� calculada.
 * @return �rea total do cubo.
 */
double AreaCubo(double aresta) {
  return (6 * pow(aresta, 2));
}

/**
 * @brief Fun��o que calcula a �rea total de um paralelep�pedo.
 * @param[in] aresta1 Valor da primeira aresta do paralelep�pedo cuja �rea total ser� calculada.
 * @param[in] aresta2 Valor da segunda aresta do paralelep�pedo cuja �rea total ser� calculada.
 * @param[in] aresta3 Valor da terceira aresta do paralelep�pedo cuja �rea total ser� calculada.
 * @return �rea total do paralelep�pedo.
 */
double AreaParalelepipedo(double aresta1, double aresta2, double aresta3) {
  return (2 * (aresta1 * aresta2 + aresta1 * aresta3 + aresta2 * aresta3));
}

/**
 * @brief Fun��o que calcula a �rea de uma esfera.
 * @param[in] raio Valor do raio da esfera cuja �rea ser� calculada.
 * @return �rea da esfera.
 */
double AreaEsfera(double raio) {
  return (4 * kPi * pow(raio, 2));
}
