#include <stdio.h>

int main() {

// Variáveis em sequência numérica para continuidade das futuras cartas

    char estado1[50], estado2[50];
    char codigoc1[50], codigoc2[50];
    char nomec1[50], nomec2[50];
    int popc1, popc2;
    float areac1, areac2;
    float pibc1, pibc2;
    int turismoc1, turismoc2;
    
// Cadastramento Carta 01 com breve texto como títuto.

        printf("Cadastramento da Carta 1\n\n");

        printf("Digite uma letra de A a H para representar o estado: \n");
        scanf("%s", &estado1);

        printf("Digite o código da cidade acrescentando um número de 01 a 04: \n");
        scanf("%s", &codigoc1);

        printf("Digite o nome da cidade: \n");
        scanf("%s", &nomec1);

        printf("Digite a população da cidade: \n");
        scanf("%d", &popc1);

        printf("Digite a área em quilometros quadrados: \n");
        scanf("%f", &areac1);

        printf("Digite o Produto Interno Bruto da cidade: \n");
        scanf("%f", &pibc1);

        printf("Digite a quantidade de pontos turísticos da cidade: \n");
        scanf("%d", &turismoc1);

        printf("\n");
        printf("Carta 01\n");
        printf("\n");
        
        printf("Estado: %s\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\nÁrea (em km²): %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %d\n\n", estado1, codigoc1, nomec1, popc1, areac1, pibc1, turismoc1);


// Cadastramento Carta 02 com breve texto como títuto.

        printf("Cadastramento da Carta 2\n\n");

        printf("Digite uma letra de A a H para representar o estado: \n");
        scanf("%s", &estado2);

        printf("Digite o código da cidade acrescentando um número de 01 a 04: \n");
        scanf("%s", &codigoc2);

        printf("Digite o nome da cidade: \n");
        scanf("%s", &nomec2);

        printf("Digite a população da cidade: \n");
        scanf("%d", &popc2);

        printf("Digite a área em quilometros quadrados: \n");
        scanf("%f", &areac2);

        printf("Digite o Produto Interno Bruto da cidade: \n");
        scanf("%f", &pibc2);

        printf("Digite a quantidade de pontos turísticos da cidade: \n");
        scanf("%d", &turismoc2);
        
        printf("\n");
        printf("Carta 02\n");
        printf("\n");
        
        printf("Estado: %s\nCódigo da carta: %s\nNome da cidade: %s\nPopulação: %d\nÁrea (em km²): %.2f\nPIB: %.2f\nNúmero de pontos turísticos: %d\n\n", estado2, codigoc2, nomec2, popc2, areac2, pibc2, turismoc2);
            
        return 0;
}
