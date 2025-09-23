#include <stdio.h>

// Desafio Super Trunfo - Nível Aventureiro
// Tema 1 - Cadastro das cartas
/* Objetivo:
    No nível aventureiro, além de mostrar as cartas com as entradas de dados (Nível Novato), 
    o programa deve calcular a Densidade Populacional e calcular o PIB per Capita.
    Fórmula da Densidade Populacional = População / Área
    Fórmula do PIB per Capita = PIB / População
*/

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  // DECLARANDO E INICIALIZANDO DAS VARIÁVEIS
  char estado_carta1, estado_carta2;
  char cod_carta1[4], cod_carta2[4], cidade_carta1[20], cidade_carta2[20];
  int populacao_carta1, qtde_pontos_turistico_carta1, populacao_carta2, qtde_pontos_turistico_carta2;
  float area_carta1, pib_carta1, area_carta2, pib_carta2;
  float densidade_populacional_carta1, densidade_populacional_carta2;
  float pib_perCapita_carta1, pib_perCapita_carta2;

  // INFORMAÇÕES PARA O USUÁRIO
  printf("BENVINDO AO JOGO DE SUPER TRUNFO\n\n");

  // Área para entrada de dados

  // LENDO OS DADOS INSERIDOS PELO USUÁRIO
  // DADOS DA CARTA 01
  printf("ENTRE COM OS DADOS DA CARTA 1\n");
  printf("Digite uma letra de 'A' à 'H' para representar o estado da carta: ");
  scanf(" %c", &estado_carta1);

  printf("Informação: o código da carta é composto da letra do estado, digitado acima, mais um número de 01 à 04 (Ex: A01, B03)\n");
  printf("Digite o codigo da carta: ");
  scanf(" %3s", cod_carta1);

  printf("Digite o nome da cidade: ");
  scanf(" %20s", cidade_carta1);

  printf("Entre com a número de habitantes desta cidade: ");
  scanf(" %d", &populacao_carta1);

  printf("Entre com a àrea da cidade (em Km²): ");
  scanf(" %f", &area_carta1);

  printf("Entre com o PIB (Produto Interno Bruto) da cidade: ");
  scanf(" %f", &pib_carta1);

  printf("Entre com a quantidade de Pontos Turísticos da cidade: ");
  scanf(" %d", &qtde_pontos_turistico_carta1);

  
  // DADOS DA CARTA 02
  printf("\nENTRE COM OS DADOS DA CARTA 2\n");
  printf("Digite uma letra de 'A' à 'H' para representar o estado da carta: ");
  scanf(" %c", &estado_carta2);

  printf("Informação: o código da carta é composto da letra do estado, digitado acima, mais um número de 01 à 04 (Ex: A01, B03)\n");
  printf("Digite o codigo da carta: ");
  scanf(" %3s", cod_carta2);

  printf("Digite o nome da cidade: ");
  scanf(" %20s", cidade_carta2);

  printf("Entre com a número de habitantes desta cidade: ");
  scanf("%d", &populacao_carta2);

  printf("Entre com a àrea da cidade (em Km²): ");
  scanf(" %f", &area_carta2);

  printf("Entre com o PIB (Produto Interno Bruto) da cidade: ");
  scanf(" %f", &pib_carta2);

  printf("Entre com a quantidade de Pontos Turísticos da cidade: ");
  scanf(" %d", &qtde_pontos_turistico_carta2);

  
  //Efetuando os cálculos de densidade populacional e pib per capita das cartas
  densidade_populacional_carta1 = (float)(populacao_carta1 / area_carta1);
  pib_perCapita_carta1 = (float)(pib_carta1 / populacao_carta1);

  densidade_populacional_carta2 = (float)(populacao_carta2/ area_carta2);
  pib_perCapita_carta2 = (float)(pib_carta2 / populacao_carta2);

  // Área para exibição dos dados da cidade

  // EXIBINDO AS INFORMAÇÕES DAS CARTAS
  printf("\nInformações das cartas\n");
  // CARTA 1
  printf("Carta 1\n");
  printf("Estado ..................: %c\n", estado_carta1);
  printf("Código ..................: %s\n", cod_carta1);
  printf("Nome da cidade ..........: %s\n", cidade_carta1);
  printf("População ...............: %d\n", populacao_carta1);
  printf("Área ....................: %.2f km²\n", area_carta1);
  printf("PIB .....................: %.3f bilhões de reais\n", pib_carta1 / 1e9);
  printf("Nº de pontos turísticos .: %d\n", qtde_pontos_turistico_carta1);
  printf("Densidade Populacional ..: %.2f hab/km²\n", densidade_populacional_carta1);
  printf("PIB per Capita ..........: %.2f reais\n\n", pib_perCapita_carta1);


  // CARTA 2
  printf("Carta 2\n");
  printf("Estado ..................: %c\n", estado_carta2);
  printf("Código ..................: %s\n", cod_carta2);
  printf("Nome da cidade ..........: %s\n", cidade_carta2);
  printf("População ...............: %d\n", populacao_carta2);
  printf("Área ....................: %.2f km²\n", area_carta2);
  printf("PIB .....................: %.3f bilhões de reais\n", pib_carta2 / 1e9);
  printf("Nº de pontos turísticos .: %d\n", qtde_pontos_turistico_carta2);
  printf("Densidade Populacional ..: %.2f hab/km²\n", densidade_populacional_carta2);
  printf("PIB per Capita ..........: %.2f reais\n\n", pib_perCapita_carta2);
  

return 0;
} 
