#include <stdio.h>

int main () {

    // Carta Numero 1
    char Estado1[20] = "Ceara";
    char Codigo[5] = "A01";
    char Cidade[50] = "Fortaleza";
    int Populacao = 12325000;
    float Area = 1521.11;
    float PIB = 699.28;
    int NumeroDePontosTuristicos = 50;
    float PIBpercapita1;
    float Densidade1;

    // Carta Numero 2

    char Estado2[20] = "Pernambuco";
    char Codigo2[5] = "A02";
    char Cidade2[50] = "Recife";
    int Populacao2 = 6748000;
    float Area2 = 200.25;
    float PIB2 = 300.50;
    int NumeroDePontosTuristicos2 = 20;
    float PIBpercapita2;
    float Densidade2;

    printf("\nCarta Numero 1\n");

    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %d habitantes\n", Populacao);
    printf("Area: %.2f km²\n", Area);
    printf("PIB: %.2f bilhoes de reais\n", PIB);
    printf("Numero de pontos turisticos: %d\n", NumeroDePontosTuristicos);

    printf("\nCarta Numero 2\n");

    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d habitantes\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", NumeroDePontosTuristicos2);

    printf("\nCadastro Carta 1 \n");

    printf("Digite o nome do estado: ");
    scanf("%s", Estado1);

    printf("Digite o codigo do estado: ");
    scanf("%s", Codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", Cidade);

    printf("Digite a populacao: ");
    scanf("%d", &Populacao);

    printf("Digite a area: ");
    scanf("%f", &Area);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &NumeroDePontosTuristicos);

    
    Densidade1 = Populacao / Area;
    PIBpercapita1 = PIB / Populacao;

    printf(" a densidade populacional é: %.2f habitantes por km2\n", Densidade1);
    printf(" o PIB per capita é: %.2f reais\n", PIBpercapita1);
    // Cadastro Carta 2

    printf("\nCadastro Carta 2 \n");

    printf("Digite o nome do estado: ");
    scanf("%s", Estado2);

    printf("Digite o codigo do estado: ");
    scanf("%s", Codigo2);           

    printf("Digite o nome da cidade: ");
    scanf("%s", Cidade2);   

    printf("Digite a populacao: ");
    scanf("%d", &Populacao2);   

    printf("Digite a area: ");
    scanf("%f", &Area2);            
    
    printf("Digite o PIB: ");
    scanf("%f", &PIB2); 
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &NumeroDePontosTuristicos2);      
    
    Densidade2 = Populacao2 / Area2;
    PIBpercapita2 = PIB2 / Populacao2;

    printf(" a densidade populacional é: %.2f habbitantes por km2\n", Densidade2);
    printf(" o PIB per capita é: %.2f reais\n", PIBpercapita2);






    return 0;

}
