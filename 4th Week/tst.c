#include<stdio.h>
#include <stdlib.h>

int main(){
    // Dynamic array

    int n; 
    scanf("%d", &n);


    //int ar[n];

    int* arr;

    arr = (int *) malloc(n*sizeof(int));

    int extra;
    scanf("%d",&extra);

    arr = (int* ) realloc(arr, (n+extra)*sizeof(int));

    for(int i=0; i<15; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<15; i++){
        printf("%d ", arr[i]);
    }

    free(arr);


    


}