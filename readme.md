# Super Trunfo - Cartas de Cidades

Este projeto implementa um jogo de **Super Trunfo** utilizando cartas representando cidades. As cartas são formadas por informações como o estado, código, nome da cidade, população, área, PIB e pontos turísticos, calculando automáticamente a densidade populacional e PIB per capita.

## Funcionalidade
- Estado
- Código da carta
- Nome da cidade
- População
- Área da cidade
- PIB da cidade
- Pontos turísticos
- Densidade Populacional (habitantes por km²)
- PIB per capita

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
Digite a letra do primeiro estado(A-H): a
Digite o código da primeira carta (EX: A01): a01 
Digite o nome da cidade da primeira carta: São Paulo
Digite a população da primeira carta: 12325000
Digite a área da primeira carta (km²): 1521.11
Digite o PIB da primeira carta (em bilhôes): 699.28
Digite os pontos turisticos da primeira carta: 50

Digite a letra do segundo estado(A-H): b
Digite o código da segunda carta (EX: A01): b02
Digite o nome da cidade da segunda carta: Rio de Janeiro
Digite a população da segunda carta: 6748000
Digite a área da segunda carta (km²): 1200.25
Digite o PIB da segunda carta (em bilhôes): 300.50
Digite os pontos turisticos da segunda carta: 30
```
- Exemplo de Saída:
```bash
========= Carta 1 =========
Estado: a
Código: a01
Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB (em bilhões): R$699.28
Pontos Turísticos: 50
Densidade populacional: 8102.64 hab/km²
PIB per capita: R$56736.71 reais

========= Carta 2 =========
Estado: b
Código: b02
Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB (em bilhões): 300.50
Pontos Turísticos: 30
Densidade populacional: 5622.16 hab/km²
PIB per capita: R$44531.71
```
