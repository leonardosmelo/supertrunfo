#include <stdio.h>
 
int main() {

    /*
      Este programa faz a leitura de informacoes de cidades e as exibe no final das entradas, serao inseridas informacoes de duas cidades
    */

    // declaracao de variaveis para dois armazenamentos simples

    // primeira carta

    char estado1[2] ="";
    char codigo1[4] = "";
    char cidade1[100] = "";
    int populacao1 = 12345;
    float area1 = 345.678;
    float pib1 = 12567.99;
    int pontosturisticos1 = 20;

    // segunda carta

    char estado2[2] ="";
    char codigo2[4] = "";
    char cidade2[100] = "";
    int populacao2 = 123456;
    float area2 = 234.345;
    float pib2 = 234.567;
    int pontosturisticos2 = 100;

    printf("\n");
    printf("\n");
    printf("\n");
    printf("========================================================================================= \n");
    printf("Este eh o Jogo Super Trunfo, desenvolvido em C \n");
    printf("========================================================================================= \n");
    printf("\n");
    printf("\n");

    printf("Voce tera que cadastrar as informacoes de DUAS Cidades, conforme solicitacao a seguir... \n");
    printf("\n");

    // aqui iniciamos a coleta de informações da primeira carta

    printf("\n");
    printf("Primeiro, informe o Estado, utilizando uma letra de 'A' a 'H' (representando um dos oito estatos) \n");
    printf("Estado: ");
    scanf("%s", estado1);

    printf("\n");
    printf("Agora informe o Codigo da Carta, utilizando a letra do Estado 'A' a 'H' seguido de um numero de 01 a 04 (ex. A01, B03)\n");
    printf("Codigo da Carta: ");
    scanf("%s", codigo1);

    printf("\n");
    printf("Agora informe o Nome da Cidade, com ate 20 caracteres \n");
    printf("Nome da Cidade: ");
    setbuf (stdin, NULL);
    fgets(cidade1, 100, stdin);

    printf("\n");
    printf("Informe a Populacao: ");
    scanf("%d", &populacao1);

    printf("\n");
    printf("Informe a Area (em km2): ");
    scanf("%f", &area1);

    printf("\n");
    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("\n");
    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    // agora vamos exibir os resultados da coleta de dados da carta 1

    printf("\n");
    printf("\n");
    printf("\n");
    printf("========================================================================================= \n");
    printf("As informacoes cadastradas sao as seguintes: \n");
    printf("========================================================================================= \n");
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Cogigo: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f km2\n", area1);
    printf("PIB: %f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("========================================================================================= \n");
 
    // aqui iniciamos a coleta de informações da segunda carta

    printf("\n");
    printf("\n");
    printf("Agora vamos cadastrar a segunda carta!!! \n");
    printf("\n");

    printf("Informe o Estado, utilizando uma letra de 'A' a 'H' (representando um dos oito estatos) \n");
    printf("Estado: ");
    scanf("%s", estado2);

    printf("\n");
    printf("Agora informe o Codigo da Carta, utilizando a letra do Estado 'A' a 'H' seguido de um numero de 01 a 04 (ex. A01, B03)\n");
    printf("Codigo da Carta: ");
    scanf("%s", codigo2);

    printf("\n");
    printf("Agora informe o Nome da Cidade, com ate 20 caracteres \n");
    printf("Nome da Cidade: ");
    setbuf (stdin, NULL);
    fgets(cidade2, 100, stdin);

    printf("\n");
    printf("Informe a Populacao: ");
    scanf("%d", &populacao2);

    printf("\n");
    printf("Informe a Area (em km2): ");
    scanf("%f", &area2);

    printf("\n");
    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("\n");
    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    // agora vamos exibir os resultados da coleta de dados da carta 2

    printf("\n");
    printf("\n");
    printf("\n");
    printf("========================================================================================= \n");
    printf("As informacoes cadastradas sao as seguintes: \n");
    printf("========================================================================================= \n");
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Cogigo: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f km2\n", area2);
    printf("PIB: %f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("========================================================================================= \n");

    return 0;
}