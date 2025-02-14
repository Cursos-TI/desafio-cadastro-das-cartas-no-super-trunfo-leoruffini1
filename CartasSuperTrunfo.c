#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char codCidade[20];
    char nome[20];
    float area;
    float pib;
    int turismo;

    printf("CADASTRO DE CIDADES PARA O SUPER TRUNFO\n CADASTRE CIDADES DE SÃO PAULO\n\n");

        printf("Digite o código da cidade\n");
        fgets(codCidade, 20, stdin);
        
        printf("Digite o nome da cidade da cidade\n");
        fgets(nome, 20, stdin);

        printf("Digite a área total da cidade em km quadrados\n");
        scanf("%f", &area);

        printf("Digite o PIB da cidade\n");
        scanf("%f", &pib);
       
        printf("Digite quantos pontos turisticos a cidade possui\n");
        scanf("%d", &turismo);
       
        printf("Código da cidade: %sNome da cidade: %sÁrea: %f \nPIB: %f \nNumero de pontos turistico: %d\n", codCidade, nome, area, pib, turismo);


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
