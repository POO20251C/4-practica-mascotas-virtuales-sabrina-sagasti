#include "Habilidad.h"

Habilidad::Habilidad(const std::string& nombre, int nivel)
    : nombre(nombre), nivel(nivel) {}

std::string Habilidad::getNombre() const {
    return nombre;
}

int Habilidad::getNivel() const {
    return nivel;
}
