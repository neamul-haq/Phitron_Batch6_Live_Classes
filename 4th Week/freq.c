
#include<stdio.h>
#include <stdlib.h>

int main(){
    //Frequency array:
    // index of frequency array: main array value
    // value of frequency array: count of main array values

    int n; 

    scanf("%d", &n);

    int arr[n+5];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int freq[100000+5] = {0};

    for(int i=0; i<n; i++){
        freq[arr[i]] += 1;
    }

    //1 bar er besi value ace koyta?
    int cnt=0;

    for(int i=0; i<100005; i++){
        if(freq[i] >1 ) {
            cnt++;
        }
    }

    printf("cnt: %d", cnt);


}