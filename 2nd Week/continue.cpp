#include<stdio.h>

int main() {
    
    //Continue Statement Learning
    int n;

    scanf("%d", &n);

    for(int i=1; i<=n; i++){

        if(i==5){
            continue;
        }
        printf("%d ", i);

        
    }

    return 0;
}
