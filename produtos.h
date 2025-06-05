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
    Produto(std::string nome, int quantidade, float precoCusto);
    int getId() const;
    string getNome() const;
    int getQuantidade() const;
    float getPrecoCusto() const;
    float getPrecoVenda() const;
    void adicionarStock(int qtd);
    void removerStock(int qtd);
};

#endif

