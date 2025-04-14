#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

                // variaveis Carta 1
                char estado_carta01[3];
                char codigo_da_carta01[4];
                char nome_da_cidade_carta01[15];
                int populacao_carta01;
                float area_carta01;
                float pib_carta01;
                int pontos_turisticos_carta01;
                float densidade_populacional_carta01;
                float PIB_per_Capita_carta01;

                // Cadastro da Carta 1
                printf("Digite o Estado:\n");
                scanf("%2s", &estado_carta01);

                printf("Digite o Código da carta\n");
                scanf("%3s", &codigo_da_carta01);

                printf("Digite o Nome da Cidade\n");
                scanf("%14s", &nome_da_cidade_carta01);

                printf("Digite a População:\n");
                scanf("%d", &populacao_carta01);

                printf("Digite a Área (em km²):\n");
                scanf("%f", &area_carta01);

                printf("Digite o PIB:\n");
                scanf("%f", &pib_carta01);

                printf("Digite o Número de Pontos Turísticos:\n");
                scanf("%d", &pontos_turisticos_carta01);

                densidade_populacional_carta01 = populacao_carta01/area_carta01;

                PIB_per_Capita_carta01 = pib_carta01/populacao_carta01;

                printf("Cadastro realizado com sucesso!\n");

                // imprimindo resultados Carta 1
                printf("***************************************************************************\n");
                printf("Estado: %s\n", estado_carta01);
                printf("Código da carta: %s%s\n", estado_carta01, codigo_da_carta01);
                printf("Nome da Cidade: %s\n", nome_da_cidade_carta01);
                printf("População: %d\n", populacao_carta01);
                printf("Área: %.2f km²\n", area_carta01);
                printf("PIB: %.2f bilhões de reais\n", pib_carta01);
                printf("Pontos Turísticos: %d\n", pontos_turisticos_carta01);
                printf("Densidade Populacional: %f\n", densidade_populacional_carta01);
                printf("PIB per Capita: %f\n", PIB_per_Capita_carta01);


                printf("***************************************************************************\n");

                // variaveis Carta 2
                char estado_carta02[3];
                char codigo_da_carta02[4];
                char nome_da_cidade_carta02[15];
                int populacao_carta02;
                float area_carta02;
                float pib_carta02;
                int pontos_turisticos_carta02;
                float densidade_populacional_carta02;
                float PIB_per_Capita_carta02;

                // Cadastro da Carta 2
                printf("Digite o Estado:\n");
                scanf("%2s", &estado_carta02);

                printf("Digite o Código da carta\n");
                scanf("%3s", &codigo_da_carta02);

                printf("Digite o Nome da Cidade\n");
                scanf("%14s", &nome_da_cidade_carta02);

                printf("Digite a População:\n");
                scanf("%d", &populacao_carta02);

                printf("Digite a Área (em km²):\n");
                scanf("%f", &area_carta02);

                printf("Digite o PIB:\n");
                scanf("%f", &pib_carta02);

                printf("Digite o Número de Pontos Turísticos:\n");
                scanf("%d", &pontos_turisticos_carta02);

                densidade_populacional_carta02 = populacao_carta02/area_carta02;

                PIB_per_Capita_carta02 = pib_carta02/populacao_carta02;

                printf("Cadastro realizado com sucesso!\n");

                // imprimindo resultados Carta 2
                printf("***************************************************************************\n");
                printf("Estado: %s\n", estado_carta02);
                printf("Código da carta: %s%s\n", estado_carta02, codigo_da_carta02);
                printf("Nome da Cidade: %s\n", nome_da_cidade_carta02);
                printf("População: %d\n", populacao_carta02);
                printf("Área: %.2f km²\n", area_carta02);
                printf("PIB: %.2f bilhões de reais\n", pib_carta02);
                printf("Pontos Turísticos: %d\n", pontos_turisticos_carta02);
                printf("Densidade Populacional: %f\n", densidade_populacional_carta02);
                printf("PIB per Capita: %f\n", PIB_per_Capita_carta02);

                printf("***************************************************************************\n");


                //  COMPARAÇÂO ENTRE CARTAS

                // Apresenta a quantidade de pessoas em cada carta
                printf("Carta 1 %s(%s) %d\n Carta 2 %s(%s) %d\n", nome_da_cidade_carta01, estado_carta01, populacao_carta01, nome_da_cidade_carta02, estado_carta02, populacao_carta02);

                // faz a comparação e apresenta o resultado
                if(populacao_carta01>populacao_carta02){
                    printf("resultado: Carta 1 (%s) Venceu com base na população %d\n", nome_da_cidade_carta01, populacao_carta01);
                } else {
                    printf("resultado: Carta 2 (%s) Venceu com base na população %d\n", nome_da_cidade_carta02, populacao_carta02);
                }

    return 0;
}
