#include <stdio.h>


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    //Carta1
    int turistico;
    unsigned long int pop;
    char estado, codigo[5], nome[20];
    double pib, area;
    float densidade, pibpercapita;
    float sp, inversodp;

    //Carta2
    int turistico2;
    unsigned long int pop2;
    char estado2, codigo2[5], nome2[20];
    double pib2, area2;
    float densidade2, pibpercapita2;
    float sp2, inversodp2;


  // Área para entrada de dados
    printf("!!Primeira Carta!! \n");
    printf("Digite o Estado da carta (A até H) : \n");
    scanf(" %c", &estado);

    printf("Informe o código da carta (01 até 04): \n");
    scanf(" %s", codigo);

    printf("Informe o nome da cidade: \n");
    //scanf(" %s", nome); teste
    scanf(" %49[^\n]%*c", nome); 

    printf("Digite a população da cidade: \n");
    scanf(" %lu", &pop);

    printf("Informe a área da cidade em km²: \n");
    scanf(" %lf", &area);

    printf("Digite o PIB da cidade: \n");
    scanf(" %lf", &pib);

    printf("Informe quantos pontos turísticos tem na cidade: \n");
    scanf(" %d", &turistico);

    densidade = (float) pop / area;
    pibpercapita = (float) pib / pop;


    //Fim da primeira carta

    
    printf("!!Segunda Carta!! \n");
    printf("Digite o Estado da carta (A até H) : \n");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (01 até 04): \n");
    scanf(" %s", codigo2);

    printf("Informe o nome da cidade: \n");
    //scanf(" %s", nome2); teste abaixo
    scanf(" %49[^\n]%*c", nome2); 

    printf("Digite a população da cidade: \n");
    scanf(" %lu", &pop2);

    printf("Informe a área da cidade em km²: \n");
    scanf(" %lf", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf(" %lf", &pib2);

    printf("Informe quantos pontos turísticos tem na cidade: \n");
    scanf(" %d", &turistico2);
   
    densidade2 = (float) pop2 / area2;
    pibpercapita2 = (float) pib2 / pop2;

    //Fim segunda carta
  
  // Área para exibição dos dados da cidade
        //primeira carta
    printf("\n >>> Carta 1 <<< \n");
    printf("Estado %c\nCódigo: %c%s\nCidade: %s\nPopulação: %lu habitantes\nÁrea: %.2lf km²\nPIB: %.2lf bilhões de reais\nPontos turísticos: %d\n", estado, estado, codigo, nome, pop, area, pib, turistico);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f reais\n", pibpercapita);
      inversodp = 1 / densidade;
      sp = (float) (pop + area + pib + turistico + pibpercapita + inversodp);
    printf("Super Poder: %.2f\n", sp);

        //segunda carta
    printf("\n >>> Carta 2 <<< \n");
    printf("Estado: %c\nCódigo: %c%s\nCidade: %s\nPopulação: %lu habitantes\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos turísticos: %d\n", estado2, estado2, codigo2, nome2, pop2, area2, pib2, turistico2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
      inversodp2 = 1 / densidade2;
      sp2 = (float) (pop2 + area2 + pib2 + turistico2 + pibpercapita2 + inversodp2);
    printf("Super Poder: %.2f\n", sp2);

  
  // Fim da exibição dos dados da cidade
  
 
  // Área para comparação das cartas
  printf("\n >>> Resultado da comparação <<< \n\n");

    printf("Atributo: População\n\n");

    printf("Carta 1 - %s: %lu\n", nome, pop);
    printf("Carta 2 - %s: %lu\n\n", nome2, pop2);

    if (pop > pop2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome);
    } else if (pop2 > pop) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate! Ambas têm o mesmo valor.\n");
    }

    printf("\nAtributo: Área\n\n");

    printf("Carta 1 - %s: %.2f\n", nome, area);
    printf("Carta 2 - %s: %.2f\n\n", nome2, area2);

    if (area > area2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nome);
    } else if (area2 > area) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate! Ambas têm o mesmo valor!\n\n");
                }

    return 0;
} 