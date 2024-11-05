//(i) Given n type chocklets price sortly, you have 200 tk. 
//how many types of chocklet you can buy.

#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int arr[n];


    int cnt = 0;

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }


    for(int i=0; i<n; i++){
        
        if(arr[i] >=10 && arr[i] <= 100){
            cnt++;
        }

    }

    printf("%d",cnt);
}