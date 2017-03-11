#include "perimetro.h"

double PerimetroTriangulo(double lado) {
  return (3 * lado);
}

double PerimetroRetangulo(double lado1, double lado2) {
  return (2 * lado1 + 2 * lado2);
}

double PerimetroQuadrado(double lado) {
  return (4 * lado);
}

double PerimetroCirculo(double raio) {
  return (2 * kPi * raio);
}
