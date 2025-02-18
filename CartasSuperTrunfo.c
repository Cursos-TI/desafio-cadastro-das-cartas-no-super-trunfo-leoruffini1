#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char codCidade[20], codCidade2[20];
    char nome[20], nome2[20];
    float area, area2;
    float pib, pib2;
    int populacao, populacao2;

    printf("CADASTRO DE CIDADES PARA O SUPER TRUNFO\n CADASTRE CIDADES DE SÃO PAULO\n\n");

        printf("Digite o código da cidade\n");
        fgets(codCidade, 20, stdin);
        
        printf("Digite o nome da cidade da cidade\n");
        fgets(nome, 20, stdin);

        printf("Digite a área total da cidade em km quadrados\n");
        scanf("%f", &area);

        printf("Digite o PIB da cidade\n");
        scanf("%f", &pib);
       
        printf("Digite a população da cidade\n\n");
        scanf("%d", &populacao);
       
        printf("Carta registrada: %s \n\n", nome);
        
    //registro da segunda carta 

    printf("CADASTRO DA SEGUNDA CARTA\n CADASTRE CIDADES DE SÃO PAULO\n\n");

        printf("Digite o código da cidade\n");
        fgets(codCidade2, 20, stdin);
        
        printf("Digite o nome da cidade da cidade\n");
        fgets(nome2, 20, stdin);

        printf("Digite a área total da cidade em km quadrados\n");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade\n");
        scanf("%f", &pib2);
       
        printf("Digite a população da cidade\n");
        scanf("%d", &populacao2);
       
        printf("Carta registrada: %s \n\n", nome2); 


        //calculo da primera carta
        float densidade = populacao/area;
        float pibCapta = pib/populacao;

        //calculo da segunda carta
        float densidade2 = populacao2/area2;
        float pibCapta2 = pib2/populacao2 ;

        printf("Carta: %sPIB per capta: %0.2f - Densidade Populacional: %0.2f\n\n", nome, pibCapta, densidade);
        printf("Carta: %sPIB per capta: %0.2f - Densidade Populacional: %0.2f\n\n", nome2, pibCapta2, densidade2);

        if(pibCapta > pibCapta2){
            printf("A carta %s tem o PIB per capta maior\n", nome);
        }
        else{
            printf("A carta %s tem o PIB per capta maior\n", nome2);
        }

        if(densidade > densidade2){
            printf("A carta %s tem a Densidade Populacional maior\n", nome);
        }
        else{
            printf("A carta %s tem a Densidade Populacional maior\n", nome2);
        }
            
            
        
            
        


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
