#include <stdio.h>
#include <stdlib.h>

void escreverArquivo(FILE *arqEntrada, int qtdNumeros)
{
    fprintf(arqEntrada, "%d\n",qtdNumeros);//Tamanho do vetor

    srand(time(NULL));

    for (int i=0; i<qtdNumeros; i++) //Numeros do vetor
    {
        fprintf(arqEntrada, "%d ",rand()%qtdNumeros);
    }

    fclose(arqEntrada);
}

void lerArquivo(int *vetor)
{
    int qtdNumeros;

    FILE *arqEntrada;
    arqEntrada = fopen("com112_entrada.txt", "r");

    fscanf(arqEntrada,"%d\n",&qtdNumeros);

    for(int i=0; i<qtdNumeros; i++)
    {
        fscanf(arqEntrada,"%d ",&vetor[i]);
    }

    fclose(arqEntrada);

}
