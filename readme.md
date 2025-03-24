# Super Trunfo - Cidades

Este projeto implementa um jogo de **Super Trunfo** utilizando cartas que representam cidades. As cartas possuem atributos como estado, código, nome da cidade, população, área, PIB e pontos turísticos. O jogo calcula automaticamente a densidade populacional e o PIB per capita, determinando ao final qual carta vence com base em critérios específicos.

## 🚀 Funcionalidades
- Estado
- Código da carta
- Nome da cidade
- População
- Área da cidade
- PIB da cidade
- Pontos turísticos
- **Densidade populacional** (habitantes por km²)
- **PIB per capita**
- **Super Poder:** Critério de vitória baseado nos atributos

## 📌 Critérios de Vitória
Cada atributo tem uma regra específica para determinar a carta vencedora:

| **Atributo**            | **Critério de Vitória** |
|-------------------------|------------------------|
| **População**          | Maior vence            |
| **Área**               | Maior vence            |
| **PIB**                | Maior vence            |
| **Pontos Turísticos**  | Maior vence            |
| **PIB per Capita**     | Maior vence            |
| **Densidade Populacional** | Menor vence |

---

## 📥 Entrada do Usuário
O programa solicita ao usuário os seguintes dados para as duas cartas:
1. Letra do estado da cidade (A-H)
2. Código da carta (ex: A01)
3. Nome da cidade
4. População
5. Área da cidade
6. PIB da cidade (em bilhões)
7. Pontos turísticos

### **Exemplo de Entrada:**
```bash
Digite a letra do primeiro estado(A-H): A
Digite o código da primeira carta (EX: A01): A01
Digite o nome da cidade da primeira carta: Rio de Janeiro
Digite a população da primeira carta: 875005
Digite a área da primeira carta (km²): 89742.20
Digite o PIB da primeira carta (em bilhões): 985.22
Digite os pontos turísticos da primeira carta: 62

Digite a letra do segundo estado(A-H): B
Digite o código da segunda carta (EX: A01): B02
Digite o nome da cidade da segunda carta: São Paulo
Digite a população da segunda carta: 985403
Digite a área da segunda carta (km²): 36521.73
Digite o PIB da segunda carta (em bilhões): 823.92
Digite os pontos turísticos da segunda carta: 36
```

---

## 📤 Saída do Programa
### **Exemplo de Saída:**
```bash
========= Carta 1 =========
Estado: A
Código: A01
Cidade: Rio de Janeiro
População: 875005
Área: 89742.20 km²
PIB (em bilhões): R$985.22
Pontos Turísticos: 62
Densidade populacional: 9.75 hab/km²
PIB per capita: R$1125959.25

========= Carta 2 =========
Estado: B
Código: B02
Cidade: São Paulo
População: 985403
Área: 36521.73 km²
PIB (em bilhões): R$823.92
Pontos Turísticos: 36
Densidade populacional: 26.98 hab/km²
PIB per capita: R$836124.88

========= Comparação de cartas =========
População: Carta 2 venceu (0)
Área: Carta 1 venceu (1)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 1 venceu (1)
PIB per Capita: Carta 1 venceu (1)
Densidade: Carta 1 venceu  (1 menor densidade populacional)
```
