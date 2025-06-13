#include "Produto.h"
#include <iostream>
using namespace std;


int Produto::proximoId = 1;

Produto::Produto(string nome, int quantidade, float precoCusto)
    : id(proximoId++), nome(nome), quantidade(quantidade), precoCusto(precoCusto) {}

int Produto::getId()  
{ 
    return id; 
}
string Produto::getNome()  
{ 
    return nome; 
}
int Produto::getQuantidade()  
{ 
    return quantidade; 
}
float Produto::getPrecoCusto()  
{ 
    return precoCusto; 
}
float Produto::getPrecoVenda()  
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
