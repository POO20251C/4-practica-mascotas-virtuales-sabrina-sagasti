#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <map>
#include <memory>
#include "Mascota.h"

class Usuario {
private:
    std::string nombre;
    std::map<std::string, std::shared_ptr<Mascota>> mascotas;

public:
    Usuario(const std::string& nombre);
    void agregarMascota(const std::shared_ptr<Mascota>& mascota);
    std::shared_ptr<Mascota> obtenerMascota(const std::string& nombreMascota);
    std::string getNombre() const;
};

#endif
