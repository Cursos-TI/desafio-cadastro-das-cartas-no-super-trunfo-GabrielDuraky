#include <stdio.h>

int main() {
    
    // Declaração de variáveis da Carta 
    
    int população;
    int turismo;
    int código;
    float área;
    float PIBCapita;
    float densidade;
    float PIB;
    char cidade[20];
    char estado[40];

    // Bloco referente a entrada de dados

    printf("Digite o nome de um estado de A a H: "); 
    scanf("%s", estado); // Linha referente a variável estado

    printf("Digite o nome de uma cidade: ");
    scanf("%s", cidade); // Linha referente a variável cidade

    printf("Digite o código da Carta de 1 a 4: ");
    scanf("%d", &código); // Linha referente ao código da carta

    printf("Digite a população dessa cidade: ");
    scanf("%d", &população); // Linha referente a população

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

    printf("População: %d\n", população); // Saída da população

    printf("Área: %.2fkm²\n", área); // Saída da área em km²

    printf("PIB: R$%.2f\n", PIB); // Saída do PIB

    printf("Pontos Turisticos: %d\n", turismo); // Saída de turismo

    // Parte referente a cálculo
    
    densidade = (float)população / área; // Cálculo de densidade populacional
    
    PIBCapita = (float)PIB / população; // Cálculo do produto interno bruto per capita

    printf("Densidade Populacional: %.2f\n", densidade); // Saída de Densidade

    printf("PIB per Capita: %.2f\n", PIBCapita); // Saída PIB per Capita

    // bloco de código da segunda carta
    
    printf("Digite o nome de um estado de A a H: "); 
    scanf("%s", estado); // Linha referente a variável estado

    printf("Digite o nome de uma cidade: ");
    scanf("%s", cidade); // Linha referente a variável cidade

    printf("Digite o código da Carta de 1 a 4: ");
    scanf("%d", &código); // Linha referente ao código da carta

    printf("Digite a população dessa cidade: ");
    scanf("%d", &população); // Linha referente a população

    printf("Digite a área dessa cidade: ");
    scanf("%f", &área); // Linha referente a área

    printf("Digite o PIB dessa cidade: ");
    scanf("%f", &PIB); // Referente ao PIB

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &turismo);

    // Bloco referente a saída de dados da carta 2

    printf("Carta 2\n"); // Identificação da carta
    
    printf("Estado: %s\n", estado); // Saída do Estado
    
    printf("Código: %s0%d\n", estado, código); // Saída do código com letras e números

    printf("Cidade: %s\n", cidade); // Saída da cidade

    printf("População: %d\n", população); // Saída da população

    printf("Área: %.2fkm²\n", área); // Saída da área em km²

    printf("PIB: R$%.2f\n", PIB); // Saída do PIB

    printf("Pontos Turisticos: %d\n", turismo); // Saída de turismo
    
    // Parte referente a cálculo
    
    densidade = (float)população / área; // Cálculo de densidade populacional
    
    PIBCapita = (float)PIB / população; // Cálculo do produto interno bruto per capita

    printf("Densidade Populacional: %.2f\n", densidade); // Saída de Densidade

    printf("PIB per Capita: %.2f\n", PIBCapita); // Saída PIB per Capita


return 0;
}
