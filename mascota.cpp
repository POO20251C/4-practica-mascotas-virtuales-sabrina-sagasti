#include "Mascota.h"

Mascota::Mascota(const std::string& nombre)
    : nombre(nombre), energia(100), experiencia(0) {}

void Mascota::usarObjeto(const std::shared_ptr<Objeto>& objeto) {
    objetos.push_back(objeto);
    // Lógica para aplicar efectos del objeto
}

void Mascota::aprenderHabilidad(const std::shared_ptr<Habilidad>& habilidad) {
    habilidades.push_back(habilidad);
    // Lógica para aprender habilidad
}

void Mascota::agregarRegistro(const RegistroCuidado& registro) {
    registros.push_back(registro);
}

std::string Mascota::getNombre() const {
    return nombre;
}
