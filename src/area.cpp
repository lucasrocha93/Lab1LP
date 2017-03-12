/**
 * @file area.cpp
 * @brief Implementação das funções que calculam a área de figuras geométricas.
 * @author Lucas Rocha de Azevedo Santos
 * @since 11/03/2017
 * @date 12/03/2017
 */

#include "area.h"
#include <cmath>

/**
 * @brief Função que calcula a área de um triângulo equilátero.
 * @param[in] lado Valor do lado do triângulo equilátero cuja área será calculada.
 * @return Área do triângulo equilátero.
 */
double AreaTriangulo(double lado) {
  return (pow(lado, 2) * sqrt(3) / 4);
}

/**
 * @brief Função que calcula a área de um retângulo.
 * @param[in] lado1 Valor do primeiro lado do retângulo cuja área será calculada.
 * @param[in] lado2 Valor do segundo lado do retângulo cuja área será calculada.
 * @return Área do retângulo.
 */
double AreaRetangulo(double lado1, double lado2) {
  return (lado1 * lado2);
}

/**
 * @brief Função que calcula a área de um quadrado.
 * @param[in] lado Valor do lado do quadrado cuja área será calculada.
 * @return Área do quadrado.
 */
double AreaQuadrado(double lado) {
  return (pow(lado, 2));
}

/**
 * @brief Função que calcula a área de um círculo.
 * @param[in] raio Valor do raio do círculo cuja área será calculada.
 * @return Área do círculo.
 */
double AreaCirculo(double raio) {
  return (kPi * pow(raio, 2));
}

/**
 * @brief Função que calcula a área total de uma pirâmide quadrangular.
 * @param[in] lado_base Valor do lado da base da pirâmide cuja área total será calculada.
 * @param[in] altura Valor da altura da pirâmide cuja área total será calculada.
 * @return Área total da pirâmide quadrangular.
 */
double AreaPiramide(double lado_base, double altura) {
  return (pow(lado_base, 2) + 2 * lado_base * sqrt(pow(lado_base/2, 2) + pow(altura, 2)));
}

/**
 * @brief Função que calcula a área total de um cubo.
 * @param[in] aresta Valor da aresta do cubo cuja área total será calculada.
 * @return Área total do cubo.
 */
double AreaCubo(double aresta) {
  return (6 * pow(aresta, 2));
}

/**
 * @brief Função que calcula a área total de um paralelepípedo.
 * @param[in] aresta1 Valor da primeira aresta do paralelepípedo cuja área total será calculada.
 * @param[in] aresta2 Valor da segunda aresta do paralelepípedo cuja área total será calculada.
 * @param[in] aresta3 Valor da terceira aresta do paralelepípedo cuja área total será calculada.
 * @return Área total do paralelepípedo.
 */
double AreaParalelepipedo(double aresta1, double aresta2, double aresta3) {
  return (2 * (aresta1 * aresta2 + aresta1 * aresta3 + aresta2 * aresta3));
}

/**
 * @brief Função que calcula a área de uma esfera.
 * @param[in] raio Valor do raio da esfera cuja área será calculada.
 * @return Área da esfera.
 */
double AreaEsfera(double raio) {
  return (4 * kPi * pow(raio, 2));
}
