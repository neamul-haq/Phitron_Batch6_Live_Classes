//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

#include<stdio.h>

int main() {
    /*
      Array 
    */
    
    int N;
    scanf("%d", &N);

    int arr[N];

    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<N; i++){
        if(arr[i] < 0){
            arr[i] = 2;
        }
        else if(arr[i] > 0){
            arr[i] = 1;
        }
    }

    for(int i=0; i<N; i++){
        printf("%d ", arr[i]);
    }



    return 0;
}
