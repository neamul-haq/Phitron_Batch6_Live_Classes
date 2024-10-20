#include<stdio.h>

int main() {
    /*
    N = 5
	--> 5 4 3 2 1//i=5 
	    4 3 2 1
        3 2 1
        2 1
        1
    */
    
    int N;

    scanf("%d", &N);

    for(int i = N; i>=1; i--){//outer loop or row

        for(int j=i; j>=1; j--){//Innner loop
            printf("%d ", j);
        }
        printf("\n");
    }


    return 0;
}
