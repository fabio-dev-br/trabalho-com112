#include <stdio.h>
#include <stdlib.h>

int menu()
{
    int operacao;
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

    case 5://QUICK
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
    int op;
    do
    {
        op=menu();
    }
    while(op!=0);


    return 0;
}
