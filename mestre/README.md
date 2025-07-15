# Super Trunfo — Nível Mestre

## Visão Geral

Este é o desafio final do projeto Super Trunfo, onde integramos todos os conhecimentos adquiridos nos níveis anteriores. Neste nível, o jogador poderá comparar duas cartas utilizando dois atributos diferentes, com menus dinâmicos e uso do operador ternário para decisões elegantes.

## Funcionalidades

- Cadastro e armazenamento de duas cartas com os atributos:
  - Estado
  - Código da carta
  - Nome do país
  - População (unsigned long int)
  - Área (float)
  - PIB (float)
  - Número de pontos turísticos (int)
- Cálculo automático de:
  - Densidade populacional
  - PIB per capita
- Comparação entre duas cartas com base em **dois atributos** escolhidos pelo usuário:
  - População
  - Área
  - PIB
  - Número de pontos turísticos
  - Densidade populacional
  - PIB per capita
- Regra especial: Para a densidade populacional, vence quem tiver o **menor valor**.
- Vencedor determinado com base na **soma dos dois atributos comparados**.
- Tratamento de empate.
- Menu interativo com `switch` dinâmico (sem repetir atributos).
- Decisões utilizando `if-else`, `if-else aninhado` e **operador ternário**.
- Mensagens claras e intuitivas para guiar o usuário durante o uso.

## Como Compilar

Use um compilador C, como o `gcc`, para compilar o programa:

```
gcc super_trunfo_mestre.c -o super_trunfo_mestre
```

## Como Executar

Após compilar, execute o programa no terminal:

```
./super_trunfo_mestre
```

## Exemplo de Saída

```
Menu de comparação:
1 - População
2 - Área
3 - PIB
4 - Pontos turísticos
5 - Densidade populacional
6 - PIB per capita

Escolha o primeiro atributo: 1
Escolha o segundo atributo (diferente do anterior): 6

Comparação de cartas:
Carta 1 - Brasil: População = 211000000, PIB per capita = 15200.50
Carta 2 - Argentina: População = 45000000, PIB per capita = 10300.75

Soma Carta 1: 211015200.50
Soma Carta 2: 45010300.75

Resultado: Carta 1 (Brasil) venceu!
```

## Observações

- O sistema é robusto a entradas inválidas, com tratamento via `default` no `switch`.
- Não há necessidade de cadastrar cartas novamente — podem ser hardcoded.
- Ideal para praticar lógica de programação em C com foco em decisões compostas e interatividade.

## Autor

Desenvolvido como parte dos desafios de lógica em linguagem C.
