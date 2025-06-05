#ifndef REGISTRO_CUIDADO_H
#define REGISTRO_CUIDADO_H

#include <string>
#include <ctime>

class RegistroCuidado {
private:
    std::time_t fecha;
    std::string descripcion;

public:
    RegistroCuidado(const std::string& descripcion);
    std::time_t getFecha() const;
    std::string getDescripcion() const;
};

#endif
