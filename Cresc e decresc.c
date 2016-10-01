#include <stdio.h>
#include <stdlib.h>
#define MAX 9

int a[]={0,45,56,12,43,95,19,8,67},i,j;

void cres(int *vet[]){
    for (i=2;i<MAX;i++){
        vet[0]=vet[i];
        j=i;
        while(a[0]<a[j-1]){
            vet[j]=vet[j-1];
            j--;
        }
        vet[j]=vet[0];
    }
}

void decres(int *vet[]){
    for (i=MAX-1;i>0;i--){
        vet[0]=vet[i];
        j=i;
        while(vet[0]<vet[j+1] && j!=MAX){
            vet[j]=vet[j+1];
            j++;
        }
        vet[j]=vet[0];
    }
}

void main(){
    int x;
    printf("---Organizacao---");

    printf("\n\n Desorg:  {");
    for(x=1;x<MAX-1;x++)
        printf("%i ,",a[x]);
    printf("%i}\n",a[MAX-1]);

    cres(a);

    printf("\n\n Cresc:   {");
    for(x=1;x<MAX-1;x++)
        printf("%i ,",a[x]);
    printf("%i}\n",a[MAX-1]);

    decres(a);

    printf("\n\n Decresc: {");
    for(x=1;x<MAX-1;x++)
        printf("%i ,",a[x]);
    printf("%i}\n\n\n",a[MAX-1]);

    system("pause");
}
