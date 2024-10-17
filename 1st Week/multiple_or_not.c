#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int a, b;
    
    scanf("%d%d", &a, &b);

    if(a % b == 0 || b % a == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    
    return 0;
}
