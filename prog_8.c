#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble(int a[], int n, int *comp, int *swap){
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++){
            (*comp)++;
            if(a[j]>a[j+1]){
                int t=a[j]; a[j]=a[j+1]; a[j+1]=t;
                (*swap)++;
            }
        }
}

void selection(int a[], int n, int *comp, int *swap){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            (*comp)++;
            if(a[j]<a[min]) min=j;
        }
        if(min!=i){
            int t=a[i]; a[i]=a[min]; a[min]=t;
            (*swap)++;
        }
    }
}

void insertion(int a[], int n, int *comp, int *swap){
    for(int i=1;i<n;i++){
        int key=a[i], j=i-1;
        while(j>=0 && (++(*comp), a[j]>key)){
            a[j+1]=a[j];
            (*swap)++;
            j--;
        }
        a[j+1]=key;
    }
}

int main(){
    int n, choice, comp=0, swap=0;
    printf("Enter N: ");
    scanf("%d",&n);

    int a[n];
    srand(time(0));
    for(int i=0;i<n;i++) a[i]=rand()%1000+1;

    printf("Before: ");
    for(int i=0;i<n;i++) printf("%d ",a[i]);

    printf("\n1.Bubble 2.Selection 3.Insertion: ");
    scanf("%d",&choice);

    switch(choice){
        case 1: bubble(a,n,&comp,&swap); break;
        case 2: selection(a,n,&comp,&swap); break;
        case 3: insertion(a,n,&comp,&swap); break;
    }

    printf("After: ");
    for(int i=0;i<n;i++) printf("%d ",a[i]);

    printf("\nComparisons: %d\nSwaps: %d\n",comp,swap);
    return 0;
}