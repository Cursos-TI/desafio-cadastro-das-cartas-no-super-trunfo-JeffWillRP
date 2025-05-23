#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    
    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    
    // Entrada dos dados da primeira carta
    printf("Informe os dados da primeira carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);//Adicionado espaço antes de %c para evitar que scanf leia caracteres em branco.

    printf("Código da Carta: ");
    scanf(" %s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade1);//lê strings completas, permitindo espaços no nome da cidade.

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área (em km²): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos1);
    
    // Entrada dos dados da segunda carta
    printf("\nInforme os dados da segunda carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta: ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área (em km²): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos2);
    
    // Exibição dos dados da primeira carta
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    
    // Exibição dos dados da segunda carta
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    
    return 0;
}
