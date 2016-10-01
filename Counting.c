#include <stdio.h>
#define MAX 10

int vet[]={3,7,3,6,4,5,10,6,9,7};///vetor desorganisado
int aux[]={0,0,0,0,0,0,0,0,0,0,0};///vetor contador (salva as quantidades dos numeros nas respectivas posições)
int maior = 10;///maior valor dentro do vetor desorganisado
int i;

main(){

    printf("\n\n Desorg:  {");
        for(i=0;i<MAX-1;i++)
            printf("%i ,",vet[i]);
        printf("%i}\n",vet[MAX-1]);

    for(i=0;i<MAX;i++)
        aux[vet[i]]++;

    printf("\n\n Count:  {");
        for(i=0;i<maior;i++)
            printf("%i ,",aux[i]);
        printf("%i}\n",aux[MAX-1]);


    int j,k=0;
    for(i=0;i<=maior;i++){
        for(j=0;j<aux[i];j++)
            vet[k++] = i;
    }

    printf("\n\n Org:  {");
        for(i=0;i<MAX-1;i++)
            printf("%i ,",vet[i]);
        printf("%i}\n",vet[MAX-1]);
}
