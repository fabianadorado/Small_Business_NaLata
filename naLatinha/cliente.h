#pragma once
#include<iostream>
#include <string>
#include <sstream>

using namespace std;


class Cliente
{
private:
	static int proximoCliente;
	int idCliente;
	string nome;
	string telefone;
	string morada;
	float totalComprado;

public:

	Cliente();
	Cliente( string nome,string telefone, string morada);
	


	int getIdCliente();
	string getNome();
	string getTelefone();
	string getMorada();
	float getTotalComprado;

	//void setIdCliente(int idCliente);
	void setNome(string nome);
	void setTelefone(string telefone);
	void setMorada(string morada);
	void adicionarCompra(float valor);

	string toString();
};

