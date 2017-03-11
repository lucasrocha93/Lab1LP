#include "area.h"
#include <cmath>

double AreaTriangulo(double base, double altura) {
  return ((base * altura) / 2);
}

double AreaRetangulo(double base, double altura) {
  return (base * altura);
}

double AreaQuadrado(double lado) {
  return (pow(lado, 2));
}

double AreaCirculo(double raio) {
  return (kPi * pow(raio, 2));
}

double AreaPiramide(double lado_base, double altura) {
  return (pow(lado_base, 2) + 2 * lado_base * sqrt(pow(lado_base/2, 2) + pow(altura, 2)));
}

double AreaCubo(double aresta) {
  return (6 * pow(aresta, 2));
}

double AreaParalelepipedo(double aresta1, double aresta2, double aresta3) {
  return (2 * (aresta1 * aresta2 + aresta1 * aresta3 + aresta2 * aresta3));
}

double AreaEsfera(double raio) {
  return (4 * kPi * pow(raio, 2));
}
