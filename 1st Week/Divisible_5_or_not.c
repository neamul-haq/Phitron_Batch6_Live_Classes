#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 


    int i, N;

    scanf("%d", &N);

    for(i=1; i<=N; i++){
        printf("%d ", i);
        
        if(i % 5 == 0){
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }   
    return 0;
}
