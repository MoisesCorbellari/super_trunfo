
# 🃏 Super Trunfo de Cidades

Este projeto implementa um jogo estilo Super Trunfo, onde cada carta representa uma cidade com diversos atributos. Dois jogadores comparam cartas com base em atributos específicos, e o sistema determina automaticamente qual cidade vence, de forma individual e geral.

---

## 🚀 Funcionalidades

- Entrada de dados para duas cidades.
- Escolha de dois atributos para comparação.
- Cálculo automático de:
  - Densidade demográfica
  - PIB per Capita
  - Super Poder (via biblioteca `superpoder.h`)
- Comparação e exibição dos vencedores individuais e gerais.

---

## 🏙️ Atributos das Cartas

Cada carta representa uma cidade com os seguintes atributos:

- País
- Estado (letra de A a H)
- Código da Carta (ex: A01)
- Nome da Cidade
- População
- Área (km²)
- PIB (em bilhões de reais)
- Pontos Turísticos
- **Densidade Populacional** (calculado automaticamente)
- **PIB per Capita** (calculado automaticamente)
- **Super Poder** (calculado pela função `calcularSuperPoder`)

---

## 🏆 Critérios de Vitória

| Atributo               | Regra de Vitória       |
|------------------------|------------------------|
| População              | Maior vence            |
| Área                   | Maior vence            |
| PIB                    | Maior vence            |
| Pontos Turísticos      | Maior vence            |
| Densidade Demográfica  | **Menor vence**        |
| PIB per Capita         | Maior vence            |
| Super Poder            | Maior vence            |

---

## 🎮 Como Jogar

1. O programa solicita os dados de duas cidades.
2. O jogador escolhe **dois atributos diferentes** para comparar.
3. O sistema:
   - Exibe os valores de cada cidade para os dois atributos.
   - Indica o vencedor para cada atributo.
   - Exibe o vencedor geral (maior soma dos dois atributos).

---

## 💡 Exemplo de Entrada

```
==================== Carta 1 ====================
Digite o país da primeira carta: Brasil
Digite a letra do primeiro estado (A-H): A
Digite o código da primeira carta (EX: A01): A01
Digite o nome da cidade da primeira carta: Rio de Janeiro
Digite a população da primeira carta: 875005
Digite a área da primeira carta (km²): 89742.20
Digite o PIB da primeira carta (em bilhões): 985.22
Digite os pontos turísticos da primeira carta: 62

==================== Carta 2 ====================
Digite o país da segunda carta: Brasil
Digite a letra do segundo estado (A-H): B
Digite o código da segunda carta (EX: A01): B02
Digite o nome da cidade da segunda carta: São Paulo
Digite a população da segunda carta: 985403
Digite a área da segunda carta (km²): 36521.73
Digite o PIB da segunda carta (em bilhões): 823.92
Digite os pontos turísticos da segunda carta: 36
```

---

## 📊 Menu de Atributos para Comparação

```
========== Escolha de Atributo ==========
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - Densidade demográfica
6 - PIB per Capita
7 - Super Poder
```

---

## 🖥️ Exemplo de Saída

```
========== Comparação ==========
Atributos escolhidos: PIB & Pontos Turísticos
Rio de Janeiro (Brasil): 985.22 (PIB) | 62.00 (Pontos Turísticos)
São Paulo (Brasil): 823.92 (PIB) | 36.00 (Pontos Turísticos)

---------- Resultado Individual ----------
PIB: -> Rio de Janeiro venceu
Pontos Turísticos: -> Rio de Janeiro venceu

---------- Resultado Geral ----------
-> Vencedor: Rio de Janeiro (Brasil)
```

---

## 🧠 Observações

- O atributo **Densidade Demográfica** é o único em que o menor valor vence.
- O **Super Poder** é uma fórmula composta, implementada externamente na biblioteca `superpoder.h`.
- A função `valorAtributo()` facilita a modularização da leitura dos atributos.
- A função `menuAtributos()` evita seleção duplicada de atributos.

---

## 📁 Organização

```
📦 Projeto Super Trunfo
 ┣ 📂 src/
 ┃ ┗ 📄 superpoder.h  # Lógica de cálculo do Super Poder
 ┣ 📄 main.c          # Código principal do jogo
 ┣ 📄 README.md       # Documentação do projeto
```

---