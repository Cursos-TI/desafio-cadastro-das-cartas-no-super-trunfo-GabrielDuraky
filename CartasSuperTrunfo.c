#include <stdio.h>

int main() {
    
    // Declaração de variáveis da Carta 
    
    unsigned long int população;
    unsigned long int população2;
    int turismo;
    int turismo2;
    int código;
    int código2;
    float área;
    float área2;
    float PIBCapita;
    float PIBCapita2;
    float densidade;
    float densidade2;
    float densidadeinver;
    float densidadeinver2;
    float PIB;
    float PIB2;
    float SuperPoder;
    float SuperPoder2;
    char cidade[20];
    char cidade2[20];
    char estado[40];
    char estado2[40];
    
    // Bloco referente a entrada de dados

    printf("Digite o nome de um estado de A a H: "); 
    scanf("%s", estado); // Linha referente a variável estado

    printf("Digite o nome de uma cidade: ");
    scanf("%s", cidade); // Linha referente a variável cidade

    printf("Digite o código da Carta de 1 a 4: ");
    scanf("%d", &código); // Linha referente ao código da carta

    printf("Digite a população dessa cidade: ");
    scanf("%lu", &população); // Linha referente a população

    printf("Digite a área dessa cidade: ");
    scanf("%f", &área); // Linha referente a área

    printf("Digite o PIB dessa cidade: ");
    scanf("%f", &PIB); // Referente ao PIB

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &turismo);
    
    // Bloco referente a saída de dados

    printf("Carta 1\n"); // Identificação da carta
    
    printf("Estado: %s\n", estado); // Saída do Estado
    
    printf("Código: %s0%d\n", estado, código); // Saída do código com letras e números

    printf("Cidade: %s\n", cidade); // Saída da cidade

    printf("População: %lu\n", população); // Saída da população

    printf("Área: %.2fkm²\n", área); // Saída da área em km²

    printf("PIB: R$%.2f\n", PIB); // Saída do PIB

    printf("Pontos Turisticos: %d\n", turismo); // Saída de turismo

    // Parte referente a cálculo

    densidade = (float)população / área; // Cálculo de densidade populacional
    
    densidadeinver = área / (float)população;

    PIBCapita = (float)PIB / (float)população; // Cálculo do produto interno bruto per capita

     SuperPoder = (float)(população + área + PIB + turismo + PIBCapita + densidadeinver);

    printf("Densidade Populacional: %.2f\n", densidade); // Saída de Densidade

    printf("PIB per Capita: %.2f\n", PIBCapita); // Saída PIB per Capita

    printf("Super Poder: %.2f\n", SuperPoder);

    // bloco de código da segunda carta
    
    printf("Digite o nome de um estado de A a H: "); 
    scanf("%s", estado2); // Linha referente a variável estado

    printf("Digite o nome de uma cidade: ");
    scanf("%s", cidade2); // Linha referente a variável cidade

    printf("Digite o código da Carta de 1 a 4: ");
    scanf("%d", &código2); // Linha referente ao código da carta

    printf("Digite a população dessa cidade: ");
    scanf("%lu", &população2); // Linha referente a população

    printf("Digite a área dessa cidade: ");
    scanf("%f", &área2); // Linha referente a área

    printf("Digite o PIB dessa cidade: ");
    scanf("%f", &PIB2); // Referente ao PIB

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &turismo2);

    // Bloco referente a saída de dados da carta 2

    printf("Carta 2\n"); // Identificação da carta
    
    printf("Estado: %s\n", estado2); // Saída do Estado
    
    printf("Código: %s0%d\n", estado2, código2); // Saída do código com letras e números

    printf("Cidade: %s\n", cidade2); // Saída da cidade

    printf("População: %lu\n", população2); // Saída da população

    printf("Área: %.2fkm²\n", área2); // Saída da área em km²

    printf("PIB: R$%.2f\n", PIB2); // Saída do PIB

    printf("Pontos Turisticos: %d\n", turismo2); // Saída de turismo
    
    // Parte referente a cálculo
    
    densidade2 = (float)população2 / área2; // Cálculo de densidade populacional
    
    densidadeinver2 = área2 / (float)população2;

    PIBCapita2 = (float)PIB2 / (float)população2; // Cálculo do produto interno bruto per capita

    SuperPoder2 = (float)(população + área + PIB + turismo + PIBCapita + densidadeinver2);
    
    printf("Densidade Populacional: %.2f\n", densidade2); // Saída de Densidade

    printf("PIB per Capita: %.2f\n", PIBCapita2); // Saída PIB per Capita
    
    printf("Super Poder: %.2f\n", SuperPoder2);
    // Comparação de Cartas
 
    printf("Comparação das Cartas:\n");

    if (população > população2) {
        printf("População: Carta 1 venceu (1)\n");
    } else {
        printf("População: Carta 2 venceu (0)\n");
    }
    
    if (área > área2) {
        printf("Área: Carta 1 venceu (1)\n");
    } else {
        printf("Área: Carta 2 venceu (0)\n");
    }

    if (PIB > PIB2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    } 

    if (turismo > turismo2) {
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");
    }

    if (densidade < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    if (PIBCapita > PIBCapita2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    if (SuperPoder > SuperPoder2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }
return 0;
}
