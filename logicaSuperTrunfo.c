#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

          int opcao;

          printf("Menu Principal\n");
          printf("1. Iniciar Jogo\n");
          printf("2. Ver Regras\n");
          printf("3. Sair\n");
          printf("Escolha uma opção: \n");
          scanf("%d", &opcao);

          switch (opcao) {
            case 1:
              printf("Iniciando o jogo...\n");

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
                int opcaoComparacao;

                  printf("Escolha uma opção:\n");
                  printf("1. População\n");
                  printf("2. Área\n");
                  printf("3. PIB\n");
                  printf("4. Pontos Turísticos\n");
                  printf("5. Densidade Populacional\n");
                  printf("6. PIB per Capita\n");
                  scanf("%d", &opcaoComparacao);

                switch (opcaoComparacao) {
                  case 1:
                    // Apresenta a quantidade de pessoas em cada carta
                    printf("Comparação baseada na quantidade de população \n Carta 1 %s(%s) %d\n Carta 2 %s(%s) %d\n", nome_da_cidade_carta01, estado_carta01, populacao_carta01, nome_da_cidade_carta02, estado_carta02, populacao_carta02);
                    // faz a comparação e apresenta o resultado da população
                    if(populacao_carta01>populacao_carta02){
                        printf("resultado: Carta 1 (%s) Venceu com base na população %d\n", nome_da_cidade_carta01, populacao_carta01);
                    }else if(populacao_carta01==populacao_carta02) {
                        printf("resultado: Empate!\n");
                    } else {
                        printf("resultado: Carta 2 (%s) Venceu com base na população %d\n", nome_da_cidade_carta02, populacao_carta02);
                    }
                    break;
                  case 2:
                    // Apresenta a quantidade de pessoas em cada carta
                    printf("Comparação baseada na quantidade da área \n Carta 1 %s(%s) %d\n Carta 2 %s(%s) %d\n", nome_da_cidade_carta01, estado_carta01, area_carta01, nome_da_cidade_carta02, estado_carta02, area_carta02);
                    // faz a comparação e apresenta o resultado da área
                    if(area_carta01>area_carta02){
                        printf("resultado: Carta 1 (%s) Venceu com base na área %d\n", nome_da_cidade_carta01, area_carta01);
                    }else if(area_carta01==area_carta02) {
                        printf("resultado: Empate!\n");
                    } else {
                        printf("resultado: Carta 2 (%s) Venceu com base na área %d\n", nome_da_cidade_carta02, area_carta02);
                    }
                    break;
                  case 3:
                    // Apresenta a quantidade de pessoas em cada carta
                    printf("Comparação baseada na quantidade do pib \n Carta 1 %s(%s) %d\n Carta 2 %s(%s) %d\n", nome_da_cidade_carta01, estado_carta01, pib_carta01, nome_da_cidade_carta02, estado_carta02, pib_carta02);
                    // faz a comparação e apresenta o resultado do pib
                    if(pib_carta01>pib_carta02){
                        printf("resultado: Carta 1 (%s) Venceu com base no pib %d\n", nome_da_cidade_carta01, pib_carta01);
                    }else if(pib_carta01==pib_carta02) {
                        printf("resultado: Empate!\n");
                    } else {
                        printf("resultado: Carta 2 (%s) Venceu com base no pib %d\n", nome_da_cidade_carta02, pib_carta02);
                    }
                    break;
                  case 4:
                    // Apresenta a quantidade de pessoas em cada carta
                    printf("Comparação baseada na quantidade de pontos turisticos \n Carta 1 %s(%s) %d\n Carta 2 %s(%s) %d\n", nome_da_cidade_carta01, estado_carta01, pontos_turisticos_carta01, nome_da_cidade_carta02, estado_carta02, pontos_turisticos_carta02);
                    // faz a comparação e apresenta o resultado de pontos turisticos
                    if(pontos_turisticos_carta01>pontos_turisticos_carta02){
                        printf("resultado: Carta 1 (%s) Venceu com base nos pontos turisticos %d\n", nome_da_cidade_carta01, pontos_turisticos_carta01);
                    }else if(pontos_turisticos_carta01==pontos_turisticos_carta02) {
                        printf("resultado: Empate!\n");
                    } else {
                        printf("resultado: Carta 2 (%s) Venceu com base nos pontos turisticos %d\n", nome_da_cidade_carta02, pontos_turisticos_carta02);
                    }
                    break;
                  case 5:
                    // Apresenta a quantidade de pessoas em cada carta
                    printf("Comparação baseada na quantidade de Densidade Populacional \n Carta 1 %s(%s) %d\n Carta 2 %s(%s) %d\n", nome_da_cidade_carta01, estado_carta01, densidade_populacional_carta01, nome_da_cidade_carta02, estado_carta02, densidade_populacional_carta02);
                    // faz a comparação e apresenta o resultado de pontos turisticos
                    if(densidade_populacional_carta01<densidade_populacional_carta02){
                        printf("resultado: Carta 1 (%s) Venceu com base na Densidade Populacional %d\n", nome_da_cidade_carta01, densidade_populacional_carta01);
                    }else if(densidade_populacional_carta01==densidade_populacional_carta02) {
                        printf("resultado: Empate!\n");
                    } else {
                        printf("resultado: Carta 2 (%s) Venceu com base na Densidade Populacional %d\n", nome_da_cidade_carta02, densidade_populacional_carta02);
                    }
                    break;
                  case 6:
                      // Apresenta a quantidade de pessoas em cada carta
                    printf("Comparação baseada na quantidade de PIB per Capita \n Carta 1 %s(%s) %d\n Carta 2 %s(%s) %d\n", nome_da_cidade_carta01, estado_carta01, PIB_per_Capita_carta01, nome_da_cidade_carta02, estado_carta02, PIB_per_Capita_carta02);
                    // faz a comparação e apresenta o resultado de pontos turisticos
                    if(PIB_per_Capita_carta01>PIB_per_Capita_carta02){
                        printf("resultado: Carta 1 (%s) Venceu com base em PIB per Capita %d\n", nome_da_cidade_carta01, PIB_per_Capita_carta01);
                    }else if(PIB_per_Capita_carta01==PIB_per_Capita_carta02) {
                        printf("resultado: Empate!\n");
                    } else {
                        printf("resultado: Carta 2 (%s) Venceu com base em PIB per Capita %d\n", nome_da_cidade_carta02, PIB_per_Capita_carta02);
                    }
                    break;
                  default:
                    printf("default\n");
                }





              break;
            case 2:
              printf("Regras do Jogo:\n");
              printf("A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor. \n");
              printf("2. Os dados ficam armazenados temporariamente em variáveis que ficam alocadas na memoria do dispositivo\n");
              printf("3. o jogador entra com os dados da carta 1 e o segundo jogador entra com a segunda carta o sistema ira mostrar os dados de cada carta e mostrar que ganhou \n");
              // Código para exibir as regras
              break;
            case 3:
              printf("Saindo...\n");
              break;
            default:
              printf("Opção inválida. Tente novamente.\n");
          }



    return 0;
}
