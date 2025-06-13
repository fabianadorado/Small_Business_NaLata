// Venda.h
#ifndef VENDA_H
#define VENDA_H

#include <string>
#include <vector>
using namespace std;

class ItemVenda {
public:
    int numeroLinha;
    string nomeProduto;
    int quantidade;
    float precoSemIVA;
    float iva;
    float totalComIVA;

    ItemVenda(int linha,  string& nomeProduto, int quantidade, float precoUnit);
};

class Venda {
private:
    int numeroFatura;
    int idCliente;
    vector<ItemVenda> itens;
    float valorEntregue;
    float troco;

public:
    Venda();
    Venda(int numeroFatura, int idCliente);

    void adicionarItem( string& nomeProduto, int quantidade, float precoUnit);
    void finalizarVenda(float valorEntregue);
    void imprimirTalao() ;

    int getNumeroFatura() ;
    int getIdCliente() ;
    float getValorTotal() ;
    float getTroco() ;
};

#endif

