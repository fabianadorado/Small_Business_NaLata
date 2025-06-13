#include "Cliente.h"
#include <string>
#include <sstream>
using namespace std;


int Cliente::proximoCliente = 1;

// Construtor padrão
Cliente::Cliente()
{
	idCliente = proximoCliente++;
	nome = " ";
	telefone = " ";
	morada = " ";
	totalComprado = 0;
}

Cliente::Cliente(string nome, string telefone, string morada, float totalComprado)
{
	idCliente = proximoCliente++;
	this->nome = nome;
	this->telefone = telefone;
	this->morada = morada;
	this->totalComprado = totalComprado;
}

int Cliente::getIdCliente()
{

	return idCliente;
}

string Cliente::getNome()
{
	return nome;
}

string Cliente::getTelefone()
{
	return telefone;
}

string Cliente::getMorada()
{
	return morada;
}

float Cliente::getTotalComprado() {
    return totalComprado;
}


void Cliente::setIdCliente(int idCliente)
{
	this->idCliente = idCliente;
}

void Cliente::setNome(string nome)
{
	this->nome = nome;
}

void Cliente::setTelefone(string telefone)
{
	this->telefone = telefone;
}

void Cliente::setMorada(string morada)
{
	this->morada = morada;
}
void Cliente::adicionarCompra(float valor) 
{
    totalComprado += valor;
}
string Cliente::toString()
{
	stringstream ss;

	ss << "ID: " << idCliente
		<< " | Nome: " << nome
		<< " | Telefone: " << telefone
		<< " | Morada: " << morada;
	return ss.str();

}


