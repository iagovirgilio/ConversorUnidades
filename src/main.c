#include <stdio.h>
#include "comprimento.h"
#include "massa.h"
#include "volume.h"
#include "temperatura.h"
#include "area.h"
#include "velocidade.h"
#include "tempo.h"

int main() {
    int escolha;

    do {
        printf("\n### Conversor de Unidades ###\n");
        printf("1 - Comprimento\n");
        printf("2 - Massa\n");
        printf("3 - Volume\n");
        printf("4 - Temperatura\n");
        printf("5 - Área\n");
        printf("6 - Velocidade\n");
        printf("7 - Tempo\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                executar_conversao_comprimento();
                break;
            case 2:
                // Função para conversão de massa
                printf("\nFuncionalidade de massa em desenvolvimento...\n");
                break;
            case 3:
                // Função para conversão de volume
                printf("\nFuncionalidade de volume em desenvolvimento...\n");
                break;
            case 4:
                // Função para conversão de temperatura
                printf("\nFuncionalidade de temperatura em desenvolvimento...\n");
                break;
            case 5:
                // Função para conversão de area
                printf("\nFuncionalidade de area em desenvolvimento...\n");
                break;
            case 6:
                // Função para conversão de velocidade
                printf("\nFuncionalidade de velocidade em desenvolvimento...\n");
                break;
            case 7:
                // Função para conversão de tempo
                printf("\nFuncionalidade de tempo em desenvolvimento...\n");
                break;
            case 0:
                printf("\nSaindo do programa...\n");
                break;
            default:
                printf("\nOpção inválida!\n");
                break;
        }
    } while (escolha != 0);

    return 0;
}
