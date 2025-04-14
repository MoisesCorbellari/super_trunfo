# 🃏 Super Trunfo
Este projeto implementa um jogo estilo Super Trunfo, onde cada carta representa uma cidade com diversos atributos. O jogador compara os atributos de duas cartas, e o sistema informa automaticamente qual cidade vence com base em critérios pré-definidos.

# 🚀 Funcionalidades
### Cada carta representa uma cidade com os seguintes atributos:

- País
- Estado (letra de A a H)
- Código da Carta
- Nome da Cidade
- População
- Área da Cidade (em km²)
- PIB da Cidade (em bilhões de reais)
- Pontos Turísticos
- Densidade Populacional (calculada automaticamente)
- PIB per Capita (calculado automaticamente)
- Super Poder (calculado pela função calcularSuperPoder da biblioteca src/superpoder.h)

# 🏆 Critérios de Vitória
### Cada atributo tem sua própria regra para decidir qual carta vence:

| Atributo               | Critério de Vitória   |
|------------------------|-----------------------|
| População              | Maior vence           |
| Área                   | Maior vence           |
| PIB                    | Maior vence           |
| Pontos Turísticos      | Maior vence           |
| Densidade Populacional | **Menor vence**       |
| PIB per Capita         | Maior vence           |
| Super Poder            | Maior vence           |

# 🧑‍💻 Como Jogar
### O programa solicita os seguintes dados para duas cartas:

- País da cidade
- Letra do estado (A-H)
- Código da carta (ex: A01)
- Nome da cidade
- População
- Área da cidade (km²)
- PIB da cidade (em bilhões de reais)
- Pontos turísticos
- Após a entrada dos dados, o jogador escolhe qual atributo deseja usar na comparação.

# 💡 Exemplo de Entrada:
==================== Carta 1 ====================
- Digite o pais da primeira carta: Brasil
- Digite a letra do primeiro estado(A-H): A
- Digite o código da primeira carta (EX: A01): A01
- Digite o nome da cidade da primeira carta: Rio de Janeiro
- Digite a população da primeira carta: 875005
- Digite a área da primeira carta (km²): 89742.20
- Digite o PIB da primeira carta (em bilhôes): 985.22
- Digite os pontos turisticos da primeira carta: 62

==================== Carta 2 ====================
- Digite o pais da segunda carta: Brasil
- Digite a letra do segundo estado(A-H): B
- Digite o código da segunda carta (EX: A01): B02
- Digite o nome da cidade da segunda carta: São Paulo
- Digite a população da segunda carta: 985403
- Digite a área da segunda carta (km²): 36521.73
- Digite o PIB da segunda carta (em bilhôes): 823.92
- Digite os pontos turisticos da segunda carta: 36

### 🎮 Menu de Atributos para Comparação
### ========== Escolha de Atributo ==========
- 1 - População
- 2 - Área
- 3 - PIB
- 4 - Pontos Turísticos
- 5 - Densidade demográfica
- 6 - PIB per Capita
- 7 - Super Poder

- Selecione uma opção:

# 🖥️ Exemplo de Saída:
### ========== PIB ==========
- Rio de Janeiro (Brasil): R$985.22
- São Paulo (Brasil): R$823.92
- Cidade Rio de Janeiro (Brasil) venceu
