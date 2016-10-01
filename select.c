#include <stdio.h>
#include <stdlib.h>
#define MAX 8

int a[]={45,56,12,43,95,19,8,67};



void select(int *vet[]){
    int i,j,x,menor,y;
    for(i=0;i<MAX-1;i++){
        menor=i;
        for(j=i+1;j<MAX;j++){
            if(vet[j]<vet[menor])
                menor=j;
        }
        x=vet[i];
        vet[i]=vet[menor];
        vet[menor]=x;
        printf("\n\n Passo%i:  {",i+1);
        for(y=0;y<MAX-1;y++)
            printf("%i, ",a[y]);
        printf("%i}\n",a[MAX-1]);
    }
}

void main(){
    int y;
    printf("\n ---Organizacao---");

    printf("\n\n Desorg:  {");
    for(y=0;y<MAX-1;y++)
        printf("%i, ",a[y]);
    printf("%i}\n",a[MAX-1]);

    select(a);

    printf("\n\n Select:  {");
    for(y=0;y<MAX-1;y++)
        printf("%i, ",a[y]);
    printf("%i}\n\n\n ",a[MAX-1]);

    system("pause");
}
