#include <stdio.h> 

int main() {
//Desafio Super Trunfo - Países
//Cadastro da 1º Carta Super Trunfo - Variáveis da Carta 1

//---------- Carta: 1 ---------
int carta1 = 1 , população1 = 287.023 , pontos1 = 9;
char codigo1 [5] = "B01", estado1 [25] = "Brasília" , cidade1 [50] = "Ceilândia";
float area1 = 29,10, pib1 =  20;

// Cadastro da Carta 1
    printf("Cadastro da Carta 1\n");

    printf("Digite o número da carta: ");
    scanf("%d", &carta1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o estado: ");
    scanf(" %[^\n]", estado1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a populaçao(em habitantes):");
    scanf("%d", &população1);

    printf("Digite a área (em km²):");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais):");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);


// Exibição da Carta 1
printf("CARTA 1\n");
printf("Carta: %d\n", carta1);
printf("População: %d mil habitantes\n", população1);
printf("Pontos Turísticos: %d\n", pontos1);
printf("Codigo: %s\n", codigo1);
printf("Estado: %s\n", estado1);
printf("Cidade: %s\n", cidade1);
printf("Área: %.2f km²\n",area1);
printf("PIB: %.2f bilhoes de reais\n" , pib1);

//Cadastro da 2° Carta Super Trunfo - Variáveis da Carta 2

//---------- Carta: 2 ---------

// Variáveis da Carta 2
int carta2 = 2 , população2 = 2.315, pontos2 = 12;
char codigo2 [5] = "M02", estado2[15] = "Minas Gerais" , cidade2 [20] = "Belo Horizonte";
float area2 = 331.000, pib2 =  105.000;

  
    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2\n");

    printf("Digite o número da carta: ");
    scanf("%d", &carta2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o estado: ");
    scanf(" %[^\n]", estado2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população (em habitantes): ");
    scanf("%d", &população2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    //Exibição da Carta 2
printf("CARTA2\n");
printf("Carta: %d\n", carta2);
printf("População: %d milhoes habitantes\n", população2);
printf("Pontos Turísticos: %d\n", pontos2);
printf("Codigo: %s\n", codigo2);
printf("Estado: %s\n", estado2);
printf("Cidade: %s\n", cidade2);
printf("Área: %.2f km²\n",area2);
printf("PIB: %.2f bilhoes de reais\n" , pib2);

return 0;

}
