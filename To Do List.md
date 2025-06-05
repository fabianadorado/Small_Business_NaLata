# ✅ To Do List – Sistema de Gestão de Comércio Local

## 1. 📌 Análise de Requisitos

**Objetivo:** Sistema de gestão de vendas, stock e clientes.

### Funcionalidades principais:
- [ ] Efetuar venda com emissão de talão
- [ ] Gestão de stock (criar, adicionar, eliminar produto)
- [ ] Relatórios (stock, vendas por produto, vendas totais)
- [ ] Gestão de clientes
- [ ] Sistema de sorteio em vendas (extra)

---

## 2. 🧱 Estrutura do Projeto

### Classes principais:
- **Produto**: id, nome, quantidade, preço de custo
- **Cliente**: id, nome, telefone, morada
- **Venda**: id, data, cliente, lista de produtos comprados
- **Loja**: contém listas de produtos, clientes, vendas + funções de gestão

### Ficheiros:
- `main.cpp` – entrada principal do programa
- `loja.cpp / loja.h` – lógica e dados da loja
- `produto.cpp / produto.h` – classe Produto
- `cliente.cpp / cliente.h` – classe Cliente
- `venda.cpp / venda.h` – classe Venda
- `util.cpp / util.h` – funções auxiliares (ex: geração de IDs, data)

---

## 3. 🛠 Desenvolvimento por Etapas

### Etapa 1: Estrutura de Dados e Classes
- [ ] Criar classes Produto, Cliente, Venda, Loja
- [ ] Incluir os atributos pedidos e construtores
- [ ] Implementar métodos básicos (get/set, criar, remover, alterar)

### Etapa 2: Funções de Stock
- [ ] Criar produto novo
- [ ] Adicionar stock
- [ ] Eliminar produto
- [ ] Atualizar stock automático após venda

### Etapa 3: Sistema de Vendas
- [ ] Apresentar produtos disponíveis
- [ ] Selecionar produtos e quantidades
- [ ] Calcular preços com IVA
- [ ] Imprimir talão (estrutura detalhada no enunciado)
- [ ] Armazenar até 100 vendas (circular)

### Etapa 4: Clientes
- [ ] Criar, eliminar e alterar clientes
- [ ] Garantir que não há espaços vazios nas estruturas

### Etapa 5: Relatórios
- [ ] Relatório de stock atual
- [ ] Relatório de vendas por produto (passar nome por parâmetro)
- [ ] Relatório de vendas totais com:
  - [ ] Produto mais vendido
  - [ ] Produto menos vendido
  - [ ] Lucro do produto mais vendido
  - [ ] Cliente que mais comprou em valor

### Etapa 6: Extras e Validações
- [ ] Sorteio de vendas com pagamento grátis
- [ ] Inserção automática da data
- [ ] IDs automáticos para produtos, clientes, vendas
- [ ] Validações para evitar ações indevidas
- [ ] Retorno ao menu após cada operação

---

## 4. 🧪 Testes

- [ ] Criar dados iniciais (produtos, clientes, stock)
- [ ] Simular compras
- [ ] Validar relatórios e atualização de stock
- [ ] Testar limite de vendas (100)
