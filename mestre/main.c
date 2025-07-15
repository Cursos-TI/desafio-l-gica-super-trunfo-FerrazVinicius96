#include <stdio.h>
#define TAM_CODIGO 5
#define TAM_NOME 100

// Funções
void ler_carta(char *estado, char *codigo, char *nome_da_cidade, int *populacao, float *area, float *pib, int *pontos_turisticos);
void exibir_carta(char estado, char *codigo, char *nome_da_cidade, int populacao, float area, float pib, int pontos_turisticos, float densidade, float pib_pc);
float densidade(int populacao, float area) {
    return populacao / area;
}
float pib_pc(int populacao, float pib) {
    return pib / populacao;
}
void menu_comparacao_mestre(
    int populacao1, int populacao2,
    int pontos_turisticos1, int pontos_turisticos2,
    float area1, float area2,
    float pib1, float pib2,
    float densidade1, float densidade2,
    float pib_pc1, float pib_pc2
);

int main(void) {
    // Carta 1
    char estado1, codigo1[TAM_CODIGO], nome_da_cidade1[TAM_NOME];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade1, pib_pc1;

    // Carta 2
    char estado2, codigo2[TAM_CODIGO], nome_da_cidade2[TAM_NOME];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade2, pib_pc2;

    // Leitura
    printf("=====> CARTA 01 <===== \n");
    ler_carta(&estado1, codigo1, nome_da_cidade1, &populacao1, &area1, &pib1, &pontos_turisticos1);

    printf("=====> CARTA 02 <===== \n");
    ler_carta(&estado2, codigo2, nome_da_cidade2, &populacao2, &area2, &pib2, &pontos_turisticos2);

    // Cálculos
    densidade1 = densidade(populacao1, area1);
    pib_pc1 = pib_pc(populacao1, pib1);

    densidade2 = densidade(populacao2, area2);
    pib_pc2 = pib_pc(populacao2, pib2);

    // Exibição das Cartas
    printf("=====> INFO CARTA 01 <=====\n");
    exibir_carta(estado1, codigo1, nome_da_cidade1, populacao1, area1, pib1, pontos_turisticos1, densidade1, pib_pc1);

    printf("=====> INFO CARTA 02 <=====\n");
    exibir_carta(estado2, codigo2, nome_da_cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade2, pib_pc2);

    menu_comparacao_mestre(
    populacao1, populacao2,
    pontos_turisticos1, pontos_turisticos2,
    area1, area2,
    pib1, pib2,
    densidade1, densidade2,
    pib_pc1, pib_pc2
);

    return 0;
}

void ler_carta(char *estado, char *codigo, char *nome_da_cidade, int *populacao, float *area, float *pib, int *pontos_turisticos) {
    printf("Insira a letra do estado (A-H): ");
    scanf(" %c", estado);

    printf("Insira o código da carta (01-04): ");
    scanf("%s", codigo);

    while (getchar() != '\n'); // limpar buffer

    printf("Insira o nome da cidade: ");
    fgets(nome_da_cidade, TAM_NOME, stdin);

    printf("População: ");
    scanf("%d", populacao);

    printf("Área (km²): ");
    scanf("%f", area);

    printf("PIB (milhões): ");
    scanf("%f", pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", pontos_turisticos);
}

void exibir_carta(char estado, char *codigo, char *nome_da_cidade, int populacao, float area, float pib, int pontos_turisticos, float densidade, float pib_pc) {
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f\n", pib_pc);
}

void menu_comparacao_mestre(
    int populacao1, int populacao2,
    int pontos_turisticos1, int pontos_turisticos2,
    float area1, float area2,
    float pib1, float pib2,
    float densidade1, float densidade2,
    float pib_pc1, float pib_pc2
) {
    char *atributos[] = {
        "1 - População",
        "2 - Área",
        "3 - PIB",
        "4 - Densidade Populacional",
        "5 - Pontos Turísticos",
        "6 - PIB Per Capita"
    };

    int escolha1 = -1, escolha2 = -1;

    printf("\n SELECIONE DOIS ATRIBUTOS PARA COMPARAÇÃO:\n");
    for (int i = 0; i < 6; i++) {
        printf("%s\n", atributos[i]);
    }

    do {
        printf("Escolha o 1º atributo (1 a 6): ");
        scanf("%d", &escolha1);
    } while (escolha1 < 1 || escolha1 > 6);

    do {
        printf("Escolha o 2º atributo (1 a 6, diferente do primeiro): ");
        scanf("%d", &escolha2);
    } while (escolha2 < 1 || escolha2 > 6 || escolha2 == escolha1);

    // Recuperar valores
    float valor1_c1 = 0, valor1_c2 = 0, valor2_c1 = 0, valor2_c2 = 0;

    float valores_c1[] = {
        populacao1, area1, pib1, densidade1, pontos_turisticos1, pib_pc1
    };
    float valores_c2[] = {
        populacao2, area2, pib2, densidade2, pontos_turisticos2, pib_pc2
    };

    valor1_c1 = valores_c1[escolha1 - 1];
    valor1_c2 = valores_c2[escolha1 - 1];
    valor2_c1 = valores_c1[escolha2 - 1];
    valor2_c2 = valores_c2[escolha2 - 1];

    printf("\nComparando: %s e %s\n", atributos[escolha1 - 1], atributos[escolha2 - 1]);
    printf("Carta 01 → %.2f | %.2f\n", valor1_c1, valor2_c1);
    printf("Carta 02 → %.2f | %.2f\n", valor1_c2, valor2_c2);

    // Decisão com lógica aninhada + ternário
    int pontos_c1 = 0, pontos_c2 = 0;

    pontos_c1 += (valor1_c1 > valor1_c2) ? 1 : (valor1_c1 < valor1_c2) ? 0 : 0;
    pontos_c2 += (valor1_c2 > valor1_c1) ? 1 : (valor1_c2 < valor1_c1) ? 0 : 0;

    pontos_c1 += (valor2_c1 > valor2_c2) ? 1 : (valor2_c1 < valor2_c2) ? 0 : 0;
    pontos_c2 += (valor2_c2 > valor2_c1) ? 1 : (valor2_c2 < valor2_c1) ? 0 : 0;

    // Resultado final
    printf("\nRESULTADO FINAL:\n");
    if (pontos_c1 > pontos_c2) {
        printf("Carta 01 venceu com %d a %d!\n", pontos_c1, pontos_c2);
    } else if (pontos_c2 > pontos_c1) {
        printf("Carta 02 venceu com %d a %d!\n", pontos_c2, pontos_c1);
    } else {
        printf("Empate! Ambas as cartas obtiveram %d ponto(s).\n", pontos_c1);
    }
}