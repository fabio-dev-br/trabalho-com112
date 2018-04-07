//Bubble Sort
void bubble()
 while (x<=n && troca==1)
    {
        troca=0;
        for(i=0; i<=n-2; i++)
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



//Selection Sort






//Insertion Sort




//Merge Sort








//Quick Sort
