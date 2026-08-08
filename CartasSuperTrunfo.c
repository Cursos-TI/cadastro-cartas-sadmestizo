#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado [1];
    char código [3];
    char cidade [50];
    int populacao;
    float Area;
    float PIB;
    int Turismo;
    float DensidadePopulacional;
    float PIBpercapita;
    


  // Área para entrada de dados

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", código);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Turismo);

    DensidadePopulacional = (float)(populacao / Area); 
    PIBpercapita = (float) (PIB / populacao);

  // Área para exibição dos dados da cidade
    
    printf("Estado: %s\n", estado); 
    printf("Código da carta: %s\n", código);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área da cidade: %f\n", Area);
    printf("PIB: %f\n", PIB);
    printf("Número de pontos turísticos: %d\n", Turismo);
    printf("Densidade populacional: %.2f\n", DensidadePopulacional);
    printf("PIB per capita: %.2f\n",PIBpercapita);
    
  return 0;

} 
