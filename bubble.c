#include <stdio.h>
#include <stdlib.h>


int a[]={45,56,12,43,95,19,8,67,0};
int MAX=0;

void initialize(int *vet[]){
while (vet[MAX]>0){
    MAX++;
}
}

void buble(int *vet[]){
    int i,j,x;
    for(i=0;i<MAX;i++){
        for(j=MAX-1;j>i;j--){
            if(vet[j-1]>vet[j]){
                x=vet[j-1];
                vet[j-1]=vet[j];
                vet[j]=x;
            }
        }
    }
}

void main(){
    initialize(a);
    int y;
    printf("\n ---Organizacao---");

    printf("\n\n Desorg:  {");
    for(y=0;y<MAX-1;y++)
        printf("%i, ",a[y]);
    printf("%i}\n",a[MAX-1]);

    buble(a);

    printf("\n\n Buble:   {");
    for(y=0;y<MAX-1;y++)
        printf("%i, ",a[y]);
    printf("%i}\n\n\n ",a[MAX-1]);

    system("pause");
}
