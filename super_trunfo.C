#include <stdio.h>

int main() {
    
    int populacao, populacao2;
    int turismo, turismo2;
    int codigo, codigo2;
    float area, area2;
    float PIBCapita, PIBCapita2;
    float densidade, densidade2, densidadeInvertida, densidadeInvertida2;
    float PIB, PIB2;
    float SuperPoder, SuperPoder2;
    char cidade[40], cidade2;
    char estado, estado2;

    // Bloco referente a entrada de dados

    printf("Digite o nome de um estado de A a H: "); 
    scanf("%c", &estado); // Linha referente a variável estado

    printf("Digite o nome de uma cidade: ");
    scanf("%39s", cidade); // Linha referente a variável cidade

    printf("Digite o código da Carta de 1 a 4: ");
    scanf("%d", &codigo); // Linha referente ao código da carta

    printf("Digite a população dessa cidade: ");
    scanf("%d", &populacao); // Linha referente a população

    printf("Digite a área dessa cidade: ");
    scanf("%f", &area); // Linha referente a área

    printf("Digite o PIB dessa cidade: ");
    scanf("%f", &PIB); // Referente ao PIB

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &turismo);

    // Bloco referente a saída de dados

    printf("Carta 1\n"); // Identificação da carta
    
    printf("Estado: %s\n", estado); // Saída do Estado
    
    printf("Código: %c0%d\n", estado, codigo); // Saída do código com letras e números

    printf("Cidade: %s\n", cidade); // Saída da cidade

    printf("População: %d\n", populacao); // Saída da população

    printf("Área: %.2fkm²\n", area); // Saída da área em km²

    printf("PIB: R$%.2f\n", PIB); // Saída do PIB

    printf("Pontos Turisticos: %d\n", turismo); // Saída de turismo

    // Parte referente a cálculo
    
    densidade = (float)populacao / area; // Cálculo de densidade populacional

    densidadeInvertida = 1.0 / populacao; // cálculo do inverso da densidade
    
    PIBCapita = (float)PIB * 1e9f / populacao; // Cálculo do produto interno bruto per capita

    SuperPoder = populacao + area + PIB + turismo + PIBCapita + densidadeInvertida;

    printf("Densidade Populacional: %.2f\n", densidade); // Saída de Densidade

    printf("PIB per Capita: %.2f\n", PIBCapita); // Saída PIB per Capita

    printf("Super Poder: %.2f\n", SuperPoder); // Saída de dados do Super Poder

    // bloco de código da segunda carta
    
    printf("Digite o nome de um estado de A a H: "); 
    scanf("%c", &estado2); // Linha referente a variável estado

    printf("Digite o nome de uma cidade: ");
    scanf("%39s", cidade2); // Linha referente a variável cidade

    printf("Digite o código da Carta de 1 a 4: ");
    scanf("%d", &codigo2); // Linha referente ao código da carta

    printf("Digite a população dessa cidade: ");
    scanf("%d", &populacao2); // Linha referente a população

    printf("Digite a área dessa cidade: ");
    scanf("%f", &area2); // Linha referente a área

    printf("Digite o PIB dessa cidade: ");
    scanf("%f", &PIB2); // Referente ao PIB

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &turismo2);

    // Bloco referente a saída de dados da carta 2

    printf("Carta 2\n"); // Identificação da carta
    
    printf("Estado: %s\n", estado2); // Saída do Estado

    // Exibição dos Dados das Cartas:
    
    printf("Código: %s0%d\n", estado2, codigo2); // Saída do código com letras e números

    printf("Cidade: %s\n", cidade2); // Saída da cidade

    printf("População: %d\n", populacao2); // Saída da população

    printf("Área: %.2fkm²\n", area2); // Saída da área em km²

    printf("PIB: R$%.2f\n", PIB2); // Saída do PIB

    printf("Pontos Turisticos: %d\n", turismo2); // Saída de turismo
    
    // Parte referente a cálculo
    
    densidade2 = (float)populacao2 / area2; // Cálculo de densidade populacional

    densidadeInvertida2 = 1.0 / populacao2; // Cálculo do inverso da densidade
    
    PIBCapita2 = (float)PIB2 * 1e9f / populacao2; // Cálculo do produto interno bruto per capita

    SuperPoder2 = populacao2 + area2 + PIB2 + turismo2 + PIBCapita2 + densidadeInvertida2;

    printf("Densidade Populacional: %.2f\n", densidade2); // Saída de Densidade

    printf("PIB per Capita: %.2f\n", PIBCapita2); // Saída PIB per Capita

    printf("Super Poder: %.2f\n", SuperPoder2);

    // Comparação das cartas

    printf("Comparação das Cartas:\n");
    printf("População: %d\n", populacao > populacao2 ? 1 : 0);
    printf("Área: %d\n", area > area2 ? 1 : 0);
    printf("PIB: %.d\n", PIB > PIB2 ? 1 : 0);
    printf("Pontos Túristicos: %d\n", turismo > turismo2 ? 1 : 0);
    printf("Densidade Populacional: %d\n", densidadeInvertida < densidadeInvertida2 ? 1 : 0);
    printf("PIB per Capita: %d\n", PIBCapita > PIBCapita2 ? 1 : 0);
    printf("Super Poder: %d\n", SuperPoder > SuperPoder2 ? 1 : 0);

    return 0;
}