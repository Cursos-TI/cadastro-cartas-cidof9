#include <stdio.h> 
// Inclui a biblioteca padrão de entrada e saída, que permite usar funções como printf e scanf

int main() {
  // Função principal onde a execução do programa começa

  // Declaração de variáveis para armazenar dados sobre duas cartas diferentes
  // Cada variável armazena um tipo específico de informação, como texto (char) ou número (int, float)

  char estado1[10];    // Armazena o nome do estado da carta 1 (até 9 caracteres + '\0')
  char estado2[10];    // Estado da carta 2
  char codigo1[10];    // Código identificador da carta 1
  char codigo2[10];    // Código da carta 2
  char carta1[10];     // (Não usado no código, mas definido)
  char carta2[10];     // (Não usado no código, mas definido)
  char cidade1[50];    // Nome da cidade da carta 1 (até 49 caracteres + '\0')
  char cidade2[50];    // Nome da cidade da carta 2
  int populacao1;      // População da cidade da carta 1 (número inteiro)
  int populacao2;      // População da cidade da carta 2
  float areakm1;       // Área em km² da cidade da carta 1 (número com casa decimal)
  float areakm2;       // Área em km² da carta 2
  float pib1;          // PIB (Produto Interno Bruto) da cidade da carta 1
  float pib2;          // PIB da cidade da carta 2
  int pontos1;         // Número de pontos turísticos da carta 1
  int pontos2;         // Número de pontos turísticos da carta 2

  // Agora o programa pede para o usuário digitar as informações de cada carta, usando scanf para ler os dados do teclado

  printf("Digite o Estado da carta 1 \n");
  scanf("%s", estado1); // Lê uma palavra (string) e armazena em estado1
  printf("Digite o codigo da carta 1 \n");
  scanf("%s", codigo1);
  printf("Digite a cidade da Carta 1 \n");
  scanf("%s", cidade1);
  printf("Digite a populacao da carta 1 \n");
  scanf("%d", &populacao1);  // Lê um número inteiro e armazena em populacao1 (usar & para passar o endereço da variável)
  printf("Digite a area em km² da carta 1 \n");
  scanf("%f", &areakm1);     // Lê um número decimal (float) para areakm1
  printf("Digite o PIB da carta 1 \n");
  scanf("%f", &pib1);
  printf("Digite o numero de pontos turisticos da carta 1 \n");
  scanf("%d", &pontos1);

  // Repetição do processo para a carta 2
  printf("Digite o Estado da carta 2 \n");
  scanf("%s", estado2);
  printf("Digite o codigo da carta 2 \n");
  scanf("%s", codigo2);
  printf("Digite a cidade da Carta 2 \n");
  scanf("%s", cidade2);
  printf("Digite a populacao da carta 2 \n");
  scanf("%d", &populacao2);
  printf("Digite a area em km² da carta 2 \n");
  scanf("%f", &areakm2);
  printf("Digite o PIB da carta 2 \n");
  scanf("%f", &pib2);
  printf("Digite o numero de pontos turisticos da carta 2 \n");
  scanf("%d", &pontos2);

  // Agora o programa exibe na tela todas as informações digitadas das duas cartas
  printf("\n--- CARTA 1 ---\n");
  printf("Estado: %s\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulacao: %d\nArea em km²: %.2f\nPIB: %.2f\nPontos turisticos: %d\n",
         estado1, codigo1, cidade1, populacao1, areakm1, pib1, pontos1);

  printf("\n--- CARTA 2 ---\n");
  printf("Estado:%s\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulacao: %d\nArea em km²: %.2f\nPIB: %.2f\nPontos turisticos: %d\n",
         estado2, codigo2, cidade2, populacao2, areakm2, pib2, pontos2);

  // Finaliza a execução do programa retornando 0 para indicar que tudo ocorreu bem
  return 0;
}
