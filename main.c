#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Carta {
    char continente[20];
    char codigo[5];
    char nome[20];
    int populacao;
    float area;
    float pib;
    float idh;
};

void mostrarCarta(struct Carta c) {
    printf("\n--- Carta %s ---\n", c.nome);
    printf("Continente: %s\n", c.continente);
    printf("Código: %s\n", c.codigo);
    printf("População: %d milhões\n", c.populacao);
    printf("Área: %.0f km²\n", c.area);
    printf("PIB: %.2f trilhões USD\n", c.pib);
    printf("IDH: %.3f\n", c.idh);
    printf("----------------------\n");
}

int main() {
    srand(time(NULL));

    struct Carta cartas[3] = {
        {"América do Sul", "P01", "Brasil", 213, 8515770, 2.13, 0.786},
        {"Europa", "P02", "Noruega", 5, 323772, 0.50, 0.970},
        {"Ásia", "P03", "Índia", 1438, 3287260, 4.19, 0.685}
    };

    int jogador = rand() % 3;
    int computador;
    do {
        computador = rand() % 3;
    } while (computador == jogador);

    struct Carta cartaJogador = cartas[jogador];
    struct Carta cartaComputador = cartas[computador];

    printf("Sua carta foi sorteada:\n");
    mostrarCarta(cartaJogador);

    int escolha;
    printf("\nEscolha um atributo para disputar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - IDH\n");
    printf("Digite o número do atributo: ");
    scanf("%d", &escolha);

    printf("\nCarta do computador:\n");
    mostrarCarta(cartaComputador);

    float valorJogador, valorComputador;

    switch (escolha) {
        case 1:
            valorJogador = cartaJogador.populacao;
            valorComputador = cartaComputador.populacao;
            break;
        case 2:
            valorJogador = cartaJogador.area;
            valorComputador = cartaComputador.area;
            break;
        case 3:
            valorJogador = cartaJogador.pib;
            valorComputador = cartaComputador.pib;
            break;
        case 4:
            valorJogador = cartaJogador.idh;
            valorComputador = cartaComputador.idh;
            break;
        default:
            printf("Atributo inválido.\n");
            return 1;
    }

    if (valorJogador > valorComputador) {
        printf("\nVocê venceu! 🎉\n");
    } else if (valorJogador < valorComputador) {
        printf("\nVocê perdeu! 😞\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
