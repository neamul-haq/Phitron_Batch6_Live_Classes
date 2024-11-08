#include<stdio.h>
#include <stdlib.h>

int main(){
    //2D array:

    int n; 

    scanf("%d", &n);

    //int arr[n];

    int arr[n][n];

    // for(int i=0; i<n; i++){
    //     scanf("%d", &arr[i]);
    // }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            scanf("%d", &arr[i][j]);
        }
    }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
            
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // //scalar or not

    // int first = arr[0][0];
    // int flag = 1;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(i == j){
    //             if(arr[i][j] != first){
    //                 flag = 0;
    //                 break;
    //             }
    //         }
    //         else{
    //             if(arr[i][j] != 0){
    //                 flag = 0;
    //                 break;
    //             }
    //         }
    //     }

    //     if(flag==0){
    //         break;
    //     }
    // }


    // if(flag == 1){
    //     printf("scalar\n");
    // }
    // else{
    //     printf("Not Scalar\n");
    // }
    

    // frequency array of 2D array

    int freq[100005] = {0};

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            
            freq[ arr[i][j] ] +=1;
        }

    }

    //printf("%d", freq[9]);

    for(int i=0; i<10; i++){
        printf("%d ", freq[i]);
    }


}