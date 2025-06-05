#include "Objeto.h"

Objeto::Objeto(const std::string& nombre, const std::string& efecto)
    : nombre(nombre), efecto(efecto) {}

std::string Objeto::getNombre() const {
    return nombre;
}

std::string Objeto::getEfecto() const {
    return efecto;
}
