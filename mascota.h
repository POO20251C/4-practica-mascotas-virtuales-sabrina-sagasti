#ifndef MASCOTA_H
#define MASCOTA_H

#include <string>
#include <vector>
#include <memory>
#include "Objeto.h"
#include "Habilidad.h"
#include "RegistroCuidado.h"

class Mascota {
private:
    std::string nombre;
    int energia;
    int experiencia;
    std::vector<std::shared_ptr<Objeto>> objetos;
    std::vector<std::shared_ptr<Habilidad>> habilidades;
    std::vector<RegistroCuidado> registros;

public:
    Mascota(const std::string& nombre);
    void usarObjeto(const std::shared_ptr<Objeto>& objeto);
    void aprenderHabilidad(const std::shared_ptr<Habilidad>& habilidad);
    void agregarRegistro(const RegistroCuidado& registro);
    std::string getNombre() const;
};

#endif
