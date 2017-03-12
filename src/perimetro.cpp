/**
 * @file perimetro.cpp
 * @brief Implementação das funções que calculam o perímetro de figuras geométricas.
 * @author Lucas Rocha de Azevedo Santos
 * @since 11/03/2017
 * @date 12/03/2017
 */

#include "perimetro.h"

/**
 * @brief Função que calcula o perímetro de um triângulo equilátero.
 * @param[in] lado Valor do lado do triângulo equilátero cujo perímetro será calculado.
 * @return Perímetro do triângulo equilátero.
 */
double PerimetroTriangulo(double lado) {
  return (3 * lado);
}

/**
 * @brief Função que calcula o perímetro de um retângulo.
 * @param[in] lado1 Valor do primeiro lado do retãngulo cujo perímetro será calculado.
 * @param[in] lado2 Valor do segundo lado do retãngulo cujo perímetro será calculado.
 * @return Perímetro do retângulo.
 */
double PerimetroRetangulo(double lado1, double lado2) {
  return (2 * lado1 + 2 * lado2);
}

/**
 * @brief Função que calcula o perímetro de um quadrado.
 * @param[in] lado Valor do lado do quadrado cujo perímetro será calculado.
 * @return Perímetro do quadrado.
 */
double PerimetroQuadrado(double lado) {
  return (4 * lado);
}

/**
 * @brief Função que calcula o perímetro de um círculo.
 * @param[in] raio Valor do raio do círculo cujo perímetro será calculado.
 * @return Perímetro do círculo.
 */
double PerimetroCirculo(double raio) {
  return (2 * kPi * raio);
}
