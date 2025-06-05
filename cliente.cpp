#include "Cliente.h"

int Cliente::proximoCliente = 1;

// Construtor padrão
Cliente::Cliente()
{
	idCliente = proximoCliente++;
	nome = " ";
	telefone = " ";
	morada = " ";
}

Cliente::Cliente(string nome, string telefone, string morada)
{
	idCliente = proximoCliente++;
	this->nome = nome;
	this->telefone = telefone;
	this->morada = morada;
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

string Cliente::toString()
{
	stringstream ss;

	ss << "ID: " << idCliente
		<< " | Nome: " << nome
		<< " | Telefone: " << telefone
		<< " | Morada: " << morada;
	return ss.str();

}


