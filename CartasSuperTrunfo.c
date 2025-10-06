#include <stdio.h>

// Definindo a estrutura para a carta
struct Cidade {
    char estado[30];
    char codigo[4];
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

// Função principal
int main() {
    struct Cidade carta1;

    // Atribuindo valores
    char estado1[30] = "São Paulo";        // Estado
    char codigo1[4] = "S01";               // Código do estado
    char cidade1[30] = "Sertãozinho";      // Cidade
    int populacao1 = 132000;               // População
    float area1 = 403.0;                   // Área em km²
    float pib1 = 55.3;                     // PIB em milhões
    int turismo1 = 15;                     // Número de Pontos Turísticos


    struct Cidade carta2;

    // Atribuindo valores
    char estado2[30] = "Rio de Janeiro";   // Estado
    char codigo2[4] = "R01";               // Código do estado
    char cidade2[30] = "Duque de Caxias";  // Cidade
    int populacao2 = 866000;               // População
    float area2 = 465.0;                   // Área em km²
    float pib2 = 57.1;                     // PIB em milhões
    int turismo2 = 20;                     // Número de Pontos Turísticos


    struct Cidade carta3;

    // Atribuindo valores
    char estado3[30] = "Paraná";             // Estado
    char codigo3[4] = "P01";                 // Código do estado
    char cidade3[30] = "Londrina";           // Cidade
    int populacao3 = 575000;                 // População
    float area3 = 1650.0;                    // Área em km²
    float pib3 = 24600.0;                    // PIB em milhões
    int turismo3 = 22;                       // Número de Pontos Turísticos

    // Exibir Carta 1
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %s\n", estado1);
    printf("Código do estado: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área (km²): %.2f\n", area1);
    printf("PIB (milhões): %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);

    // Exibir Carta 2
    printf("\n===== Carta 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Código do estado: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (km²): %.2f\n", area2);
    printf("PIB (milhões): %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);

    // Exibir Carta 3
    printf("\n===== Carta 3 =====\n");
    printf("Estado: %s\n", estado3);
    printf("Código do estado: %s\n", codigo3);
    printf("Cidade: %s\n", cidade3);
    printf("População: %d\n", populacao3);
    printf("Área (km²): %.2f\n", area3);
    printf("PIB (milhões): %.2f\n", pib3);
    printf("Número de Pontos Turísticos: %d\n", turismo3);
    
    return 0;
}
