// Auxiliar.h
//#ifndef AUXILIAR_H
//#define AUXILIAR_H
#pragma once
#include <string>

int lerNumero(const string& mensagem);

//#endif

// Auxiliar.cpp
#include "auxiliar.h"
#include <iostream>
#include <limits>

int lerNumero(const string& mensagem) {
    int valor;
    while (true) {
        cout << mensagem;
        cin >> valor;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada inválida. Digite apenas números.\n";
        } else {
            return valor;
        }
    }
}
