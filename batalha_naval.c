#include <stdio.h>

// Constantes para o tamanho do tabuleiro e dos navios
#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

// Função para imprimir o tabuleiro
void imprimirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("Tabuleiro:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Declaração do tabuleiro 10x10
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Coordenadas iniciais definidas diretamente no código
    int linhaNavioHorizontal = 2;
    int colunaNavioHorizontal = 4;

    int linhaNavioVertical = 5;
    int colunaNavioVertical = 1;

    // Verificação de limites para o navio horizontal
    if (colunaNavioHorizontal + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        printf("Erro: navio horizontal fora dos limites!\n");
        return 1;
    }

    // Verificação de limites para o navio vertical
    if (linhaNavioVertical + TAMANHO_NAVIO > TAMANHO_TABULEIRO) {
        printf("Erro: navio vertical fora dos limites!\n");
        return 1;
    }

    // Verificação de sobreposição antes de posicionar os navios
    int sobreposicao = 0;

    // Checagem para o navio horizontal
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] != 0) {
            sobreposicao = 1;
        }
    }

    // Checagem para o navio vertical
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (tabuleiro[linhaNavioVertical + i][colunaNavioVertical] != 0) {
            sobreposicao = 1;
        }
    }

    if (sobreposicao) {
        printf("Erro: os navios estão se sobrepondo!\n");
        return 1;
    }

    // Posicionamento do navio horizontal (valor 3)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] = 3;
    }

    // Posicionamento do navio vertical (valor 3)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = 3;
    }

    // Exibe o tabuleiro final
    imprimirTabuleiro(tabuleiro);

    return 0;
}