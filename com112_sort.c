//Bubble Sort
void bubblesort( int vetorDesordenado[], int tamanhoVetor){
    int x;
    int troca;
    int aux;

 while (x<=tamanhoVetor  && troca==1)
    {
        troca=0;
        for(i=0; ( tamanhoVetor - 1 ) i++)
        {
            if(v[i].salario<v[i+1].salario)
            {
                troca=1;
                aux = v[i];
                v[i]=v[i+1];
                v[i+1]= aux;
            }
        }
        x=x+1;
    }
}


//Selection Sort

void selectionSort( int vetorDesordenado[], int tamanhoVetor )
{
   int i, j, posicaoValorMinimo;

   for (i = 0; i < ( tamanhoVetor - 1 ); i++)
   {
      posicaoValorMinimo = i;
      for (j = ( i + 1 ); j < tamanhoVetor; j++)
      {
         if( vetorDesordenado[j] < vetorDesordenado[posicaoValorMinimo] )
         {
           posicaoValorMinimo = j;
         }
       }

       if ( i != posicaoValorMinimo )
       {
          trocarPosicaoValores( &vetorDesordenado[i], &vetorDesordenado[posicaoValorMinimo] );
       }
   }
}

void trocarPosicaoValores( int *posicaoA, int *posicaoB )
{
   int temporario;
   temporario = *posicaoA;
   *posicaoA = *posicaoB;
   *posicaoB = temporario;
}





//Insertion Sort
void insertionSort(int vetorDesordenado[], int tamanhoVetor )
{
   int i, j, valorAtual;

   for( j=1; j < tamanhoVetor; j++ )
   {
      valorAtual = vetorDesordenado[j];
      i = j-1;

      while(i >= 0 && vetorDesordenado[i] > valorAtual)
      {
        vetorDesordenado[i+1] = vetorDesordenado[i];
        i--;
      }

      vetorDesordenado[i+1] = valorAtual;
   }
}



//Merge Sort

void mergeSort( int *vetorDesorndeado, int posicaoInicio, int posicaoFim )
{
   int i,j,k,metadeTamanho,*vetorTemp;
   if ( posicaoInicio == posicaoFim ) return;

   // ordenacao recursiva das duas metades
   metadeTamanho = ( posicaoInicio+posicaoFim )/2;
   mergeSort( vetorDesorndeado, posicaoInicio, metadeTamanho);
   mergeSort( vetorDesorndeado, metadeTamanho+1,posicaoFim );

   // intercalacao no vetor temporario t
   i = posicaoInicio;
   j = metadeTamanho+1;
   k = 0;
   vetorTemp = (int *) malloc(sizeof(int) * (posicaoFim-posicaoInicio+1));

   while( i < metadeTamanho+1 || j  < posicaoFim+1 )
   {
      if ( i == metadeTamanho+1 )
      { // i passou do final da primeira metade, pegar v[j]
         vetorTemp[k] = vetorDesorndeado[j];
         j++;
         k++;
      }
      else
      {
         if (j==posicaoFim+1)
         {
            // j passou do final da segunda metade, pegar v[i]
            vetorTemp[k] = vetorDesorndeado[i];
            i++;
            k++;
         }
         else
         {
            if (vetorDesorndeado[i] < vetorDesorndeado[j])
            {
               vetorTemp[k] = vetorDesorndeado[i];
               i++;
               k++;
            }
            else
            {
              vetorTemp[k] = vetorDesorndeado[j];
              j++;
              k++;
            }
         }
      }

   }
   // copia vetor intercalado para o vetor original
   for( i = posicaoInicio; i <= posicaoFim; i++ )
   {
      vetorDesorndeado[i] = vetorTemp[i-posicaoInicio];
   }
   free(vetorTemp);
}






//Quick Sort
