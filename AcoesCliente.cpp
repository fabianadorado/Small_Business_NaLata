#include "AcoesCliente.h"

void AcoesCliente::criarCliente(string nome, string telefone, string morada)
{
	if (totalClientes >= qtd_Clientes)
	{
		cout << "Limite de clientes atingido." << endl;
		return;
	}
	vecClientes[totalClientes] = Cliente(nome, telefone, morada);
	cout << "Cliente criado com sucesso! ID: " << vecClientes[totalClientes].getIdCliente() << endl;
	totalClientes++;
}

bool AcoesCliente::eliminarCliente(int id)
{
	for (int i = 0; i < totalClientes;i++)
	{
		if (vecClientes[i].getIdCliente()==id)
		{
			for(int j = i; j< totalClientes-1; j++)
			{
				vecClientes[j] = vecClientes[j + 1];
			}
			totalClientes--;
			cout << "Cliente com ID " << id << " removido com sucesso!" << endl;
			return	true;
		}
	}
	cout << "Cliente com ID " << id << "não encontrado!" << endl;
	return false;
}

bool AcoesCliente::alterarNomeCliente(int id, string novoNome)
{
	for (int i = 0; i < totalClientes; i++)
	{
		if (vecClientes[i].getIdCliente() == id)
		{
			vecClientes[i].setNome(novoNome);
			cout << "Nome do cliente do ID " << id << " alterado para: " << novoNome << endl;
			return true;
		}
	}
	cout << "Cliente com ID " << id << " não encontrado!" << endl;
	return false;
}

void AcoesCliente::listarClientes() const
{
	if (totalClientes == 0)
	{
		cout << "Não há clientes registados!" << endl;
		return;
	}
	cout << endl << "Listas de Clientes( " << totalClientes << ")" << endl;
	cout << string(60, "#");
	
	for (int i = 0; i < totalClientes; i++)
	{
		cout << vecClientes[i].toString() << endl;
	}
	cout << string(60, "#");
}

