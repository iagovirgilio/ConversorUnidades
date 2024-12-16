#include <stdio.h>
#include "comprimento.h"
#include "massa.h"
#include "volume.h"

int main() {
    int escolha;

    do {
        printf("\n### Conversor de Unidades ###\n");
        printf("1 - Comprimento\n");
        printf("2 - Massa\n");
        printf("3 - Volume\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                executar_conversao_comprimento();
                break;
            case 2:
                // Função para conversão de massa
                printf("Funcionalidade de massa em desenvolvimento...\n");
                break;
            case 3:
                // Função para conversão de volume
                printf("Funcionalidade de volume em desenvolvimento...\n");
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (escolha != 0);

    return 0;
}
