#include "Produto.h"
#include <iostream>
using namespace std;


int Produto::proximoId = 1;

Produto::Produto(string nome, int quantidade, float precoCusto)
    : id(proximoId++), nome(nome), quantidade(quantidade), precoCusto(precoCusto) {}

int Produto::getId() const 
{ 
    return id; 
}
string Produto::getNome() const 
{ 
    return nome; 
}
int Produto::getQuantidade() const 
{ 
    return quantidade; 
}
float Produto::getPrecoCusto() const 
{ 
    return precoCusto; 
}
float Produto::getPrecoVenda() const 
{ 
    return precoCusto * 1.3f; 
}
void Produto::adicionarStock(int qtd) 
{ 
    quantidade += qtd; 
}
void Produto::removerStock(int qtd) 
{ 
    if (quantidade >= qtd) quantidade -= qtd; 
}
