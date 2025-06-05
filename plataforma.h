#ifndef PLATAFORMA_H
#define PLATAFORMA_H

#include <vector>
#include <memory>
#include "Usuario.h"

class Plataforma {
private:
    std::vector<std::shared_ptr<Usuario>> usuarios;

public:
    void agregarUsuario(const std::shared_ptr<Usuario>& usuario);
    std::shared_ptr<Usuario> obtenerUsuario(const std::string& nombre);
    void mostrarMenu();
};

#endif
