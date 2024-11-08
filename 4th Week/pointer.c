#include<stdio.h>
#include <stdlib.h>

int main(){
    // pointer is variable

    // int x = 10;

    // int* p = &x;

    // printf("%d\n", p);
    // // printf(" x er address: %d", &x);

    // printf(" *p er value: %d\n", *p);

    // printf(" x er value age: %d\n", x);

    // *p = 20;

    // printf(" x er val pore :%d", x);



    //sum of two elements using pointer:

    int x, y;
    scanf("%d %d", &x, &y);

    int* px = &x;
    int* py = &y;

    int sum = *px + *py;

    printf("%d",sum);


}