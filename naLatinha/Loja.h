// Loja.h
#ifndef LOJA_H
#define LOJA_H

#include <vector>
#include <string>
#include <iostream>
#include <ctime>
#include "Produto.h"
#include "Cliente.h"
#include "Venda.h"

using namespace std;

class Loja {
private:
    vector<Produto> produtos;
    vector<Cliente> clientes;
    vector<Venda> vendas;

    int proximoIdProduto;
    int proximoIdCliente;
    int proximoNumeroFatura;

public:
    Loja();

    // Produtos
    void criarProduto(const string& nome, int quantidade, float precoCusto);
    void adicionarStock(int idProduto, int quantidade);
    void eliminarProduto(int idProduto);
    void listarProdutos() const;

    // Clientes
    void criarCliente(const string& nome, const string& telefone, const string& morada);
    void eliminarCliente(int idCliente);
    void alterarNomeCliente(int idCliente, const string& novoNome);
    void listarClientes() const;

    // Vendas
    void efetuarVenda(int idCliente);

    // Relatórios
    void relatorioStock() const;
    void relatorioVendasPorProduto(const string& nomeProduto) const;
    void relatorioTotalVendas() const;
};

#endif

