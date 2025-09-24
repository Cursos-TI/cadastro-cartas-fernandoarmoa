#include <stdio.h>

// Desafio Super Trunfo - Nível Mestre
// Tema 1 - Cadastro das cartas
/* Objetivo:
    No nível Mestre o programa deve fazer o cálculo do Super Poder, e realizar a comparação 
    dos atributos de cada carta (exceto estado, código e nome) e mostra o resultado da comparação.
    Apenas na densidade, vence a carta com menor valor, nos demais atributos vence o de maior valor.
    Além de mostrar as cartas com as entradas de dados (Nível Novato), e o calculo da Densidade 
    Populacional e calcular o PIB per Capita (Nível Aventureiro).
    Fórmula do Super Poder: População + Área + PIB + Número de pontos turísticos + PIB per capita + 
    o "inverso" da densidade (ou seja 1 / densidade).
*/

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  // DECLARANDO E INICIALIZANDO DAS VARIÁVEIS
  char estado_carta1, estado_carta2;
  char cod_carta1[4], cod_carta2[4], cidade_carta1[20], cidade_carta2[20];
  int populacao_carta1, qtde_pontos_turistico_carta1, populacao_carta2, qtde_pontos_turistico_carta2;
  int resultado_carta1  = 0, resultado_carta2 = 0;

  float area_carta1, pib_carta1, area_carta2, pib_carta2;
  float densidade_populacional_carta1, densidade_populacional_carta2;
  float pib_perCapita_carta1, pib_perCapita_carta2;
  float densidade_inversa_carta1, densidade_inversa_carta2;
  float super_poder_carta1, super_poder_carta2;

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


  //Efetuando os cálculos da densidade populacional inversa das cartas
  densidade_inversa_carta1 = 1 / densidade_populacional_carta1;
  densidade_inversa_carta2 = 1 / densidade_populacional_carta2;


  //Efetuando o cálculo do Super Poder das cartas
  super_poder_carta1 = (float)populacao_carta1 + area_carta1 + pib_carta1 + qtde_pontos_turistico_carta1 + pib_perCapita_carta1 + densidade_inversa_carta1;
  super_poder_carta2 = (float)populacao_carta2 + area_carta2 + pib_carta2 + qtde_pontos_turistico_carta2 + pib_perCapita_carta2 + densidade_inversa_carta2;

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
  printf("PIB per Capita ..........: %.2f reais\n", pib_perCapita_carta1);
  printf("Super Poder .............: %.2f\n\n", super_poder_carta1);


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
  printf("PIB per Capita ..........: %.2f reais\n", pib_perCapita_carta2);
  printf("Super Poder .............: %.2f\n\n", super_poder_carta2);
  

  // COMPARANDO OS PODERES E MOSTRANDO OS RESULTADOS
  printf(" ** Comparação das cartas ** \n\n");

  //População:
  if (populacao_carta1 == populacao_carta2) {
    printf("População ...............: Atributo com mesma pontução\n");
  } else if (populacao_carta1 > populacao_carta2) {
    resultado_carta1 ++;
    printf("População ...............: Carta 1 venceu (1)\n");
  } else {
    resultado_carta2 ++;
    printf("População ...............: Carta 2 venceu (0)\n");
  };
    
  //Área:
  if (area_carta1 == area_carta2) {
    printf("Área ....................: Atributo com mesma pontução\n");
  } else if (area_carta1 > area_carta2) {
    resultado_carta1 ++;
    printf("Área ....................: Carta 1 venceu (1)\n");
  } else {
    resultado_carta2 ++;
    printf("Área ....................: Carta 2 venceu (0)\n");
  };

  //PIB:
  if (pib_carta1 == pib_carta2) {
    printf("PIB .....................: Atributo com mesma pontução\n");
  } else if (pib_carta1 > pib_carta2) {
    resultado_carta1 ++;
    printf("PIB .....................: Carta 1 venceu (1)\n");
  } else {
    resultado_carta2 ++;
    printf("PIB .....................: Carta 2 venceu (0)\n");
  };

  //Pontos Turísticos:
  if (qtde_pontos_turistico_carta1 == qtde_pontos_turistico_carta2) {
    printf("Pontos Turísticos .......: Atributo com mesma pontução\n");
  } else if (qtde_pontos_turistico_carta1 > qtde_pontos_turistico_carta2) {
    resultado_carta1 ++;
    printf("Pontos Turísticos .......: Carta 1 venceu (1)\n");
  } else {
    resultado_carta2 ++;
    printf("Pontos Turísticos .......: Carta 2 venceu (0)\n");
  };
   
  //Densidade Populacional:
  if (densidade_inversa_carta1 == densidade_inversa_carta2) {
    printf("Densidade Populacional ..: Atributo com mesma pontução\n");
  } else if (densidade_inversa_carta1 > densidade_inversa_carta2) {
    resultado_carta1 ++;
    printf("Densidade Populacional ..: Carta 1 venceu (1)\n");
  } else {
    resultado_carta2 ++;
    printf("Densidade Populacional ..: Carta 2 venceu (0)\n");
  };

  //PIB per Capita:
  if (pib_perCapita_carta1 == pib_perCapita_carta2) {
    printf("PIB per Capita ..........: %s\n", "Atributo com mesma pontução");
  } else if (pib_perCapita_carta1 > pib_perCapita_carta2) {
    resultado_carta1 ++;
    printf("PIB per Capita ..........: Carta 1 venceu (1)\n");
  } else {
    resultado_carta2 ++;
    printf("PIB per Capita ..........: Carta 2 venceu (0)\n");
  };
  
  //Super Poder:
  if (super_poder_carta1 == super_poder_carta2) {
    printf("Super Poder .............: Atributo com mesma pontução\n\n");
  } else if (super_poder_carta1 > super_poder_carta2) {
    resultado_carta1 ++;
    printf("Super Poder .............: Carta 1 venceu (1)\n\n");
  } else {
    resultado_carta2 ++;
    printf("Super Poder .............: Carta 2 venceu (0)\n\n");
  };

  //Resultado:
  if (resultado_carta1 == resultado_carta2) {
    printf(" ** PODERES EMPATADOS! ** ");
  } else if (resultado_carta1 > resultado_carta2) {
    printf(" ** VITÓRIA CARTA 1 ** ");
  } else {
    printf(" ** VITÓRIA CARTA 2 ** ");
  };


return 0;
} 
