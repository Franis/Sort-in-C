#include <stdio.h>
#include <conio.h>
#define MAX 8

int main(){
    int a[]={45,56,12,43,95,19,8,67},x,i;

    //for(i=0;i<MAX;i++)
    //    a[i]=rand()%99+1;

    printf("\n\n Desorg:  {");
    for(i=0;i<MAX-1;i++)
        printf("%i ,",a[i]);
    printf("%i}\n",a[MAX-1]);

    /*
    ///Inverção do vetor
    for(i=0;i<(MAX/2);i++){
        x=a[i];
        a[i]=a[(MAX-1)-i];
        a[(MAX-1)-i]=x;
    }*/
    x = MAX;
    qsort(a,x);

    printf("\n\n Quick:  {");
    for(i=0;i<MAX-1;i++)
        printf("%i ,",a[i]);
    printf("%i}\n",a[MAX-1]);

    system("pause");
    return 0;
}
void quick(int esq,int dir,int a[]){
    int i=esq,j=dir,y;
    int x=a[(int)floor((i+j)/2)],w;

    do{
        while(a[i]<x)
            i++;
        while(x<a[j])
            j--;
        if(i<=j){
            w=a[i];
            a[i]=a[j];
            a[j]=w;
            i++;
            j--;
        }
    }while(i<=j);
    printf("\n\n mid:  {");
    for(y=0;y<MAX-1;y++)
        printf("%i ,",a[y]);
    printf("%i}\n",a[MAX-1]);
    if(esq<j)
        quick(esq,j,a);
    if(i<dir)
        quick(i,dir,a);
}

void qsort(int a[],int N){
    quick(0,N-1,a);
}
