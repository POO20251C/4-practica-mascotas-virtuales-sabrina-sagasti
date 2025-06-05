#include "RegistroCuidado.h"

RegistroCuidado::RegistroCuidado(const std::string& descripcion)
    : fecha(std::time(nullptr)), descripcion(descripcion) {}

std::time_t RegistroCuidado::getFecha() const {
    return fecha;
}

std::string RegistroCuidado::getDescripcion() const {
    return descripcion;
}
