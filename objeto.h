#ifndef OBJETO_H
#define OBJETO_H

#include <string>

class Objeto {
private:
    std::string nombre;
    std::string efecto;

public:
    Objeto(const std::string& nombre, const std::string& efecto);
    std::string getNombre() const;
    std::string getEfecto() const;
};

#endif
