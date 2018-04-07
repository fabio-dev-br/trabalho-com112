#include <stdio.h>
#include <stdlib.h>
#include "com112_file.h"
#include "com112_sort.h"

int menu()
{
    int operacao;

    /*-----MENU-----*/

    printf("MENU:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Merge Sort\n");
    printf("5. Quick Sort\n");
    printf("6. Sair\n");
    printf("Opcao: ");
    scanf("%d",&operacao);

    switch (operacao)
    {

    case 1://BUBBLE
        system("cls");

        system("pause");
        system("cls");
        break;

    case 2://SELECTION
        system("cls");

        system("pause");
        system("cls");
        break;

    case 3://INSERTION
        system("cls");

        system("pause");
        system("cls");
        break;

    case 4://MERGE
        system("cls");

        system("pause");
        system("cls");
        break;

    case 5://QUICK1
        system("cls");

        system("pause");
        system("cls");
        break;

    case 6:
        return 0;

    default:
        printf("Numero invalido!\n");
        system("pause");
        system("cls");
    }
    return operacao;
}
int main()
{
    int op, qtdNumeros;
    /*-----CRIAR ARQUIVOS-----*/

    FILE *arqEntrada;
    arqEntrada = fopen("com112_entrada.txt", "w+");

    FILE *arqSaida;
    arqSaida = fopen("com112_saida.txt", "w+");

    FILE *arqRelatorio;
    arqRelatorio = fopen("com112_relatorio.txt", "w+");

    /*-----DEFINE VETOR e TAMANHO-----*/

    printf("Digite a quantidade numeros do vetor\n");
    scanf("%d",&qtdNumeros);
    system("cls");

    int vetor[qtdNumeros+2];

    /*-----ESCREVE QUANTIDADE E NUMEROS NO ARQUVIOENTRADA-----*/

    fprintf(arqEntrada, "%d\n",qtdNumeros);//Tamanho do vetor

    srand(time(NULL));

    for (int i=0; i<qtdNumeros; i++){//Numeros do vetor
        vetor[i] = rand()%qtdNumeros*2;
        fprintf(arqEntrada, "%d ",vetor[i]);
    }

    fclose(arqEntrada);


    /*-----EXECUTA MENU-----*/

    do
    {
        op=menu();
    }
    while(op!=0);


    return 0;
}
