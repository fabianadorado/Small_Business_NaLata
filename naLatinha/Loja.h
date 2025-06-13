// Loja.h
#ifndef LOJA_H
#define LOJA_H

#include <vector>
#include <string>
#include "Produto.h"
#include "Cliente.h"
#include "Venda.h"

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
    void criarProduto( string& nome, int quantidade, float precoCusto);
    void adicionarStock(int idProduto, int quantidade);
    void eliminarProduto(int idProduto);
    void listarProdutos() ;

    // Clientes
    void criarCliente( string& nome,  string& telefone,  string& morada);
    void eliminarCliente(int idCliente);
    void alterarNomeCliente(int idCliente,  string& novoNome);
	void listarClientes() const;

    // Vendas
    void efetuarVenda(int idCliente);

    // Relatórios
    void relatorioStock() ;
    void relatorioVendasPorProduto( string& nomeProduto) ;
    void relatorioTotalVendas() ;
};

#endif
