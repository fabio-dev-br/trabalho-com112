#include <stdio.h>
#include <stdlib.h>

/*-----Bubble Sort-----*/
void bubbleSort(int vetor[], int tamanho, int movimentacoes, int comparacoes) {
    double aux;

    for (int j = 0; j < tamanho; j++) {
        for (int i = 0; i < tamanho-1; i++) {
            comparacoes++;
            if (vetor[i] > vetor[i + 1]) {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
                movimentacoes++;
            }
        }
    }

    printf("%d %d\n", movimentacoes, comparacoes);

}

/*-----SELECTION-----*/
void selectionSort(int vetor[], int tamanho, int movimentacoes, int comparacoes) {
    int i, j, posicaoValorMinimo;

    for (i = 0; i < (tamanho - 1); i++) {
        posicaoValorMinimo = i;
        for (j = (i + 1); j < tamanho; j++) {
            if (vetor[j] < vetor[posicaoValorMinimo]) {
                posicaoValorMinimo = j;
            }
        }

        if (i != posicaoValorMinimo) {
            trocarPosicaoValores(&vetor[i], &vetor[posicaoValorMinimo]);
        }
    }
}

void trocarPosicaoValores(int *posicaoA, int *posicaoB) {
    int temporario;
    temporario = *posicaoA;
    *posicaoA = *posicaoB;
    *posicaoB = temporario;
}

/*-----INSERTION-----*/
void insertionSort(int vetor[], int tamanho, int movimentacoes, int comparacoes) {
    int i, j, valorAtual;

    for (j = 1; j < tamanho; j++) {
        valorAtual = vetor[j];
        i = j - 1;

        while (i >= 0 && vetor[i] > valorAtual) {
            vetor[i + 1] = vetor[i];
            i--;
        }

        vetor[i + 1] = valorAtual;
    }
}

/*-----MERGE-----*/
void mergeSort(int *vetor, int posicaoInicio, int posicaoFim) {
    int i, j, k, metadeTamanho, *vetorTemp;
    if (posicaoInicio == posicaoFim) return;

    // ordenacao recursiva das duas metades
    metadeTamanho = (posicaoInicio + posicaoFim) / 2;
    mergeSort(vetor, posicaoInicio, metadeTamanho);
    mergeSort(vetor, metadeTamanho + 1, posicaoFim);

    // intercalacao no vetor temporario t
    i = posicaoInicio;
    j = metadeTamanho + 1;
    k = 0;
    vetorTemp = (int *) malloc(sizeof (int) * (posicaoFim - posicaoInicio + 1));

    while (i < metadeTamanho + 1 || j < posicaoFim + 1) {
        if (i == metadeTamanho + 1) {
            // i passou do final da primeira metade, pegar v[j]
            vetorTemp[k] = vetor[j];
            j++;
            k++;
        } else {
            if (j == posicaoFim + 1) {
                // j passou do final da segunda metade, pegar v[i]
                vetorTemp[k] = vetor[i];
                i++;
                k++;
            } else {
                if (vetor[i] < vetor[j]) {
                    vetorTemp[k] = vetor[i];
                    i++;
                    k++;
                } else {
                    vetorTemp[k] = vetor[j];
                    j++;
                    k++;
                }
            }
        }

    }
    // copia vetor intercalado para o vetor original
    for (i = posicaoInicio; i <= posicaoFim; i++) {
        vetor[i] = vetorTemp[i - posicaoInicio];
    }
    free(vetorTemp);
}

/*-----QUICK-----*/
