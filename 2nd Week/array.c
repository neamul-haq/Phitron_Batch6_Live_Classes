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

    // for(int i=0; i<N; i++){
    //     printf("%d ", arr[i]);
    // }


    printf("%d", arr[2]);

    return 0;
}
