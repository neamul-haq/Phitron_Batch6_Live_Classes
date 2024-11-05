#include<stdio.h>
#include<string.h>

int main(){
    // string is a char type array

    // int arr[10];
     char a[100], b[100];


    scanf("%s %s", a, b);

    //string length
    int len = strlen(a);

    printf("length of string a: %d\n", len);


    //copy of string

    // strcpy(a,b);

    // printf("%s %s", a, b);

    //string concatation

    // strcat(b,a);
    // printf("%s %s", a, b);


    int cmp = strcmp(a,b);

    if(cmp<0){
        printf("string a less than string b");
    }
    else if(cmp>0){
        printf("string a greater than string b");
    }
    else {
        printf("%d\n", cmp);
        printf("Two string is equal");
    }



    return 0;

}