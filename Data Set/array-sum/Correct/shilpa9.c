#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int addtion(int a,int b){
    return a+b;
}
int main() {

    int n,i,sum=0;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        scanf("%d ",&array[i]);
        sum=addtion(sum,array[i]);
    } 
    printf("%d",sum);
    return 0;
}
