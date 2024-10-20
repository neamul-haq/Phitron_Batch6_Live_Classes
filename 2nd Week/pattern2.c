#include<stdio.h>

int main() {
    /*
      N=5
	--> 12345 //i=1
	     1234 //i=2
	      123 //i=3
	       12 //i=4
	        1 //i=5
    */
    
    int N;
    scanf("%d", &N);

    for(int i=1; i<=N; i++){

        for(int j=1; j<=i-1; j++){
            printf(" ");
        }


        for(int j=1; j<=N-i+1; j++){
            printf("%d", j);
        }
        printf("\n");
    }


    return 0;
}
