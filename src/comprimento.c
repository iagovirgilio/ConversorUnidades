#include <stdio.h>
#include "comprimento.h"

float metros_para_centimetros(float metros) {
    return metros * 100;
}

float centimetros_para_milimetros(float centimetros) {
    return centimetros * 10;
}

void executar_conversao_comprimento() {
    float valor, resultado;
    int opcao;

    printf("\n### Conversão de Comprimento ###\n");
    printf("1 - Metros para Centímetros\n");
    printf("2 - Centímetros para Milímetros\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%f", &valor);

    if (opcao == 1) {
        resultado = metros_para_centimetros(valor);
        printf("\n%.2f metros = %.2f centímetros\n", valor, resultado);
    } else if (opcao == 2) {
        resultado = centimetros_para_milimetros(valor);
        printf("\n%.2f centímetros = %.2f milímetros\n", valor, resultado);
    } else {
        printf("\nOpção inválida!\n");
    }
}
