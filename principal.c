#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{

    printf("Cadastro das cartas Super Trunfo\n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Definindo as variáveis digitadas pelo usuário para a carta 1

    char codigo_estado_1;
    char codigo_cidade_1[2];
    char nome_cidade_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turisticos_1;

    // Definindo as variáveis digitadas pelo usuário para a carta 2

    char codigo_estado_2;
    char codigo_cidade_2[2];
    char nome_cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;

    // Definindo as variáveis calculadas pelo sistema para a carta 1

    float densidade_populacional_1;
    float pib_per_capita_1;
    float super_poder_1;

    // Definindo as variáveis calculadas pelo sistema para a carta 1

    float densidade_populacional_2;
    float pib_per_capita_2;
    float super_poder_2;

    // variavel para conversao do valor de pib para calculo do pib per capita

    float bilhao = 1000000000;

    // Entrada dos dados da carta 1

    // Codigo do Estado
    printf("Digite o Código do Estado (A a H) da carta 1:\n");
    scanf(" %c", &codigo_estado_1);

    // Codigo da Cidade
    printf("Digite o Código da Cidade (01 a 04) da carta 1:\n");
    scanf(" %s", &codigo_cidade_1);

    // Nome da Cidade
    printf("Digite o Nome da Cidade da carta 1:\n");
    scanf(" %s", &nome_cidade_1);

    // Numero da Populaçao
    printf("Digite a População da Cidade da carta 1 (ex. 250000):\n");
    scanf(" %d", &populacao_1);

    // Área da Cidade (km2)
    printf("Digite a Área da Cidade em km² da carta 1 (ex. 350.00):\n");
    scanf(" %f", &area_1);

    // PIB da Cidade
    printf("Digite o Valor do PIB em bilhões de reais da carta 1 (ex. 2.36):\n");
    scanf(" %f", &pib_1);

    // Pontos Turísticos da Cidade
    printf("Digite a Quantidade de Pontos Turísticos da Cidade da carta 1 (ex. 10):\n");
    scanf(" %d", &pontos_turisticos_1);

    // Calculo do PIB per capita da carta 1
    pib_per_capita_1 = (pib_1 * bilhao) / populacao_1;

    // Calculo da densidade populacional da carta 1
    densidade_populacional_1 = populacao_1 / area_1;

    // Calculo do Super Poder da carta 1
    super_poder_1 = (populacao_1 + area_1 + pib_1 + pontos_turisticos_1 + pib_per_capita_1) - densidade_populacional_1;

    // Exibiçao dos dados cadastrados da carta 1

    printf("Dados Cadastrados da Carta 1:\n");
    printf("Estado: %c\n", codigo_estado_1);
    printf("Código da Carta: %c%s\n", codigo_estado_1, codigo_cidade_1);
    printf("Nome da Cidade: %s\n", nome_cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidade_populacional_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);
    printf("Super Poder: %.2f\n", super_poder_1);

    // Entrada dos dados da carta 2

    // Codigo do Estado
    printf("Digite o Código do Estado (A a H) da carta 2:\n");
    scanf(" %c", &codigo_estado_2);

    // Codigo da Cidade
    printf("Digite o Código da Cidade (01 a 04) da carta 2:\n");
    scanf(" %s", &codigo_cidade_2);

    // Nome da Cidade
    printf("Digite o Nome da Cidade da carta 2:\n");
    scanf(" %s", &nome_cidade_2);

    // Numero da Populaçao
    printf("Digite a População da Cidade da carta 2 (ex. 250000):\n");
    scanf(" %d", &populacao_2);

    // Área da Cidade (km2)
    printf("Digite a Área da Cidade em km² da carta 2 (ex. 350.00):\n");
    scanf(" %f", &area_2);

    // PIB da Cidade
    printf("Digite o Valor do PIB em bilhões de reais da carta 2 (ex. 2.36):\n");
    scanf(" %f", &pib_2);

    // Pontos Turísticos da Cidade
    printf("Digite a Quantidade de Pontos Turísticos da Cidade da carta 2 (ex. 10):\n");
    scanf(" %d", &pontos_turisticos_2);

    // Calculo do PIB per capita da carta 2
    pib_per_capita_2 = (pib_2 * bilhao) / populacao_2;

    // Calculo da densidade populacional da carta 2
    densidade_populacional_2 = populacao_2 / area_2;

    // Calculo do Super Poder da carta 2
    super_poder_2 = (populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + pib_per_capita_2) - densidade_populacional_2;

    // Exibiçao dos dados cadastrados da carta 2

    printf("Dados Cadastrados da Carta 2:\n");
    printf("Estado: %c\n", codigo_estado_2);
    printf("Código da Carta: %c%s\n", codigo_estado_2, codigo_cidade_2);
    printf("Nome da Cidade: %s\n", nome_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidade_populacional_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Super Poder: %.2f\n", super_poder_2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // printf("Populaçao cidade 1: %d\n", populacao_1);
    // printf("Populaçao cidade 2: %d\n", populacao_2);

    // if (populacao_1 > populacao_2) {
    //     printf("Cidade 1 tem maior população.\n");
    //     printf("A cidade vencedora é: %s\n", nome_cidade_1);
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    //     printf("A cidade vencedora é: %s\n", nome_cidade_2);
    // }

    // Variavel para armazenar o atributo escolhido para comparação.
    int atributoEscolhido1, atributoEscolhido2;

    // Variavel para armazenar os resultados das comparaçoes
    int resultado1, resultado2;

    printf("Selecione o primeiro atributo a ser comparado:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    printf("Digite sua escolha:\n");
    scanf("%d", &atributoEscolhido1);

    
    printf("Selecione o segundo atributo a ser comparado:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    printf("Digite sua escolha:\n");
    scanf("%d", &atributoEscolhido2);

    if(atributoEscolhido1 == atributoEscolhido2) {
        printf("Selecione um atributo diferente do primeiro!\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per capita\n");
        printf("7. Super Poder\n");
        printf("Digite sua escolha:\n");
        scanf("%d", &atributoEscolhido2);
    }

    switch (atributoEscolhido1)
    {
    case 1:
        printf("Atributo 1 escolhido: Populaçao\n");
        printf("Populaçao cidade 1: %d\n", populacao_1);
        printf("Populaçao cidade 2: %d\n", populacao_2);
        resultado1 = populacao_1 > populacao_2 ? 1 : 0;
        break;
    case 2:
        printf("Atributo 1 escolhido: Área\n");
        printf("Área cidade 1: %.2f km²\n", area_1);
        printf("Área cidade 2: %.2f km²\n", area_2);
        resultado1 = area_1 > area_2 ? 1 : 0;
        break;
    case 3:
        printf("Atributo 1 escolhido: PIB\n");
        printf("PIB cidade 1: %.2f bilhões de reais\n", pib_1);
        printf("PIB cidade 2: %.2f bilhões de reais\n", pib_2);
        resultado1 = pib_1 > pib_2 ? 1 : 0;
        break;
    case 4:
        printf("Atributo 1 escolhido: Pontos Turísticos\n");
        printf("Pontos Turísticos cidade 1: %d\n", pontos_turisticos_1);
        printf("Pontos Turísticos cidade 2: %d\n", pontos_turisticos_2);
        resultado1 = pontos_turisticos_1 > pontos_turisticos_2 ? 1 : 0;
        break;
    case 5:
        printf("Atributo 1 escolhido: Densidade Populacional\n");
        printf("Densidade Populacional cidade 1: %.2f pessoas/km²\n", densidade_populacional_1);
        printf("Densidade Populacional cidade 2: %.2f pessoas/km²\n", densidade_populacional_2);
        resultado1 = densidade_populacional_1 < densidade_populacional_2 ? 1 : 0;
        break;
    case 6:
        printf("Atributo 1 escolhido: PIB per capita\n");
        printf("PIB per capita cidade 1: %.2f reais\n", pib_per_capita_1);
        printf("PIB per capita cidade 2: %.2f reais\n", pib_per_capita_2);
        resultado1 = pib_per_capita_1 > pib_per_capita_2 ? 1 : 0;
        break;
    case 7:
        printf("Atributo 1 escolhido: Super Poder\n");
        printf("Super Poder cidade 1: %.2f\n", super_poder_1);
        printf("Super Poder cidade 2: %.2f\n", super_poder_2);
        resultado1 = super_poder_1 > super_poder_2 ? 1 : 0;
        break;
    
    default:
        printf("Opçao selecionada e invalida\n");
        break;
    }

    switch (atributoEscolhido2)
    {
    case 1:
        printf("Atributo 2 escolhido: Populaçao\n");
        printf("Populaçao cidade 1: %d\n", populacao_1);
        printf("Populaçao cidade 2: %d\n", populacao_2);
        resultado2 = populacao_1 > populacao_2 ? 1 : 0;
        break;
    case 2:
        printf("Atributo 2 escolhido: Área\n");
        printf("Área cidade 1: %.2f km²\n", area_1);
        printf("Área cidade 2: %.2f km²\n", area_2);
        resultado2 = area_1 > area_2 ? 1 : 0;
        break;
    case 3:
        printf("Atributo 2 escolhido: PIB\n");
        printf("PIB cidade 1: %.2f bilhões de reais\n", pib_1);
        printf("PIB cidade 2: %.2f bilhões de reais\n", pib_2);
        resultado2 = pib_1 > pib_2 ? 1 : 0;
        break;
    case 4:
        printf("Atributo 2 escolhido: Pontos Turísticos\n");
        printf("Pontos Turísticos cidade 1: %d\n", pontos_turisticos_1);
        printf("Pontos Turísticos cidade 2: %d\n", pontos_turisticos_2);
        resultado2 = pontos_turisticos_1 > pontos_turisticos_2 ? 1 : 0;
        break;
    case 5:
        printf("Atributo 2 escolhido: Densidade Populacional\n");
        printf("Densidade Populacional cidade 1: %.2f pessoas/km²\n", densidade_populacional_1);
        printf("Densidade Populacional cidade 2: %.2f pessoas/km²\n", densidade_populacional_2);
        resultado2 = densidade_populacional_1 < densidade_populacional_2 ? 1 : 0;
        break;
    case 6:
        printf("Atributo 2 escolhido: PIB per capita\n");
        printf("PIB per capita cidade 1: %.2f reais\n", pib_per_capita_1);
        printf("PIB per capita cidade 2: %.2f reais\n", pib_per_capita_2);
        resultado2 = pib_per_capita_1 > pib_per_capita_2 ? 1 : 0;
        break;
    case 7:
        printf("Atributo 2 escolhido: Super Poder\n");
        printf("Super Poder cidade 1: %.2f\n", super_poder_1);
        printf("Super Poder cidade 2: %.2f\n", super_poder_2);
        resultado2 = super_poder_1 > super_poder_2 ? 1 : 0;
        break;
    
    default:
        printf("Opçao selecionada e invalida\n");
        break;
    }

    return 0;
}
