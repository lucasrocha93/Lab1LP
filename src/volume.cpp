/**
* @file volume.cpp
* @brief Implementa��o das fun��es que calculam o volume de figuras geom�tricas.
* @author Lucas Rocha de Azevedo Santos
* @since 12/03/2017
* @date 12/03/2017
*/

#include "volume.h"
#include <cmath>

/**
 * @brief Fun��o que calcula o volume de uma pir�mide quadrangular.
 * @param[in] lado_base Valor do lado da base da pir�mide cujo volume ser� calculado.
 * @param[in] altura Valor da altura da pir�mide cujo volume ser� calculado.
 * @return Volume da pir�mide quadragular.
 */
double VolumePiramide(double lado_base, double altura) {
  return ((pow(lado_base, 2) * altura) / 3);
}

/**
 * @brief Fun��o que calcula o volume de um cubo.
 * @param[in] aresta Valor da aresta do cubo cujo volume ser� calculado.
 * @return Volume do cubo.
 */
double VolumeCubo(double aresta) {
  return (pow(aresta, 3));
}

/**
 * @brief Fun��o que calcula o volume de um paralelep�pedo.
 * @param[in] aresta1 Valor da primeira aresta do paralelep�pedo cujo volume ser� calculado.
 * @param[in] aresta2 Valor da segunda aresta do paralelep�pedo cujo volume ser� calculado.
 * @param[in] aresta3 Valor da terceira aresta do paralelep�pedo cujo volume ser� calculado.
 * @return Volume do paralelep�pedo.
 */
double VolumeParalelepipedo(double aresta1, double aresta2, double aresta3) {
  return (aresta1 * aresta2 * aresta3);
}

/**
 * @brief Fun��o que calcula o volume de uma esfera.
 * @param[in] raio Valor do raio da esfera cujo volume ser� calculado.
 * @return Volume da esfera.
 */
double VolumeEsfera(double raio) {
  return ((4 * kPi * pow(raio, 3)) / 3);
}
