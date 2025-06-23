#include <stdio.h>

int main() {
   
    printf("Carta1\n");

    char estado;
    char codigoCarta[4] = "A01";
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("uma letra de A - H:\n");
    scanf(" %c", &estado);

    printf("codigo da carta:\n");
    scanf(" %s", codigoCarta);

    printf("nome da cidade:\n");
    scanf(" %[^\n]", cidade);  

    printf("Populacao:\n");
    scanf(" %d", &populacao);

    printf("Area:\n");
    scanf(" %f", &area);

    printf("PIB:\n");
    scanf(" %f", &pib);

    printf("pontos turisticos:\n");
    scanf(" %d", &pontosturisticos);

    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %c\n", estado);
    printf("Codigo da carta: %s\n", codigoCarta);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turisticos: %d\n", pontosturisticos);

    return 0;
}
