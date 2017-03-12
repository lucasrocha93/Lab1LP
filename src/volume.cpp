/**
 * @file volume.cpp
 * @brief Implementação das funções que calculam o volume de figuras geométricas.
 * @author Lucas Rocha de Azevedo Santos
 * @since 12/03/2017
 * @date 12/03/2017
 */

#include "volume.h"
#include <cmath>

/**
 * @brief Função que calcula o volume de uma pirâmide quadrangular.
 * @param[in] lado_base Valor do lado da base da pirâmide cujo volume será calculado.
 * @param[in] altura Valor da altura da pirâmide cujo volume será calculado.
 * @return Volume da pirâmide quadragular.
 */
double VolumePiramide(double lado_base, double altura) {
  return ((pow(lado_base, 2) * altura) / 3);
}

/**
 * @brief Função que calcula o volume de um cubo.
 * @param[in] aresta Valor da aresta do cubo cujo volume será calculado.
 * @return Volume do cubo.
 */
double VolumeCubo(double aresta) {
  return (pow(aresta, 3));
}

/**
 * @brief Função que calcula o volume de um paralelepípedo.
 * @param[in] aresta1 Valor da primeira aresta do paralelepípedo cujo volume será calculado.
 * @param[in] aresta2 Valor da segunda aresta do paralelepípedo cujo volume será calculado.
 * @param[in] aresta3 Valor da terceira aresta do paralelepípedo cujo volume será calculado.
 * @return Volume do paralelepípedo.
 */
double VolumeParalelepipedo(double aresta1, double aresta2, double aresta3) {
  return (aresta1 * aresta2 * aresta3);
}

/**
 * @brief Função que calcula o volume de uma esfera.
 * @param[in] raio Valor do raio da esfera cujo volume será calculado.
 * @return Volume da esfera.
 */
double VolumeEsfera(double raio) {
  return ((4 * kVPi * pow(raio, 3)) / 3);
}
