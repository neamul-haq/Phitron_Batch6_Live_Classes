#include<stdio.h>

int main(){
    long long int a, b;

    scanf("%lld %lld", &a, &b);

    printf("%d %d\n", a, b);

    long long int vagses = a % b;

    printf("%lld", vagses);
}