#include "Usuario.h"

Usuario::Usuario(const std::string& nombre) : nombre(nombre) {}

void Usuario::agregarMascota(const std::shared_ptr<Mascota>& mascota) {
    mascotas[mascota->getNombre()] = mascota;
}

std::shared_ptr<Mascota> Usuario::obtenerMascota(const std::string& nombreMascota) {
    auto it = mascotas.find(nombreMascota);
    if (it != mascotas.end()) {
        return it->second;
    }
    return nullptr;
}

std::string Usuario::getNombre() const {
    return nombre;
}
