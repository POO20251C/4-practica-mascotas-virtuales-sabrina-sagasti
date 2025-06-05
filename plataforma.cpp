#include "Plataforma.h"
#include <iostream>

void Plataforma::agregarUsuario(const std::shared_ptr<Usuario>& usuario) {
    usuarios.push_back(usuario);
}

std::shared_ptr<Usuario> Plataforma::obtenerUsuario(const std::string& nombre) {
    for (const auto& usuario : usuarios) {
        if (usuario->getNombre() == nombre) {
            return usuario;
        }
    }
    return nullptr;
}

void Plataforma::mostrarMenu() {
    int opcion;
    do {
        std::cout << "=== Menú Principal ===\n";
        std::cout << "1. Agregar Usuario\n";
        std::cout << "2. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                std::string nombre;
                std::cout << "Ingrese el nombre del usuario: ";
                std::cin >> nombre;
                auto usuario = std::make_shared<Usuario>(nombre);
                agregarUsuario(usuario);
                std::cout << "Usuario agregado exitosamente.\n";
                break;
            }
            case 2:
                std::cout << "Saliendo del programa.\n";
                break;
            default:
                std::cout << "Opción no válida. Intente nuevamente.\n";
                break;
        }
    } while (opcion != 2);
}
