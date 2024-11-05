//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/M

#include<stdio.h>
#include<string.h>

int main(){
    char a[10001];

    scanf("%s",a);
    int lenA = strlen(a);

    char b[6] = "hello";

    int pos = 0;

    for(int i=0; i<lenA; i++){

        if(a[i] == b[pos]){
            pos++;
        }
        if(pos==5){
            printf("YES\n");
            return 0;
        }

    }

    printf("NO\n");
    return 0;

}