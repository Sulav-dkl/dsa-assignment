#include <stdio.h>

void heapify(int arr[], int n, int i, int isMin){
    int extreme=i, l=2*i+1, r=2*i+2;

    if(l<n && (isMin ? arr[l]<arr[extreme] : arr[l]>arr[extreme]))
        extreme=l;
    if(r<n && (isMin ? arr[r]<arr[extreme] : arr[r]>arr[extreme]))
        extreme=r;

    if(extreme!=i){
        int t=arr[i]; arr[i]=arr[extreme]; arr[extreme]=t;
        heapify(arr,n,extreme,isMin);
    }
}

void buildHeap(int arr[], int n, int isMin){
    for(int i=n/2-1;i>=0;i--)
        heapify(arr,n,i,isMin);
}

int main(){
    int arr[]={4,10,3,5,1}, n=5;

    buildHeap(arr,n,1);
    printf("Min Heap: ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);

    int arr2[]={4,10,3,5,1};
    buildHeap(arr2,n,0);
    printf("\nMax Heap: ");
    for(int i=0;i<n;i++) printf("%d ",arr2[i]);

    return 0;
}