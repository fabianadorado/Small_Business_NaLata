#pragma once
#include "cliente.h"
#include <fstream>


class AcoesCliente {
private:
    static const int qtd_Clientes = 1000;
    Cliente vecClientes[qtd_Clientes];
    int totalClientes = 0;

public:
    void criarCliente(string nome, string telefone, string morada);
    bool eliminarCliente(int id);
    bool alterarNomeCliente(int id, string novoNome);
    void listarClientes() const;
    bool criarCarteiraClientes(const string& carteiraClientes = "clientes.txt") const;
    bool carregarCarteiraClientes(const string& carteiraClientes = "clientes.txt");
};

