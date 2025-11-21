# cadastro-de-produtos-em-C

## 📄 Descrição
Este projeto é um **sistema de cadastro de produtos e emissão de nota fiscal**, desenvolvido em **C**, com foco em:

- Estruturas (`struct`)
- Ponteiros
- Modularização com funções
- Manipulação de arrays estáticos

O programa permite cadastrar produtos, calcular total, aplicar descontos e exibir a nota fiscal detalhada.

---

## ⚙ Funcionalidades

| Funcionalidade                        | Descrição                                                                 |
|---------------------------------------|---------------------------------------------------------------------------|
| Adicionar Produto                     | Cadastro de nome, preço e quantidade                                      |
| Calcular Total                        | Multiplica preço pela quantidade                                          |
| Aplicar Desconto                      | Descontos automáticos conforme valor do produto                           |
| Emitir Nota Fiscal                    | Exibe todos os produtos cadastrados com total, desconto e valor final     |
| Menu Interativo                       | Opções para adicionar produtos, emitir nota e sair do programa            |

**Tabela de descontos:**

| Total do produto (R$) | Desconto |
|----------------------|-----------|
| ≤ 100                | 0%        |
| 101 – 250            | 5%        |
| 251 – 500            | 10%       |
| > 500                | 15%       |

