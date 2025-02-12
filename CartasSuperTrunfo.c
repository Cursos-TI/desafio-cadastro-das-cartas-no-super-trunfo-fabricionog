#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[5];
    char nome_da_cidade[50];
    char carta[20];
    int populacao, pontos_turisticos;
    float area, pib, pib_per_capita, densidade_demografica;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\nsuper trunfo paises\n");
    printf("\ncadastro de cartas\n");
printf("\nDigite o nome do estado: \n");
scanf("%s", &estado);
printf("codigo da carta: \n");
scanf("%s", &carta);
printf("nome da cidade: \n");
scanf("%s", &nome_da_cidade);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
