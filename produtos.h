// Produto.h
#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
#include <iostream>
using namespace std;


class Produto {
private:
    static int proximoId;
    int id;
    string nome;
    int quantidade;
    float precoCusto;

public:
    Produto(string nome, int quantidade, float precoCusto);
    int getId();
    string getNome();
    int getQuantidade();
    float getPrecoCusto();
    float getPrecoVenda();
    void adicionarStock(int qtd);
    void removerStock(int qtd);
};

#endif

