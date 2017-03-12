/**
* @file perimetro.cpp
* @brief Implementa��o das fun��es que calculam o per�metro de figuras geom�tricas.
* @author Lucas Rocha de Azevedo Santos
* @since 11/03/2017
* @date 12/03/2017
*/

#include "perimetro.h"

/**
 * @brief Fun��o que calcula o per�metro de um tri�ngulo equil�tero.
 * @param[in] lado Valor do lado do tri�ngulo equil�tero cujo per�metro ser� calculado.
 * @return Per�metro do tri�ngulo equil�tero.
 */
double PerimetroTriangulo(double lado) {
  return (3 * lado);
}

/**
 * @brief Fun��o que calcula o per�metro de um ret�ngulo.
 * @param[in] lado1 Valor do primeiro lado do ret�ngulo cujo per�metro ser� calculado.
 * @param[in] lado2 Valor do segundo lado do ret�ngulo cujo per�metro ser� calculado.
 * @return Per�metro do ret�ngulo.
 */
double PerimetroRetangulo(double lado1, double lado2) {
  return (2 * lado1 + 2 * lado2);
}

/**
 * @brief Fun��o que calcula o per�metro de um quadrado.
 * @param[in] lado Valor do lado do quadrado cujo per�metro ser� calculado.
 * @return Per�metro do quadrado.
 */
double PerimetroQuadrado(double lado) {
  return (4 * lado);
}

/**
 * @brief Fun��o que calcula o per�metro de um c�rculo.
 * @param[in] raio Valor do raio do c�rculo cujo per�metro ser� calculado.
 * @return Per�metro do c�rculo.
 */
double PerimetroCirculo(double raio) {
  return (2 * kPi * raio);
}
