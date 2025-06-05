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

public:

	Cliente();
	Cliente( string nome,string telefone, string morada);
	


	int getIdCliente();
	string getNome();
	string getTelefone();
	string getMorada();

	//void setIdCliente(int idCliente);
	void setNome(string nome);
	void setTelefone(string telefone);
	void setMorada(string morada);
	
	string toString();
};

