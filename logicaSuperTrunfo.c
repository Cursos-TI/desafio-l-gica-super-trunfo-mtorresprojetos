#include <stdio.h>

int main() {
    
    // Informações da carta
    char Estado1[3];                 
    char Codigo1[5];                
    char Cidade1[21];  
    char Carta1[20] = "Carta 1";            
    unsigned long Populacao1;
    float Area1;
    double PIB1;                   
    int PontosTuristicos1;
    double densidade1;
    double PIBperCapita1;
    float SuperPoder;

    //informações da carta 2
   char Estado2[3];                 
   char Codigo2[5];                
   char Cidade2[21];  
   char Carta2[20] = "Carta 2";            
   unsigned long Populacao2;
   float Area2;
   double PIB2;                   
   int PontosTuristicos2;
   double densidade2;
   double PIBperCapita2;
   float SuperPoder2;

    // Entrada de dados
    printf("Primeira Carta:\n\nPor favor, insira uma letra para o seu Estado: \n");
    scanf("%s", Estado1);    

    printf("Agora insira um código para a carta: \n");
    scanf("%s", Codigo1);    

    printf("Insira o nome da cidade: \n");
    scanf("%s", Cidade1);    

    printf("Insira o número da população: \n");
    scanf("%lu", &Populacao1);   

    printf("Insira o tamanho do território (em km²): \n");
    scanf("%f", &Area1);

    printf("Insira o PIB (em reais): \n");
    scanf("%lf", &PIB1);      

    printf("Insira a quantidade de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos1);

    // Cálculos
    densidade1 = Populacao1 / Area1;
    PIBperCapita1 = PIB1 / Populacao1;
    SuperPoder = Populacao1 + Area1 + PIB1 + PontosTuristicos1 + densidade1 + PIBperCapita1;

    // Saída - Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: R$ %.2lf\n", PIB1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2lf\n", PIBperCapita1);
    printf("Super Poder: %.2lf\n", SuperPoder);
    printf("\n\n");

    //Perguntas da Segunda Carta
    // Entrada de dados
    printf("Segunda Carta:\n\nPor favor, insira uma letra para o seu Estado: \n");
    scanf("%s", Estado2);    

    printf("Agora insira um código para a carta: \n");
    scanf("%s", Codigo2);    

    printf("Insira o nome da cidade: \n");
    scanf("%s", Cidade2);    

    printf("Insira o número da população: \n");
    scanf("%lu", &Populacao2);   

    printf("Insira o tamanho do território (em km²): \n");
    scanf("%f", &Area2);

    printf("Insira o PIB (em reais): \n");
    scanf("%lf", &PIB2);      

    printf("Insira a quantidade de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos2);

   // Cálculos - Carta 2
   densidade2 = Populacao2 / Area2;
   PIBperCapita2 = PIB2 / Populacao2;
   SuperPoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + densidade2 + PIBperCapita2;

    // Saída - Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2lf\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2lf\n", PIBperCapita2);
    printf("Super Poder: %.2lf\n", SuperPoder2);
    printf("\n");


    printf("\n--- RESULTADO DAS COMPARAÇÕES ---\n");

printf("População: A carta %d venceu: (%d)\n", (Populacao1 > Populacao2 ? 1 : 2), (Populacao1 > Populacao2 ? 1 : 0));
printf("Área: A carta %d venceu: (%d)\n", (Area1 > Area2 ? 1 : 2), (Area1 > Area2 ? 1 : 0));
printf("PIB: A carta %d venceu: (%d)\n", (PIB1 > PIB2 ? 1 : 2), (PIB1 > PIB2 ? 1 : 0));
printf("Pontos Turísticos: A carta %d venceu: (%d)\n", (PontosTuristicos1 > PontosTuristicos2 ? 1 : 2), (PontosTuristicos1 > PontosTuristicos2 ? 1 : 0));
printf("Densidade Populacional: A carta %d venceu: (%d)\n", (densidade1 < densidade2 ? 1 : 2), (densidade1 < densidade2 ? 1 : 0));
printf("PIB per capita: A carta %d venceu: (%d)\n", (PIBperCapita1 > PIBperCapita2 ? 1 : 2), (PIBperCapita1 > PIBperCapita2 ? 1 : 0));
printf("Super Poder: A carta %d venceu: (%d)\n", (SuperPoder > SuperPoder2 ? 1 : 2), (SuperPoder > SuperPoder2 ? 1 : 0));
printf("\n");


    //Comparação IF e ELSE(composta)

    printf("\n----Comparação de cartas (Atributo: População)----\n");

    printf("Carta 1 - %s: %lu\n", Cidade1, Populacao1);
    printf("Carta 2 - %s: %lu\n", Cidade2, Populacao2);

    if (Populacao1 > Populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n", Cidade1);
    }else {
        printf("Resultado: Carta 2 (%s) venceu!\n", Cidade2);
    }
    printf("\n");

    // Menu de comparação

    int escolhaJogador;

    printf("> Comparação seletiva < \n");
    printf("Qual dos atribustos, você deseja comparar?\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos Turisticos\n");
    printf("5. Densidade Demográfica\n");
    printf("0. Regras\n\n");
    printf("Escolha a opção: ");
    scanf("%d", &escolhaJogador);
    printf("\n");

    /*
    - O nome dos dois países.
    - O atributo usado na comparação.
    - Os valores do atributo para cada carta.
    - Qual carta venceu.
    - Em caso de empate, exibir a mensagem "Empate!".
    
    */

    switch (escolhaJogador){
    case 1:

        if (Populacao1 > Populacao2)
        {
            printf("Cidade: %s da Carta 1 - Cidade: %s da Carta 2\n", Cidade1, Cidade2);
            printf("População: %lu da Carta 1 - População: %lu da Carta 2\n", Populacao1, Populacao2);
            printf("a Carta 1 Venceu!\n");
        } else 
        if (Populacao1 < Populacao2)
        {
            printf("Cidade: %s da Carta 1 - Cidade: %s da Carta 2\n", Cidade1, Cidade2);
            printf("População: %lu da Carta 1 - População: %lu da Carta 2\n", Populacao1, Populacao2);
            printf("a Carta 2 Venceu!\n");  
        } else {
            printf("Cidade: %s da Carta 1 - Cidade: %s da Carta 2\n", Cidade1, Cidade2);
            printf("População: %lu da Carta 1 - População: %lu da Carta 2\n", Populacao1, Populacao2);
            printf("Empate!\n");
        }
        
    break;

    
    case 2:

    if (Area1 > Area2)
    {
        printf("Cidade: %s da Carta 1 - Cidade: %s da Carta 2\n", Cidade1, Cidade2);
        printf("Area: %.2f da Carta 1 - Area: %.2f da Carta 2\n", Area1, Area2);
        printf("a Carta 1 Venceu!\n");
    } else 
    if (Area1 < Area2)
    {
        printf("Cidade: %s da Carta 1 - Cidade: %s da Carta 2\n", Cidade1, Cidade2);
        printf("Area: %.2f da Carta 1 - Area: %.2f da Carta 2\n", Area1, Area2);
        printf("a Carta 2 Venceu!\n");  
    } else {
        printf("Cidade: %s da Carta 1 - Cidade: %s da Carta 2\n", Cidade1, Cidade2);
        printf("Area: %.2f da Carta 1 - Area: %.2f da Carta 2\n", Area1, Area2);
        printf("Empate!\n");
    }
    break;


    case 3:
   
    if (PIB1 > PIB2)
    {
        printf("Cidade: %s da Carta 1 - Cidade: %s da Carta 2\n", Cidade1, Cidade2);
        printf("PIB: %.2lf da Carta 1 - PIB: %.2lf da Carta 2\n", PIB1, PIB2);
        printf("a Carta 1 Venceu!\n");
    } else 
    if (Area1 < Area2)
    {
        printf("Cidade: %s da Carta 1 - Cidade: %s da Carta 2\n", Cidade1, Cidade2);
        printf("Area: %.2lf da Carta 1 - Area: %.2lf da Carta 2\n", Area1, Area2);
        printf("a Carta 2 Venceu!\n");  
    } else {
        printf("Cidade: %s da Carta 1 - Cidade: %s da Carta 2\n", Cidade1, Cidade2);
        printf("Area: %.2lf da Carta 1 - Area: %.2lf da Carta 2\n", Area1, Area2);
        printf("Empate!\n");
    }
    
    break;
    case 4:
        
    if (PontosTuristicos1 > PontosTuristicos2)
    {
        printf("Cidade: %s da Carta 1 - Cidade: %s da Carta 2\n", Cidade1, Cidade2);
        printf("Numero de Pontos Turisticos: %d da Carta 1 - Numero de Pontos Turisticos: %d da Carta 2\n", PontosTuristicos1, PontosTuristicos2);
        printf("a Carta 1 Venceu!\n");
    } else 
    if (PontosTuristicos1 > PontosTuristicos2)
    {
        printf("Cidade: %s da Carta 1 - Cidade: %s da Carta 2\n", Cidade1, Cidade2);
        printf("Numero de Pontos Turisticos: %d da Carta 1 - Numero de Pontos Turisticos: %d da Carta 2\n", PontosTuristicos1, PontosTuristicos2);
        printf("a Carta 2 Venceu!\n");  
    } else {
        printf("Cidade: %s da Carta 1 - Cidade: %s da Carta 2\n", Cidade1, Cidade2);
        printf("Numero de Pontos Turisticos: %d da Carta 1 - Numero de Pontos Turisticos: %d da Carta 2\n", PontosTuristicos1, PontosTuristicos2);
        printf("Empate!\n");
    }
    break;


    case 5:

    if (densidade1 < densidade2)
    {
        printf("Cidade: %s da Carta 1 - Cidade: %s da Carta 2\n", Cidade1, Cidade2);
        printf("Densidade Populacional: %.2lf da Carta 1 - Densidade Populacional: %.2lf da Carta 2\n", densidade1, densidade2);
        printf("a Carta 1 Venceu!\n");
    } else 
    if (densidade1 > densidade2)
    {
        printf("Cidade: %s da Carta 1 - Cidade: %s da Carta 2\n", Cidade1, Cidade2);
        printf("Densidade Populacional: %.2lf da Carta 1 - Densidade Populacional: %.2lf da Carta 2\n", densidade1, densidade2);
        printf("a Carta 2 Venceu!\n");  
    } else {
        printf("Cidade: %s da Carta 1 - Cidade: %s da Carta 2\n", Cidade1, Cidade2);
        printf("Densidade Populacional: %.2lf da Carta 1 - Densidade Populacional: %.2lf da Carta 2\n", densidade1, densidade2);
        printf("Empate!\n");
    }
    break;


    case 0:
        printf("Regras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");
    break;

    default:
        break;
    
    

    }



}
