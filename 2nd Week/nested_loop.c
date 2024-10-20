#include<stdio.h>

int main() {
    
    //Nested Loop Learning
    int n,m;
    scanf("%d%d", &n, &m);

    for(int j=1; j<=n; j++){

        for(int i=1; i<=m; i++){

            printf("%d ", i);
 
        }
        printf("\n");
    }

    return 0;
}
