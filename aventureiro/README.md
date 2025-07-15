# Super Trunfo - Nível Aventureiro

## 🧩 Desafio: Interatividade no Super Trunfo

Neste nível, você dará um grande passo no desenvolvimento do seu Super Trunfo, adicionando interação com o usuário e lógica mais complexa. Continue praticando e se preparando para o desafio final!

---

## 🎯 Objetivo

Criar um programa em C que permite ao usuário comparar duas cartas de países do Super Trunfo a partir de um **menu interativo**, escolhendo o **atributo de comparação**.

---

## 🛠️ Funcionalidades

### 1. Menu Interativo com `switch`
- Permite ao jogador escolher o atributo de comparação entre:
  - População
  - Área
  - PIB
  - Número de Pontos Turísticos
  - Densidade Demográfica

### 2. Regras de Comparação
- A carta com **maior valor** vence.
- Exceção: **Densidade Demográfica** — vence a carta com **menor valor**.

### 3. Exibição do Resultado
O programa deve mostrar:
- O nome dos dois países
- O atributo escolhido
- Os valores dos dois países
- O vencedor da comparação
- Em caso de empate: “Empate!”

---

## 💡 Requisitos Funcionais

- Receber os dados de **duas cartas já cadastradas**.
- Calcular:
  - Densidade Populacional = população / área
- Permitir a **escolha do atributo** via menu.
- Usar `switch` para lidar com a escolha do atributo.
- Utilizar **estruturas `if-else` aninhadas** para a comparação dos valores.
- Exibir as informações do resultado da comparação de forma clara.

---

## 🧑‍💻 Requisitos Não Funcionais

- Código bem indentado, com nomes de variáveis significativos.
- Instruções no menu devem ser simples e diretas.
- Lidar com entradas inválidas (opção inválida no menu → mensagem de erro usando `default` no `switch`).

---

## 🧪 Exemplo de Execução

```
Escolha um atributo para comparar:
1 - População
2 - Área
3 - PIB
4 - Número de Pontos Turísticos
5 - Densidade Demográfica

Opção: 1

Comparando População:
Carta 1 - Brasil: 211000000
Carta 2 - Argentina: 45000000

Resultado: Carta 1 (Brasil) venceu!
```

---

## 🧱 Tecnologias Utilizadas

- Linguagem: **C**
- Compilador: `gcc`

---

## 🚀 Como Compilar e Executar

### 1. Compile o programa:

```bash
gcc super_trunfo_interativo.c -o super_trunfo
```

### 2. Execute o programa:

```bash
./super_trunfo
```

---

## 🗂️ Estrutura Recomendada

```
super_trunfo/
├── super_trunfo_interativo.c
└── README.md
```

---

## 📅 Data de Criação

15/07/2025