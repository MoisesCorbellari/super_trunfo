# Super Trunfo - Cartas de Cidades

Este projeto implementa um jogo de **Super Trunfo** utilizando cartas representando cidades. As cartas são formadas por informações como o estado, código, nome da cidade, população, área, PIB e pontos turísticos.

## Funcionalidade
O programa permite ao usuário inserir dados para duas cartas, cada uma representando uma cidade. Depois de inserir os dados, o programa exibe as informações de cada carta de maneira organizada.

### **Estrutura de Dados**
O código usa variáveis individuais para armazenar informações de cada cidade, como estado, código, nome, população, área, PIB e pontos turísticos. Além disso, o nome da cidade é lido utilizando `fgets()`, que permite capturar strings com espaços.

## Como Executar

### **Pré-requisitos**
- Compilador C (como GCC)

### **Compilação e Execução**
1. Clone este repositório ou copie o código fornecido para um arquivo `.c`.
2. Compile o código utilizando o comando:
```bash
gcc -o super_trunfo super_trunfo.c
```
3. Execute o programa gerado:
```bash
./super_trunfo
```

### **Fluxo de Entrada**
- O programa pedirá ao usuário para inserir os dados das duas cartas:

1. Letra do estado da cidade (A-H)
2. Código da carta (ex: A01)
3. Nome da cidade
4. População
5. Área da cidade
6. PIB da cidade
7. Pontos turísticos

- Exemplo de Entrada:
```bash
Digite a letra do primeiro estado(A-H): A
Digite o código da primeira carta (EX: A01): A01
Digite o nome da cidade da primeira carta: São Paulo
Digite a população da primeira carta: 12300000
Digite a área da primeira carta: 1521.10
Digite o PIB da primeira carta: 2100000.50
Digite os pontos turísticos da primeira carta: 30
```
- Exemplo de Saída:
```bash
========= Carta 1 =========

Estado: A
Código: A01
Cidade: São Paulo
População: 12300000
Área: 1521.10
PIB: 2100000.50
Pontos Turísticos: 30

========= Carta 2 =========

Estado: B
Código: B02
Cidade: Rio de Janeiro
População: 6748000
Área: 1200.50
PIB: 1300000.00
Pontos Turísticos: 50
```