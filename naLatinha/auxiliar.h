// Auxiliar.h
#ifndef AUXILIAR_H
#define AUXILIAR_H

#include <string>

int lerNumero(const std::string& mensagem);

#endif

// Auxiliar.cpp
#include "Auxiliar.h"
#include <iostream>
#include <limits>

int lerNumero(const std::string& mensagem) {
    int valor;
    while (true) {
        std::cout << mensagem;
        std::cin >> valor;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrada inválida. Digite apenas números.\n";
        } else {
            return valor;
        }
    }
}
