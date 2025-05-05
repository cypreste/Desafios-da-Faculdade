#include <stdio.h>

int main() {
    int opcao;

    // Dados da carta 1
    char nome1[30] = "Brasil";
    int populacao1 = 211000000;
    float area1 = 8515767.0;
    float pib1 = 1840.0;
    int pontos1 = 10;
    float densidade1 = 24.77;

    // Dados da carta 2
    char nome2[30] = "Argentina";
    int populacao2 = 44938712;
    float area2 = 2780400.0;
    float pib2 = 450.0;
    int pontos2 = 7;
    float densidade2 = 16.16;

    // Exibe as cartas
    printf("=== SUPER TRUNFO: Comparador de Países ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção escolhida: ");
    scanf("%d", &opcao);

    // Comparação de cartas 
    printf("\nComparando: %s x %s\n", nome1, nome2);

    switch (opcao) {
        case 1:
            printf("População: %d x %d\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nome1);
            } else {
                if (populacao1 < populacao2) {
                    printf("Vencedor: %s\n", nome2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 2:
            printf("Área: %.2f x %.2f\n", area1, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", nome1);
            } else {
                if (area1 < area2) {
                    printf("Vencedor: %s\n", nome2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 3:
            printf("PIB: %.2f x %.2f\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nome1);
            } else {
                if (pib1 < pib2) {
                    printf("Vencedor: %s\n", nome2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 4:
            printf("Pontos Turísticos: %d x %d\n", pontos1, pontos2);
            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", nome1);
            } else {
                if (pontos1 < pontos2) {
                    printf("Vencedor: %s\n", nome2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        case 5:
            printf("Densidade Demográfica: %.2f x %.2f\n", densidade1, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", nome1);
            } else {
                if (densidade1 > densidade2) {
                    printf("Vencedor: %s\n", nome2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        default:
            printf("Opção inválida! Tente novamente com um número de 1 a 5.\n");
    }

    return 0;
}
