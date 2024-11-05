#include<stdio.h>
#include<string.h>
int main(){
    
    int n;
    scanf("%d",&n);

    int arr[n+5];

    int sum = 0;

    int gun =1;

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);

        // sum += arr[i];
        gun *= arr[i];
    }


    // for(int i=0; i<n; i++){
    //     printf("%d ", arr[i]);
    // }

    // printf("%d", sum);
    printf("%d", gun);

}